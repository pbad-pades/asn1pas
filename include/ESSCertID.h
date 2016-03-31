/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ExtendedSecurityServices"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_ESSCertID_H_
#define	_ESSCertID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Hash.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IssuerSerial;

/* ESSCertID */
typedef struct ESSCertID {
	Hash_t	 certHash;
	struct IssuerSerial	*issuerSerial	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ESSCertID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ESSCertID;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IssuerSerial.h"

#endif	/* _ESSCertID_H_ */
