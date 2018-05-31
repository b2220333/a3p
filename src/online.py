from . import engine
from . import net
from . import constants

from panda3d.core import *

from direct.distributed.PyDatagram import PyDatagram

LOBBY_SERVER_ADDRESS = "68.119.230.139"
LOBBY_SERVER_PORT = 1336
address = (LOBBY_SERVER_ADDRESS, LOBBY_SERVER_PORT)


def registerHost(username, map, players, playerSlots):
    p = net.Packet()
    p.add(net.Uint8(constants.PACKET_REGISTERHOST))
    p.add(net.String(username))
    p.add(net.String(map))
    p.add(net.Uint8(players))
    p.add(net.Uint8(playerSlots))
    p.add(net.String(net.context.publicAddress))
    p.add(net.Uint16(net.context.port))
    net.context.send(p, address)


def getHosts():
    engine.log.info("Requesting host list from lobby server")
    p = net.Packet()
    p.add(net.Uint8(constants.PACKET_REQUESTHOSTLIST))
    net.context.send(p, address)


def connectTo(ip, port=None):
    if port is None:
        if ip.find(":") != -1:
            ip, port = ip.split(":")
        else:
            port = 1337

        port = int(port)

    engine.log.info("Notifying lobby server of intention to connect to %s:%d." % (
        ip, port))

    p = net.Packet()
    p.add(net.Uint8(constants.PACKET_CLIENTCONNECTNOTIFICATION))
    p.add(net.String(ip))
    p.add(net.Uint16(port))
    net.context.send(p, address)
