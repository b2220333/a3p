import sys
import os
import time
import random
import socket
import json
import urllib
import requests
import thread
import hashlib
import subprocess
from panda3d.core import *
from direct.showbase.ShowBase import ShowBase
from direct.gui import OnscreenImage, DirectButton, OnscreenText

class Launcher(ShowBase):

    def __init__(self):
        ShowBase.__init__(self)

        self.font = loader.loadFont('menu/DejaVuSans.ttf')
        self.clickSound = loader.loadSfx('sounds/click.ogg')

        self.background = OnscreenImage.OnscreenImage(parent=aspect2d, image="images/src-bg.jpg", pos=(0, 0, 0))
        self.background.setScale(render2d, VBase3(1))
        self.background.setSx(2)

        self.indicator = OnscreenImage.OnscreenImage(parent=aspect2dp, image="images/src-droid.png", pos=(0, 0, 0.5), scale=0.3)
        self.indicator.setTransparency(TransparencyAttrib.MAlpha)
        self.indicatorSpeed = 5

        self.launchingGame = False
        self.launchButton = DirectButton.DirectButton(pos=(0, 0, 0), scale=0.1, text="Launch Game", text_font=self.font, frameColor=(0, 0, 0, 0.5),
            text_fg=(1, 1, 1, 1), command=self.launch, clickSound=self.clickSound)

        self.exitButton = DirectButton.DirectButton(pos=(0, 0, -0.2), scale=0.1, text="Exit", text_font=self.font, frameColor=(0, 0, 0, 0.5),
            text_fg=(1, 1, 1, 1), command=self.__exit, clickSound=self.clickSound)

        self.updatingText = OnscreenText.OnscreenText(pos=(0, -0.2, 0), text="", scale=0.08, fg=(1, 1, 1, 1),
            font=self.font, mayChange=True)

        self.patchUrl = 'http://127.0.0.1'
        self.executableName = 'a3p.exe'
        self.downloadingFile = False
        self.downloadQueue = []

    @property
    def timestamp(self):
        return time.time()

    def getMd5(self, filename):
        hash_md5 = hashlib.md5()
        with open(filename, "rb") as f:
            for chunk in iter(lambda: f.read(4096), b""):
                hash_md5.update(chunk)

        return hash_md5.hexdigest()

    def setup(self):
        self.updateTask = taskMgr.add(self.__update, 'launcher-update')

    def launch(self):
        """
        Patches the game files, then proceeds to launch the game
        """

        if self.launchingGame:
            return

        self.updatingText.text = "Patching files..."
        self.launchingGame = True

        # lookup patcher manifest file and read the json response
        url = urllib.urlopen("%s/a3p/manifest.php" % self.patchUrl)
        self.downloadSession = requests.Session()

        try:
            patcherFiles = json.loads(url.read())
        except:
            raise RuntimeError('An error occurred when trying to get the patcher manifest!')

        if not len(patcherFiles):
            raise RuntimeError('No files were found on the download server!')

        for filename in patcherFiles:
            size, md5 = patcherFiles[filename]['size'], patcherFiles[filename]['md5']

            if not os.path.exists(filename):
                self.downloadQueue.append(filename)
            else:
                if os.path.getsize(filename) != size or self.getMd5(filename) != md5:
                    self.downloadQueue.append(filename)

        if not len(self.downloadQueue):
            self.launchGame()

    def downloadFile(self, filename):
        """
        Downloads a file from the file server
        """

        self.updatingText.text = "Downloading file %s..." % filename
        self.downloadingFile = True

        response = self.downloadSession.get('%s/a3p/live/%s' % (self.patchUrl, filename),
            stream=True)

        response.raise_for_status()

        with open(filename, 'wb') as f:
            for block in response.iter_content(1024):
                f.write(block)

        self.downloadingFile = False
        self.launchGame()

    def launchGame(self):
        """
        Launches the game executable after patching is complete
        """

        self.updatingText.text = "Patching complete, starting game..."
        thread.start_new_thread(subprocess.call, (self.executableName,), {'shell': False,})
        self.__exit()

    def __exit(self):
        """
        Closes out of the game launcher
        """

        self.userExit()

    def __update(self, task):
        """
        Updates all items associated with the launcher, ran each frame
        """

        if self.launchingGame:
            self.launchButton.hide()
            self.exitButton.hide()
        else:
            self.launchButton.show()
            self.exitButton.show()

        if self.launchingGame:
            self.indicator.setR(self.indicator.getR() + self.indicatorSpeed + \
                random.random())

        if len(self.downloadQueue) and not self.downloadingFile:
            thread.start_new_thread(self.downloadFile, (self.downloadQueue.pop(),))

        return task.cont

    def destroy(self):
        self.font = None
        self.clickSound = None

        self.background.destroy()
        self.indicator.destroy()
        self.launchButton.destroy()
        self.exitButton.destroy()
        self.updatingText.destroy()

        self.background = None
        self.indicator = None
        self.launchButton = None
        self.exitButton = None
        self.updatingText = None

        self.downloadingFile = False
        self.downloadQueue = []

if __name__ == '__main__':
    launcher = Launcher()
    launcher.setup()
    launcher.run()
