# Window:
window-title A3P
window-type none
win-size 1280 720
win-origin -2 -2
fullscreen #f
sync-video #f
show-frame-rate-meter #f
icon-filename images/icon.ico

# Debug:
want-pstats #f

# Display:
load-display pandagl
aux-display pandadx9
aux-display pandagles2
aux-display pandagles
aux-display p3tinydisplay

# Resources:
default-model-extension .egg

# Audio:
audio-library-name p3fmod_audio
audio-output-rate 44100
audio-preload-threshold 1024

# Performance:
basic-shaders-only #f
hardware-animated-vertices #t

# Other:
text-flatten #f
default-directnotify-level info
notify-level fatal

# Antialiasing:
framebuffer-multisample 1
multisamples 2
