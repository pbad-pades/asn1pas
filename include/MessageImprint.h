/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXTSP"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_MessageImprint_H_
#define	_MessageImprint_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AlgorithmIdentifier.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MessageImprint */
typedef struct MessageImprint {
	AlgorithmIdentifier_t	 hashAlgorithm;
	OCTET_STRING_t	 hashedMessage;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MessageImprint_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MessageImprint;

#ifdef __cplusplus
}
#endif

#endif	/* _MessageImprint_H_ */
