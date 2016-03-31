/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignaturePolicies-88syntax"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_AlgorithmConstraintSet_H_
#define	_AlgorithmConstraintSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AlgorithmConstraints;

/* AlgorithmConstraintSet */
typedef struct AlgorithmConstraintSet {
	struct AlgorithmConstraints	*signerAlgorithmConstraints	/* OPTIONAL */;
	struct AlgorithmConstraints	*eeCertAlgorithmConstraints	/* OPTIONAL */;
	struct AlgorithmConstraints	*caCertAlgorithmConstraints	/* OPTIONAL */;
	struct AlgorithmConstraints	*aaCertAlgorithmConstraints	/* OPTIONAL */;
	struct AlgorithmConstraints	*tsaCertAlgorithmConstraints	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AlgorithmConstraintSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AlgorithmConstraintSet;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AlgorithmConstraints.h"

#endif	/* _AlgorithmConstraintSet_H_ */
