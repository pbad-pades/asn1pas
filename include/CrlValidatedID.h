/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignatureFormats-88syntax"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_CrlValidatedID_H_
#define	_CrlValidatedID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "OtherHash.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CrlIdentifier;

/* CrlValidatedID */
typedef struct CrlValidatedID {
	OtherHash_t	 crlHash;
	struct CrlIdentifier	*crlIdentifier	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CrlValidatedID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CrlValidatedID;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CrlIdentifier.h"

#endif	/* _CrlValidatedID_H_ */
