/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_Extensions_H_
#define	_Extensions_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Extension;

/* Extensions */
typedef struct Extensions {
	A_SEQUENCE_OF(struct Extension) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Extensions_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Extensions;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Extension.h"

#endif	/* _Extensions_H_ */
