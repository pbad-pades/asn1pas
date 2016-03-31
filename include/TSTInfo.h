/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXTSP"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_TSTInfo_H_
#define	_TSTInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "TSAPolicyId.h"
#include "MessageImprint.h"
#include <GeneralizedTime.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum version {
	version_v1	= 1
} e_version;

/* Forward declarations */
struct Accuracy;
struct GeneralName;
struct Extensions;

/* TSTInfo */
typedef struct TSTInfo {
	long	 version;
	TSAPolicyId_t	 policy;
	MessageImprint_t	 messageImprint;
	long	 serialNumber;
	GeneralizedTime_t	 genTime;
	struct Accuracy	*accuracy	/* OPTIONAL */;
	BOOLEAN_t	*ordering	/* DEFAULT FALSE */;
	long	*nonce	/* OPTIONAL */;
	struct GeneralName	*tsa	/* OPTIONAL */;
	struct Extensions	*extensions	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TSTInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TSTInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Accuracy.h"
#include "GeneralName.h"
#include "Extensions.h"

#endif	/* _TSTInfo_H_ */
