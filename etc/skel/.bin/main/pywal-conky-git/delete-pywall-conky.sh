#!/bin/bash
sudo pacman -Rs pywal-conky-git --noconfirm
sudo pacman -S archlinux-appstream-data --noconfirm
cp -Rf ~/.config ~/.config-backup-$(date +%Y.%m.%d-%H.%M.%S)
cp -arf /etc/skel/. ~
echo
tput setaf 2
echo "################################################################"
echo "################### Done"
echo "################################################################"
tput sgr0
echo
