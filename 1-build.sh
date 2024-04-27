#!/bin/bash


destination="/home/amanre/CUSTOM/custom_repo/x86_64/"

			makepkg -f

			mv custom-root-git*pkg.tar.zst $destination

			rm -r pkg
			rm -r src
			rm -rf custom-root-git*
			echo "#############################################################################################"
			echo "################  "$(basename `pwd`)" done"
			echo "#############################################################################################"
			
		
