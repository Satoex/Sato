
Debian
====================
This directory contains files used to package satod/sato-qt
for Debian-based Linux systems. If you compile satod/sato-qt yourself, there are some useful files here.

## sato: URI support ##


sato-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install sato-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your sato-qt binary to `/usr/bin`
and the `../../share/pixmaps/sato128.png` to `/usr/share/pixmaps`

sato-qt.protocol (KDE)

