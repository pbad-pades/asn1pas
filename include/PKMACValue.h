/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCRMF"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_PKMACValue_H_
#define	_PKMACValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AlgorithmIdentifier.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PKMACValue */
typedef struct PKMACValue {
	AlgorithmIdentifier_t	 algId;
	BIT_STRING_t	 value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PKMACValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PKMACValue;

#ifdef __cplusplus
}
#endif

#endif	/* _PKMACValue_H_ */
