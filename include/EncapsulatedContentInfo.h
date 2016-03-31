/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_EncapsulatedContentInfo_H_
#define	_EncapsulatedContentInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ContentType.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EncapsulatedContentInfo */
typedef struct EncapsulatedContentInfo {
	ContentType_t	 eContentType;
	OCTET_STRING_t	*eContent	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EncapsulatedContentInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EncapsulatedContentInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _EncapsulatedContentInfo_H_ */
