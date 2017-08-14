import sys
import socket
import zlib
import time
from panda3d.core import *

PACKET_REQUESTHOSTLIST = 15
PACKET_HOSTLIST = 16
PACKET_REGISTERHOST = 17
PACKET_CLIENTCONNECTNOTIFICATION = 19

class ServerInfo(object):

    def __init__(self, ip, port, connect_address, username, map, active_players, player_slots):
        self.ip = ip
        self.port = port
        self.connect_address = connect_address
        self.username = username
        self.map = map
        self.active_players = active_players
        self.player_slots = player_slots

class LobbyServer(object):

    def __init__(self):
        self.socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.socket.setblocking(False)
        self.socket.bind(('0.0.0.0', 1336))
        self.shutdown = False
        self.server_info = []
        self.timeout = 10
        self.timeout_tasks = {}

    @property
    def current_time(self):
        return time.time()

    def get_existing_info(self, username):
        for info in self.server_info:
            if info.username == username:
                return info

        return None

    def get_info_from_address(self, ip, port):
        for info in self.server_info:
            if info.ip == ip and info.port == port:
                return info

        return None

    def send_datagram(self, datagram, address):
        if not datagram.get_length():
            return

        data = zlib.compress(datagram.get_message())

        try:
            self.socket.sendto(data, address)
        except socket.error:
            pass

        datagram.clear()

    def handle_incoming(self, data, address):
        if not data:
            return

        message = NetDatagram(zlib.decompress(data))
        iterator = DatagramIterator(message)

        if not iterator.getRemainingSize():
            return

        code = iterator.get_uint8()

        if code == PACKET_REQUESTHOSTLIST:
            self.handle_send_hostlist(iterator, address)
        elif code == PACKET_REGISTERHOST:
            self.handle_registerhost(iterator, address)
        elif code == PACKET_CLIENTCONNECTNOTIFICATION:
            self.handle_playerconnect(iterator, address)

    def handle_send_hostlist(self, iterator, address):
        datagram = NetDatagram()
        datagram.add_uint8(PACKET_HOSTLIST)
        datagram.add_uint16(len(self.server_info))

        for info in self.server_info:
            datagram.add_string(info.connect_address[0])
            datagram.add_uint16(info.connect_address[1])
            datagram.add_string(info.username)
            datagram.add_string(info.map)
            datagram.add_uint8(info.active_players)
            datagram.add_uint8(info.player_slots)

        self.send_datagram(datagram, address)

    def handle_registerhost(self, iterator, address):
        username = iterator.get_string()
        map = iterator.get_string()
        active_players = iterator.get_uint8()
        player_slots = iterator.get_uint8()
        connect_address = [iterator.get_string(), iterator.get_uint16()]
        info = self.get_existing_info(username)

        if info:
            info.map = map
            info.active_players = active_players
            info.player_slots = player_slots
        else:
            info = ServerInfo(
                address[0],
                address[1],
                connect_address,
                username,
                map,
                active_players,
                player_slots)

            self.server_info.append(info)

        self.timeout_tasks[address] = self.current_time

    def handle_unregisterhost(self, address):
        if address not in self.timeout_tasks:
            return

        del self.timeout_tasks[address]
        host = self.get_info_from_address(address[0], address[1])

        if host not in self.server_info:
            return

        self.server_info.remove(host)

    def handle_playerconnect(self, iterator, address):
        ip = iterator.get_string()
        port = iterator.get_uint16()

        info = self.get_info_from_address(ip, port)

        if not info:
            return

        info.active_players += 1

    def update(self):
        for address, timestamp in self.timeout_tasks.items():
            if self.current_time - timestamp >= self.timeout:
                self.handle_unregisterhost(address)

    def mainloop(self):
        while not self.shutdown:
            try:
                data, address = self.socket.recvfrom(1024)
                self.handle_incoming(data, address)
            except socket.error:
                pass

            self.update()

    def run(self):
        try:
            self.mainloop()
        except (KeyboardInterrupt, SystemExit):
            pass

        sys.exit(0)

if __name__ == '__main__':
    server = LobbyServer()
    server.run()
