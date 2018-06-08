import sys

import src.ai as ai
import src.audio as audio
import src.controllers as controllers
import src.engine as engine
import src.entities as entities
import src.net as net
import src.net2 as net2
import src.ui as ui
import src.constants as constants

from direct.directbase import DirectStart
from panda3d.core import *

engine.loadConfigFile()

# Setup window
props = WindowProperties()
props.setCursorHidden(True)
props.setTitle("A3P Editor")
base.win.requestProperties(props)
base.setBackgroundColor(0, 0, 0)

filename = sys.argv[1]

engine.init()
net.init(constants.MODE_SERVER)
aiWorld = ai.World()
netManager = net2.NetManager()
entityGroup = entities.EntityGroup(netManager)
ui = ui.EditorUI()
map = engine.Map()
map.load(filename, aiWorld, entityGroup)
base.disableAllAudio()

editor = controllers.EditController(aiWorld, entityGroup, map, ui)


def mainloop(task):
    global aiWorld
    global entityGroup
    global map
    global ui
    global editor

    engine.update()
    ui.update()
    editor.serverUpdate(aiWorld, entityGroup, None)
    map.update()
    engine.endUpdate()

    return task.cont


if __name__ == '__main__':
    taskMgr.add(mainloop, "mainloop")
    base.run()
