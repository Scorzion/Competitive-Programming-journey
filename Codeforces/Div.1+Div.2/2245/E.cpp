# 1. Kill any running Chrome
killall chrome google-chrome-stable 2>/dev/null

# 2. Wipe the flags file that's overriding your desktop entry
> ~/.config/google-chrome-flags.conf

# 3. Set it to force GL (skip Vulkan, avoid the dma-buf crash)
echo '--use-angle=gl' > ~/.config/google-chrome-flags.conf

# 4. Clean up the duplicate flags in the .desktop file
sudo sed -i 's/--use-angle=gl --use-angle=gl/--use-angle=gl/g' /usr/share/applications/google-chrome.desktop

# 5. Verify no leftover Vulkan/render-node-override flags anywhere
grep -r "use-angle\|render-node-override" ~/.config/google-chrome-flags.conf /usr/share/applications/google-chrome.desktop

# 6. Refresh desktop database
update-desktop-database /usr/share/applications 2>/dev/null

# 7. Launch fresh and confirm what's actually running
google-chrome-stable &
sleep 3
ps aux | grep -i "[g]oogle-chrome" | head -1


Then in Chrome, go to about:gpu again and check the Command Line field near the top — confirm it now shows --use-angle=gl and no --use-angle=vulkan or --render-node-override.
If GL still doesn't stick (i.e. about:gpu still shows vulkan), something is setting it through chrome://flags persisted state rather than the launcher. In that case run:
bashgrep -i "angle\|vulkan" ~/.config/google-chrome/Local\ State
and tell me what that returns — that'll confirm whether it's a Local State override rather than the flags file.