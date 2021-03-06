/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignaturePolicies-88syntax"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_AttributeValueConstraints_H_
#define	_AttributeValueConstraints_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AttributeTypeAndValue;

/* AttributeValueConstraints */
typedef struct AttributeValueConstraints {
	A_SEQUENCE_OF(struct AttributeTypeAndValue) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AttributeValueConstraints_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AttributeValueConstraints;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AttributeTypeAndValue.h"

#endif	/* _AttributeValueConstraints_H_ */
