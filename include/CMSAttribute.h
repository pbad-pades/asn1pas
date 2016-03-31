/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_CMSAttribute_H_
#define	_CMSAttribute_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OBJECT_IDENTIFIER.h>
#include "CMSAttributeValue.h"
#include <asn_SET_OF.h>
#include <constr_SET_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CMSAttribute */
typedef struct CMSAttribute {
	OBJECT_IDENTIFIER_t	 attrType;
	struct attrValues {
		A_SET_OF(CMSAttributeValue_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} attrValues;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CMSAttribute_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CMSAttribute;

#ifdef __cplusplus
}
#endif

#endif	/* _CMSAttribute_H_ */
