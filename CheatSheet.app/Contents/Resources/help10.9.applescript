tell application "System Preferences"
	activate
	set current pane to pane id "com.apple.preference.security"
	reveal anchor "Privacy_Accessibility" of current pane
end tell
