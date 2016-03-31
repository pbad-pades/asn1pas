/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXAttributeCertificate"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_AAControls_H_
#define	_AAControls_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AttrSpec;

/* AAControls */
typedef struct AAControls {
	long	*pathLenConstraint	/* OPTIONAL */;
	struct AttrSpec	*permittedAttrs	/* OPTIONAL */;
	struct AttrSpec	*excludedAttrs	/* OPTIONAL */;
	BOOLEAN_t	*permitUnSpecified	/* DEFAULT TRUE */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AAControls_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AAControls;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AttrSpec.h"

#endif	/* _AAControls_H_ */
