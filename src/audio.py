from direct.showbase.DirectObject import DirectObject
from pandac.PandaModules import *
from random import randint, random, uniform
import math
import engine
from random import choice
from panda3d.core import VBase3
from direct.task import Task

class Audio3DManager:

    def __init__(self, audio_manager, listener_target = None, root = None,
                 taskPriority = 51):
        self.audio_manager = audio_manager
        self.listener_target = listener_target

        if (root==None):
            self.root = render
        else:
            self.root = root

        self.sound_dict = {}
        self.vel_dict = {}
        self.listener_vel = VBase3(0, 0, 0)

        taskMgr.add(self.update, "Audio3DManager-updateTask", taskPriority)

    def loadSfx(self, name):
        """
        Use Audio3DManager.loadSfx to load a sound with 3D positioning enabled
        """
        sound = None
        if (name):
            sound=self.audio_manager.getSound(name, 1)
        return sound

    def setDistanceFactor(self, factor):
        """
        Control the scale that sets the distance units for 3D spacialized audio.
        Default is 1.0 which is adjust in panda to be feet.
        When you change this, don't forget that this effects the scale of setSoundMinDistance
        """
        self.audio_manager.audio3dSetDistanceFactor(factor)

    def getDistanceFactor(self):
        """
        Control the scale that sets the distance units for 3D spacialized audio.
        Default is 1.0 which is adjust in panda to be feet.
        """
        return self.audio_manager.audio3dGetDistanceFactor()

    def setDopplerFactor(self, factor):
        """
        Control the presence of the Doppler effect. Default is 1.0
        Exaggerated Doppler, use >1.0
        Diminshed Doppler, use <1.0
        """
        self.audio_manager.audio3dSetDopplerFactor(factor)

    def getDopplerFactor(self):
        """
        Control the presence of the Doppler effect. Default is 1.0
        Exaggerated Doppler, use >1.0
        Diminshed Doppler, use <1.0
        """
        return self.audio_manager.audio3dGetDopplerFactor()

    def setDropOffFactor(self, factor):
        """
        Exaggerate or diminish the effect of distance on sound. Default is 1.0
        Valid range is 0 to 10
        Faster drop off, use >1.0
        Slower drop off, use <1.0
        """
        self.audio_manager.audio3dSetDropOffFactor(factor)

    def getDropOffFactor(self):
        """
        Exaggerate or diminish the effect of distance on sound. Default is 1.0
        Valid range is 0 to 10
        Faster drop off, use >1.0
        Slower drop off, use <1.0
        """
        return self.audio_manager.audio3dGetDropOffFactor()

    def setSoundMinDistance(self, sound, dist):
        """
        Controls the distance (in units) that this sound begins to fall off.
        Also affects the rate it falls off.
        Default is 3.28 (in feet, this is 1 meter)
        Don't forget to change this when you change the DistanceFactor
        """
        sound.set3dMinDistance(dist)

    def getSoundMinDistance(self, sound):
        """
        Controls the distance (in units) that this sound begins to fall off.
        Also affects the rate it falls off.
        Default is 3.28 (in feet, this is 1 meter)
        """
        return sound.get3dMinDistance()

    def setSoundMaxDistance(self, sound, dist):
        """
        Controls the maximum distance (in units) that this sound stops falling off.
        The sound does not stop at that point, it just doesn't get any quieter.
        You should rarely need to adjust this.
        Default is 1000000000.0
        """
        sound.set3dMaxDistance(dist)

    def getSoundMaxDistance(self, sound):
        """
        Controls the maximum distance (in units) that this sound stops falling off.
        The sound does not stop at that point, it just doesn't get any quieter.
        You should rarely need to adjust this.
        Default is 1000000000.0
        """
        return sound.get3dMaxDistance()

    def setSoundVelocity(self, sound, velocity):
        """
        Set the velocity vector (in units/sec) of the sound, for calculating doppler shift.
        This is relative to the sound root (probably render).
        Default: VBase3(0, 0, 0)
        """
        if not isinstance(velocity, VBase3):
            raise TypeError, "Invalid argument 1, expected <VBase3>"
        self.vel_dict[sound]=velocity

    def setSoundVelocityAuto(self, sound):
        """
        If velocity is set to auto, the velocity will be determined by the
        previous position of the object the sound is attached to and the frame dt.
        Make sure if you use this method that you remember to clear the previous
        transformation between frames.
        """
        self.vel_dict[sound]=None

    def getSoundVelocity(self, sound):
        """
        Get the velocity of the sound.
        """
        if (self.vel_dict.has_key(sound)):
            vel = self.vel_dict[sound]
            if (vel!=None):
                return vel
            else:
                for known_object in self.sound_dict.keys():
                    if self.sound_dict[known_object].count(sound):
                        return known_object.getPosDelta(self.root)/globalClock.getDt()
        return VBase3(0, 0, 0)

    def setListenerVelocity(self, velocity):
        """
        Set the velocity vector (in units/sec) of the listener, for calculating doppler shift.
        This is relative to the sound root (probably render).
        Default: VBase3(0, 0, 0)
        """
        if not isinstance(velocity, VBase3):
            raise TypeError, "Invalid argument 0, expected <VBase3>"
        self.listener_vel=velocity

    def setListenerVelocityAuto(self):
        """
        If velocity is set to auto, the velocity will be determined by the
        previous position of the object the listener is attached to and the frame dt.
        Make sure if you use this method that you remember to clear the previous
        transformation between frames.
        """
        self.listener_vel = None

    def getListenerVelocity(self):
        """
        Get the velocity of the listener.
        """
        if (self.listener_vel!=None):
            return self.listener_vel
        elif (self.listener_target!=None):
            return self.listener_target.getPosDelta(self.root)/globalClock.getDt()
        else:
            return VBase3(0, 0, 0)

    def attachSoundToObject(self, sound, object):
        """
        Sound will come from the location of the object it is attached to
        """
        # sound is an AudioSound
        # object is any Panda object with coordinates
        for known_object in self.sound_dict.keys():
            if self.sound_dict[known_object].count(sound):
                # This sound is already attached to something
                #return 0
                # detach sound
                self.sound_dict[known_object].remove(sound)
                if len(self.sound_dict[known_object]) == 0:
                    # if there are no other sounds, don't track
                    # the object any more
                    del self.sound_dict[known_object]

        if not self.sound_dict.has_key(object):
            self.sound_dict[object] = []

        self.sound_dict[object].append(sound)
        return 1


    def detachSound(self, sound):
        """
        sound will no longer have it's 3D position updated
        """
        for known_object in self.sound_dict.keys():
            if self.sound_dict[known_object].count(sound):
                self.sound_dict[known_object].remove(sound)
                if len(self.sound_dict[known_object]) == 0:
                    # if there are no other sounds, don't track
                    # the object any more
                    del self.sound_dict[known_object]
                return 1
        return 0


    def getSoundsOnObject(self, object):
        """
        returns a list of sounds attached to an object
        """
        if not self.sound_dict.has_key(object):
            return []
        sound_list = []
        sound_list.extend(self.sound_dict[object])
        return sound_list


    def attachListener(self, object):
        """
        Sounds will be heard relative to this object. Should probably be the camera.
        """
        self.listener_target = object
        return 1


    def detachListener(self):
        """
        Sounds will be heard relative to the root, probably render.
        """
        self.listener_target = None
        return 1


    def update(self, task=None):
        """
        Updates position of sounds in the 3D audio system. Will be called automatically
        in a task.
        """
        # Update the positions of all sounds based on the objects
        # to which they are attached
        deleted = []
        for known_object in self.sound_dict.keys():
            tracked_sound = 0
            if known_object.isEmpty():
                deleted.append(known_object)
                continue
            while tracked_sound < len(self.sound_dict[known_object]):
                sound = self.sound_dict[known_object][tracked_sound]
                pos = known_object.getPos(self.root)
                vel = self.getSoundVelocity(sound)
                sound.set3dAttributes(pos[0], pos[1], pos[2], vel[0], vel[1], vel[2])
                tracked_sound += 1
        for object in deleted:
            del self.sound_dict[object]

        # Update the position of the listener based on the object
        # to which it is attached
        if self.listener_target:
            pos = self.listener_target.getPos(self.root)
            forward = self.root.getRelativeVector(self.listener_target, VBase3(0,1,0))
            up = self.root.getRelativeVector(self.listener_target, VBase3(0,0,1))
            vel = self.getListenerVelocity()
            self.audio_manager.audio3dSetListenerAttributes(pos[0], pos[1], pos[2], vel[0], vel[1], vel[2], forward[0], forward[1], forward[2], up[0], up[1], up[2])
        else:
            self.audio_manager.audio3dSetListenerAttributes(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1)
        return Task.cont

class SoundPlayer:
	"The client interface for playing sounds."
	def __init__(self, name):
		self.name = name
		self.soundGroup = soundGroups[self.name]
		self.activeSound = None
		self.entity = None
		self.position = None
		self.active = True
	def setEntity(self, entity):
		self.entity = entity
	def play(self, entity = None, position = None):
		"Plays a sound at the given position. If an ObjectEntity is given, attaches the sound to that ObjectEntity."
		if not enabled or not self.active:
			return
		self.position = position
		self.entity = entity
		self.activeSound = self.soundGroup.get()
		if self.entity != None and self.entity.active:
			manager.attachSoundToObject(self.activeSound, self.entity.node)
		elif self.position != None:
			self.activeSound.set3dAttributes(self.position.getX(), self.position.getY(), self.position.getZ(), 0, 0, 0)
		self.activeSound.play()
	def isPlaying(self):
		if self.activeSound != None:
			return self.activeSound.status() == 2
		return False
	def stop(self):
		if self.activeSound != None:
			self.activeSound.stop()
	def delete(self):
		"Only needs to be called if this sound was attached to an entity."
		if self.activeSound != None:
			self.active = False
			self.activeSound.stop()
			manager.detachSound(self.activeSound)

soundGroups = dict()
manager = None
enabled = True

def init(dropOffFactor, distanceFactor, dopplerFactor):
	"Loads all common sounds and initializes the Panda3D Audio3DManager."
	global manager, physicsManager
	# Setup audio
	manager = Audio3DManager(base.sfxManagerList[0], camera)
	manager.setDropOffFactor(dropOffFactor)
	manager.setDistanceFactor(distanceFactor)
	addSoundGroup(SoundGroup("chaingun", ["sounds/chaingun.ogg"], volume = 0.5))
	addSoundGroup(SoundGroup("shotgun", ["sounds/shotgun.ogg"], volume = 1.0))
	addSoundGroup(SoundGroup("large-explosion", ["sounds/large-explosion.ogg", "sounds/large-explosion2.ogg", "sounds/large-explosion3.ogg", "sounds/large-explosion4.ogg", "sounds/large-explosion5.ogg"], volume = 1.0))
	addSoundGroup(SoundGroup("sniper-rifle", ["sounds/sniper-rifle.ogg"], volume = 1.0))
	addSoundGroup(SoundGroup("grenade", ["sounds/grenade.ogg", "sounds/grenade2.ogg", "sounds/grenade3.ogg"], volume = 1.0))
	addSoundGroup(SoundGroup("grenade-launch", ["sounds/grenade-launch.ogg"], volume = 0.3))
	addSoundGroup(SoundGroup("ricochet", ["sounds/ricochet1.ogg", "sounds/ricochet2.ogg", "sounds/ricochet3.ogg", "sounds/ricochet4.ogg", "sounds/ricochet5.ogg"], volume = 0.15))
	addSoundGroup(SoundGroup("grenade-bounce", ["sounds/grenade-bounce.ogg"], volume = 0.2))
	addSoundGroup(SoundGroup("claw", ["sounds/claw.ogg"], volume = 1.0))
	addSoundGroup(SoundGroup("claw-fail", ["sounds/claw-fail.ogg"], volume = 1.0))
	addSoundGroup(SoundGroup("claw-retract", ["sounds/claw-retract.ogg"], volume = 1.0))
	addSoundGroup(SoundGroup("spawn", ["sounds/spawn.ogg"], volume = 1.0))
	addSoundGroup(SoundGroup("shield", ["sounds/shield.ogg"], volume = 1.0))
	addSoundGroup(SoundGroup("kamikaze-special", ["sounds/kamikaze-special.ogg"], volume = 1.0))
	addSoundGroup(SoundGroup("rocket", ["sounds/rocket.ogg"], volume = 1.0))
	addSoundGroup(SoundGroup("reload", ["sounds/reload.ogg"], volume = 0.3))
	addSoundGroup(SoundGroup("alarm", ["sounds/alarm.ogg"], volume = 0.25))
	addSoundGroup(SoundGroup("glass-shatter", ["sounds/glass-shatter1.ogg", "sounds/glass-shatter2.ogg", "sounds/glass-shatter3.ogg"], volume = 1.0))
	addSoundGroup(SoundGroup("pistol", ["sounds/pistol.ogg"], volume = 1.0))
	addSoundGroup(SoundGroup("pod-landing", ["sounds/pod-landing.ogg"], volume = 1.0))
	addSoundGroup(SoundGroup("change-weapon", ["sounds/change-weapon.ogg"], volume = 0.1))

def enable():
	global enabled
	enabled = True

def disable():
	global enabled
	enabled = False

def addSoundGroup(soundGroup):
	"Adds a sound group to the global list."
	global soundGroups
	soundGroups[soundGroup.name] = soundGroup

class SoundGroup(DirectObject):
	"""A SoundGroup is a collection of similar sounds. When the SoundGroup is played, one of the sounds is selected at random."""
	def __init__(self, name, soundFiles, volume = 1.0):
		self.name = name
		self.soundFiles = soundFiles
		self.volume = volume
		self.sounds = dict()
		if enabled:
			for file in self.soundFiles:
				self.sounds[file] = []
				for _ in range(3):
					sound = manager.loadSfx(file)
					sound.setVolume(self.volume)
					self.sounds[file].append(sound)

	def get(self):
		sounds = self.sounds[choice(self.soundFiles)]
		for sound in sounds:
			if sound.status() != 2:
				return sound
		sound.stop()
		return sound

class FlatSound(DirectObject):
	def __init__(self, file, volume = 1.0):
		if enabled:
			self.sound = loader.loadSfx(file)
		self.filename = file
		self.setVolume(volume)

	def setVolume(self, volume):
		if enabled:
			self.sound.setVolume(volume)

	def getVolume(self):
		if enabled:
			return self.sound.getVolume()
		else:
			return 0.0

	def isPlaying(self):
		if enabled:
			return self.sound.status() == 2
		else:
			return False

	def play(self):
		if enabled:
			self.sound.play()

	def setLoop(self, loop):
		if enabled:
			self.sound.setLoop(loop)

	def stop(self):
		if enabled:
			self.sound.stop()
