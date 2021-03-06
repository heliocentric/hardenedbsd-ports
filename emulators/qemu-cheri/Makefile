# $FreeBSD$

PORTNAME=	qemu
PORTVERSION=	0.d${SNAPDATE}
CATEGORIES=	emulators devel
PKGNAMESUFFIX?=	-cheri

MAINTAINER=	brooks@FreeBSD.org
COMMENT?=	QEMU emulator with CHERI CPU support

# XXX: disabling gnutls doesn't work so depend on it to avoid breakage.
LIB_DEPENDS=	libgnutls.so:security/gnutls \
		libnettle.so:security/nettle
RUN_DEPENDS=	qemu-system-i386:emulators/qemu

LICENSE=	GPLv2

USE_GITHUB=	yes
GH_ACCOUNT=	CTSRD-CHERI
GH_TAGNAME=	${QEMU_COMMIT}

HAS_CONFIGURE=	yes
USES=	gettext-runtime gmake libtool makeinfo pkgconfig python:2,build
USE_XORG=	pixman
USE_GNOME+=	glib20
#MAKE_ENV+=	BSD_MAKE="${MAKE}"
ONLY_FOR_ARCHS=	amd64 i386 powerpc powerpc64

NOPIE_PORTS=	yes
NORELRO_PORTS=	yes

CONFLICTS_INSTALL=	qemu-[0-9]* qemu-devel-[0-9]* qemu-sbruno-[0-9]*

.include "Makefile.snapshot"

CONFIGURE_ARGS+= \
		--target-list=cheri-softmmu \
		--disable-curl \
		--disable-gtk \
		--disable-libssh2 \
		--disable-linux-user \
		--disable-linux-aio \
		--disable-kvm \
		--disable-vnc-png \
		--disable-sdl \
		--disable-smartcard-nss \
		--disable-vte \
		--disable-xen \
		--extra-cflags="-g ${EXTRA_CFLAGS}" \
		--localstatedir=/var

QEMU_SYSTEM_CHERI?=	qemu-system${PKGNAMESUFFIX}
PLIST=	/dev/null
PLIST_FILES=	bin/${QEMU_SYSTEM_CHERI}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/cheri-softmmu/qemu-system-cheri \
	    ${STAGEDIR}${PREFIX}/bin/${QEMU_SYSTEM_CHERI}

.include <bsd.port.mk>
