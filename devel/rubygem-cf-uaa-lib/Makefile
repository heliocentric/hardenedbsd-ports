# $FreeBSD$

PORTNAME=	cf-uaa-lib
PORTVERSION=	3.10.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Client library for CloudFoundry UAA

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-httpclient>=2.8.2.4:www/rubygem-httpclient \
		rubygem-multi_json>=1.12.1:devel/rubygem-multi_json

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
