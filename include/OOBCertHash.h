/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCMP"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_OOBCertHash_H_
#define	_OOBCertHash_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AlgorithmIdentifier;
struct CertId;

/* OOBCertHash */
typedef struct OOBCertHash {
	struct AlgorithmIdentifier	*hashAlg	/* OPTIONAL */;
	struct CertId	*certId	/* OPTIONAL */;
	BIT_STRING_t	 hashVal;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OOBCertHash_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OOBCertHash;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AlgorithmIdentifier.h"
#include "CertId.h"

#endif	/* _OOBCertHash_H_ */
