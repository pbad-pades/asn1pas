/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_BasicConstraints_H_
#define	_BasicConstraints_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BasicConstraints */
typedef struct BasicConstraints {
	BOOLEAN_t	*cA	/* DEFAULT FALSE */;
	long	*pathLenConstraint	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BasicConstraints_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BasicConstraints;

#ifdef __cplusplus
}
#endif

#endif	/* _BasicConstraints_H_ */
