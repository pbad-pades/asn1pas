/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_BuiltInDomainDefinedAttribute_H_
#define	_BuiltInDomainDefinedAttribute_H_


#include <asn_application.h>

/* Including external dependencies */
#include <PrintableString.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BuiltInDomainDefinedAttribute */
typedef struct BuiltInDomainDefinedAttribute {
	PrintableString_t	 type;
	PrintableString_t	 value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BuiltInDomainDefinedAttribute_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BuiltInDomainDefinedAttribute;

#ifdef __cplusplus
}
#endif

#endif	/* _BuiltInDomainDefinedAttribute_H_ */
