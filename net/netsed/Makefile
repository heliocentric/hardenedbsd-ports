# Created by: Roman Shterenzon <roman@xpert.com>
# $FreeBSD$

PORTNAME=	netsed
PORTVERSION=	1.2
CATEGORIES=	net security
MASTER_SITES=	http://silicone.homelinux.org/release/netsed/

MAINTAINER=	koue@chaosophia.net
COMMENT=	Alters the contents of network packets in real time

EXPLICIT_SAFESTACK=		yes

USES=		gmake
MAKE_ARGS=	CFLAGS="${CFLAGS}"

PLIST_FILES=	bin/${PORTNAME}
PORTDOCS=	README

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
