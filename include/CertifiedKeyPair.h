/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCMP"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_CertifiedKeyPair_H_
#define	_CertifiedKeyPair_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CertOrEncCert.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EncryptedValue;
struct PKIPublicationInfo;

/* CertifiedKeyPair */
typedef struct CertifiedKeyPair {
	CertOrEncCert_t	 certOrEncCert;
	struct EncryptedValue	*privateKey	/* OPTIONAL */;
	struct PKIPublicationInfo	*publicationInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CertifiedKeyPair_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CertifiedKeyPair;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EncryptedValue.h"
#include "PKIPublicationInfo.h"

#endif	/* _CertifiedKeyPair_H_ */
