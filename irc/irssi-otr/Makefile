# Created by: Ashish Shukla <wahjava@gmail.com>
# $FreeBSD$

PORTNAME=	irssi-otr
PORTVERSION=	1.0.2
DISTVERSIONPREFIX=	v
CATEGORIES=	irc

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	Plugin for irssi for Off-the-Record (OTR) messaging

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${LOCALBASE}/include/irssi/src/common.h:irc/irssi \
		${LOCALBASE}/bin/libgcrypt-config:security/libgcrypt
LIB_DEPENDS=	libotr.so:security/libotr \
		libgcrypt.so:security/libgcrypt
RUN_DEPENDS=	irssi:irc/irssi

EXPLICIT_SAFESTACK=	yes

USES=		autoreconf libtool pkgconfig
USE_LDCONFIG=	yes
USE_GNOME=	glib20
USE_GITHUB=	yes
GH_ACCOUNT=	cryptodotis

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-libotr-inc-prefix=${LOCALBASE}/include --with-irssi-module-dir=${LOCALBASE}/lib/irssi/modules
INSTALL_TARGET=	install-strip

PLIST_FILES=	lib/irssi/modules/libotr.so \
		share/irssi/help/otr

post-patch:
	${GREP} -Rl '$$(oldincludedir)' ${WRKSRC} |${XARGS} ${REINPLACE_CMD} 's,$$(oldincludedir),${LOCALBASE}/include,g'

.include <bsd.port.mk>
