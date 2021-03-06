/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ExtendedSecurityServices"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_ContentReference_H_
#define	_ContentReference_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ContentType.h"
#include "ContentIdentifier.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ContentReference */
typedef struct ContentReference {
	ContentType_t	 contentType;
	ContentIdentifier_t	 signedContentIdentifier;
	OCTET_STRING_t	 originatorSignatureValue;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ContentReference_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ContentReference;

#ifdef __cplusplus
}
#endif

#endif	/* _ContentReference_H_ */
