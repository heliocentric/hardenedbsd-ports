# Created by: René Ladan <rene@freebsd.org>
# $FreeBSD$

PORTNAME=	django-rq
PORTVERSION=	0.9.6
DISTVERSIONPREFIX=	v
CATEGORIES=	devel python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rene@FreeBSD.org
COMMENT=	Provides Django integration for RQ (Redis Queue)

LICENSE=	MIT

TEST_DEPENDS=	redis-server:databases/redis
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django18>=1.5:www/py-django18 \
		${PYTHON_PKGNAMEPREFIX}rq>=0.5.5:devel/py-rq

NO_ARCH=	yes

USES=		python
USE_PYTHON=	autoplist distutils

USE_GITHUB=	yes
GH_ACCOUNT=	ui

TEST_TARGET=	test

.include <bsd.port.mk>
