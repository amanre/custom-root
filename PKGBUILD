
pkgname=custom-root-git
pkgver=24.05
pkgrel=01
pkgdesc="root-configs "
arch=('any')
license=('GPL3')
makedepends=()
depends=()
conflicts=()
provides=("${pkgname}")
options=(!strip !emptydirs)

prepare() {
	cp -af ../files/. ${srcdir}
}

package() {
	local _configdir=${pkgdir}/etc/skel/
	mkdir -p "$_configdir" && 
	
	# Copy Configs
	cp -r ${srcdir}/.bin					"$_configdir"
	cp -r ${srcdir}/.cache					"$_configdir"
	cp -r ${srcdir}/.config					"$_configdir"
	cp -r ${srcdir}/.conky					"$_configdir"
	cp -r ${srcdir}/.local					"$_configdir"
	cp -r ${srcdir}/.bashrc					"$_configdir"
	cp -r ${srcdir}/.fehbg					"$_configdir"
	cp -r ${srcdir}/.gtkrc-2.0					"$_configdir"
	cp -r ${srcdir}/.p10k.zsh					"$_configdir"
	cp -r ${srcdir}/.xinitrc					"$_configdir"
	cp -r ${srcdir}/.Xresources					"$_configdir"
	cp -r ${srcdir}/.xscreensaver					"$_configdir"
	cp -r ${srcdir}/.xsession					"$_configdir"
	cp -r ${srcdir}/.xsessionrc					"$_configdir"
	cp -r ${srcdir}/.zshrc					"$_configdir"
	
}
