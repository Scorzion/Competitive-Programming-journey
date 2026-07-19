Found it. The system-wide .desktop file (/usr/share/applications/google-chrome.desktop) correctly uses --use-angle=gl, but you have a personal override in ~/.local/share/applications/google-chrome.desktop forcing --use-angle=vulkan — and per XDG rules, your local copy takes priority over the system one, which is why it's actually launching with Vulkan.
Someone (possibly a past you experimenting with Vulkan for performance) added that override at some point, and it's now the one crashing the GPU process on every launch.
Fix — just delete the local override so it falls back to the correct system default:
bashrm ~/.local/share/applications/google-chrome.desktop
Then refresh the desktop database so KDE picks up the change:
bashupdate-desktop-database ~/.local/share/applications/
Fully quit Chrome first (important — otherwise the running instance still has the bad GPU process crash-count cached):
bashkillall chrome
Then relaunch Chrome normally from your app menu (not via terminal), and verify at:
chrome://gpu
You should now see OpenGL: Hardware accelerated and Video Decode/Encode: Hardware accelerated instead of all-software.
This should fix both the crash-loop and the freezes, since a crashing GPU process taking the compositor down with it is a very plausible cause for a full system lockup on Wayland.