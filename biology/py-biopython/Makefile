# Created by: Johann Visagie <johann@egenetics.com>
# $FreeBSD$

PORTNAME=	biopython
PORTVERSION=	1.69
CATEGORIES=	biology python
MASTER_SITES=	http://www.biopython.org/DIST/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	mauricio@arareko.net
COMMENT=	Collection of Python modules for bioinformatics

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY}

USES=		python:2
USE_PYTHON=	distutils autoplist

OPTIONS_DEFINE=	REPORTLAB
OPTIONS_DEFAULT=	REPORTLAB

REPORTLAB_DESC=	PDF support in Bio.Graphics module
REPORTLAB_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}reportlab1>0:print/py-reportlab1

.include <bsd.port.mk>
