# Created by: David Magda <dmagda+howl@ee.ryerson.ca>
# $FreeBSD$

PORTNAME=	howl
PORTVERSION=	1.0.0
PORTREVISION=	2
CATEGORIES?=	net devel
MASTER_SITES=	http://www.porchdogsoft.com/download/

MAINTAINER=	freebsd@donovansbrain.co.uk
COMMENT=	Zeroconf/Bonjour(tm) implementation

CONFLICTS=	avahi-[0-9]*

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		gmake libtool pathfix pkgconfig
USE_LDCONFIG=	yes
USE_RC_SUBR=	mdnsresponder

NOPIE_PORTS=	yes

PLIST_SUB=	VERSION="${PORTVERSION}"

.include <bsd.port.mk>
