/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCMP"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_CRLAnnContent_H_
#define	_CRLAnnContent_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CertificateList;

/* CRLAnnContent */
typedef struct CRLAnnContent {
	A_SEQUENCE_OF(struct CertificateList) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CRLAnnContent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CRLAnnContent;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CertificateList.h"

#endif	/* _CRLAnnContent_H_ */
