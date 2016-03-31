/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignatureFormats-88syntax"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_OtherHash_H_
#define	_OtherHash_H_


#include <asn_application.h>

/* Including external dependencies */
#include "OtherHashValue.h"
#include "OtherHashAlgAndValue.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum OtherHash_PR {
	OtherHash_PR_NOTHING,	/* No components present */
	OtherHash_PR_sha1Hash,
	OtherHash_PR_otherHash
} OtherHash_PR;

/* OtherHash */
typedef struct OtherHash {
	OtherHash_PR present;
	union OtherHash_u {
		OtherHashValue_t	 sha1Hash;
		OtherHashAlgAndValue_t	 otherHash;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OtherHash_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OtherHash;

#ifdef __cplusplus
}
#endif

#endif	/* _OtherHash_H_ */
