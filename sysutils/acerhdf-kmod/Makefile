# Created by: Tobias Kortkamp <tobias.kortkamp@gmail.com>
# $FreeBSD$

PORTNAME=	acerhdf-kmod
PORTVERSION=	0.1.1
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils

MAINTAINER=	t@tobik.me
COMMENT=	Acer Aspire One fan control

LICENSE=	GPLv2

USES=		kmod
KMODNAME=	acerhdf
MANDIR=		${PREFIX}/man/man4

USE_GITHUB=	yes
GH_PROJECT=	kmod-acerhdf
GH_ACCOUNT=	t6

.include <bsd.port.pre.mk>

.if ${OPSYS} == FreeBSD && ${OSVERSION} < 1001000
IGNORE=		does not support FreeBSD versions older than 10.1
.endif

ONLY_FOR_ARCHS=	amd64 i386
ONLY_FOR_ARCHS_REASON=	specific to one machine

do-install:
	${INSTALL_MAN} ${WRKSRC}/${KMODNAME}.4 ${STAGEDIR}${MANDIR}
	${INSTALL_KLD} ${WRKSRC}/${KMODNAME}.ko ${STAGEDIR}${KMODDIR}

.include <bsd.port.post.mk>
