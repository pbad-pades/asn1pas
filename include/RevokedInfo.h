/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "OCSP"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_RevokedInfo_H_
#define	_RevokedInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <GeneralizedTime.h>
#include "CRLReason.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RevokedInfo */
typedef struct RevokedInfo {
	GeneralizedTime_t	 revocationTime;
	CRLReason_t	*revocationReason	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RevokedInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RevokedInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _RevokedInfo_H_ */
