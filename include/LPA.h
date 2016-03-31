/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ListaDePAsAprovadasV2"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_LPA_H_
#define	_LPA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LpaVersion.h"
#include "PolicyInfos.h"
#include <GeneralizedTime.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LPA */
typedef struct LPA {
	LpaVersion_t	 version	/* DEFAULT 0 */;
	PolicyInfos_t	 policyInfos;
	GeneralizedTime_t	 nextUpdate;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPA;

/* Decoder */
LPA_t * DecodeLPA(const void *buffer, size_t buf_size, int *retcode);

#ifdef __cplusplus
}
#endif

#endif	/* _LPA_H_ */
