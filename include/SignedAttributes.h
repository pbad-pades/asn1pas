/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_SignedAttributes_H_
#define	_SignedAttributes_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SET_OF.h>
#include <constr_SET_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CMSAttribute;

/* SignedAttributes */
typedef struct SignedAttributes {
	A_SET_OF(struct CMSAttribute) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SignedAttributes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SignedAttributes;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CMSAttribute.h"

#endif	/* _SignedAttributes_H_ */
