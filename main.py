import sys

import src.audio as audio
import src.core as core
import src.engine as engine
import src.net as net
import src.online as online
import src.ui as ui

from direct.showbase.DirectObject import DirectObject
from direct.showbase.ShowBase import ShowBase
from panda3d.core import *


if __debug__:
    loadPrcFile("config/config.prc")

try:
    __file__
except BaseException:
    sys.argv = [sys.argv[0], "-w"]

base = ShowBase()
winSize = ConfigVariableInt("win-size")
fullscreen = ConfigVariableBool("fullscreen")

def showHelpInfo():
    print("Usage (bracketed parameters are optional):")
    print("-w [width] [height]\tRun in windowed mode")
    print("-a\t\t\tDisable audio")
    print("-p portnumber\t\tUse the specified port (for both client and server)")
    print("-d map\t\t\tRun in dedicated server mode on the specified map")
    print("-v\t\t\t(Daemon only) Run the game in survival mode")
    print("-h\t\t\tShow help information")
    print("-m\t\t\tDeveloper mode")
    engine.exit()

if "-h" in sys.argv or "/?" in sys.argv or "--help" in sys.argv:
    showHelpInfo()

engine.loadConfigFile()

MODE_DAEMON = 0
MODE_NORMAL = 1

DEATHMATCH = 0
SURVIVAL = 1

mode = MODE_NORMAL
gametype = DEATHMATCH
customWindowSize = False

i = 1
while i < len(sys.argv):
    if sys.argv[i] == "-w":
        customWindowSize = True
        if len(sys.argv) > i + 1 and sys.argv[i + 1][0] != "-":
            winSize.setWord(0, int(sys.argv[i + 1]))
            winSize.setWord(1, int(sys.argv[i + 2]))
            i += 2
        else:
            winSize.setWord(0, 800)
            winSize.setWord(1, 600)
    elif sys.argv[i] == "-d":
        mode = MODE_DAEMON
    elif sys.argv[i] == "-v":
        gametype = SURVIVAL

    i += 1

if not customWindowSize:
    winSize.setWord(0, base.pipe.getDisplayWidth())
    winSize.setWord(1, base.pipe.getDisplayHeight())

fullscreen.setValue(not customWindowSize)

if mode != MODE_DAEMON:
    base.openDefaultWindow()
    engine.windowWidth = base.win.getProperties().getXSize()
    engine.windowHeight = base.win.getProperties().getYSize()
    engine.aspectRatio = float(engine.windowWidth) / float(engine.windowHeight)

disableAudio = False
defaultPort = 1337
defaultMap = "impact"
defaultHost = "127.0.0.1:1337"
username = "Unnamed"
tutorialOffset = 0
skipIntro = False

i = 1
while i < len(sys.argv):
    if sys.argv[i] == "-a":
        disableAudio = True
    elif sys.argv[i] == "-w":
        if len(sys.argv) > i + 2 and sys.argv[i + 1][0] != "-":
            # Skip the window size numbers. We already processed them.
            i += 2
    elif sys.argv[i] == "-p":
        try:
            defaultPort = int(sys.argv[i + 1])
            i += 1
        except BaseException:
            showHelpInfo()
    elif sys.argv[i] == "-d":
        try:
            defaultMap = sys.argv[i + 1]
            i += 1
        except BaseException:
            showHelpInfo()
    elif sys.argv[i] == "-u":
        try:
            username = sys.argv[i + 1]
            i += 1
        except BaseException:
            showHelpInfo()
    elif sys.argv[i] == "-m":
        skipIntro = True
        engine.enablePause = True
    elif sys.argv[i] == "-v":
        pass  # Already been processed.
    else:
        showHelpInfo()
    i += 1

if disableAudio or mode == MODE_DAEMON:
    audio.disable()

def goDaemon():
    # initialize engine settings
    engine.init(showFrameRate=False, daemon=True)
    engine.preloadModels()

    # initialize the network interface
    net.init(defaultPort)

    if gametype == DEATHMATCH:
        gameBackend = core.PointControlBackend(True, username)
    elif gametype == SURVIVAL:
        gameBackend = core.SurvivalBackend(True, username)

    gameBackend.loadMap(defaultMap)

    def mainloop(task):
        engine.update()
        if gameBackend is not None:
            gameBackend.update()

        engine.endUpdate()
        return task.cont

    taskMgr.add(mainloop, "mainloop")

def goMenu():
    global gameBackend, game, mode, gametype, mainMenu, skipIntro, menu

    # initialize engine settings
    engine.init(showFrameRate=False, daemon=(mode == MODE_DAEMON))
    engine.preloadModels()

    # initialize the network interface
    net.init(defaultPort)

    gameBackend = None
    game = None

    mainMenu = core.MainMenu(skipIntro)
    menu = None

    def mainloop(task):
        global mainMenu, gameBackend, game, menu
        engine.update()
        if mainMenu is not None and mainMenu.active:
            gameBackend, game = mainMenu.update()
        else:
            mainMenu = None

        if gameBackend is not None:
            gameBackend.update()

        if game is not None:
            game.update()
            if menu is None:
                menu = ui.Menu()

            if not menu.active or not gameBackend.connected:
                game.delete()
                gameBackend.delete()
                game = None
                gameBackend = None
                mainMenu = core.MainMenu(skipIntro)
                menu.delete()
                menu = None

        engine.endUpdate()
        return task.cont

    taskMgr.add(mainloop, "mainloop")

if __name__ == '__main__':
    if mode == MODE_DAEMON:
        goDaemon()
    elif mode == MODE_NORMAL:
        goMenu()

    base.run()
