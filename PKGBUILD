
pkgname=custom-root-git
_pkgname=custom-root
_destname1="/etc/skel/"
#_licensedir="/usr/share/arcolinux/licenses/"
pkgver=24.05
pkgrel=06
pkgdesc="root configs from custom-arconet"
arch=('any')
url="https://github.com/amanre/custom-root"
license=('GPL3')
makedepends=('git' 'most')
depends=('bash')
provides=("${pkgname}")
options=(!strip !emptydirs)
source=(${_pkgname}::"git+https://github.com/amanre/${_pkgname}.git")
sha256sums=('SKIP')
#install='readme.install'
package() {
	
	install -dm755 ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.bin ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.cache ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.config ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.conky ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.gtkrc-2.0 ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.xinitrc ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.Xresources ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.xsession ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.local ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.fehbg ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.p10k.zsh ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.xscreensaver ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.xsessionrc ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.zshrc ${pkgdir}${_destname1}	
}
