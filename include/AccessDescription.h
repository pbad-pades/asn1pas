/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_AccessDescription_H_
#define	_AccessDescription_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OBJECT_IDENTIFIER.h>
#include "GeneralName.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AccessDescription */
typedef struct AccessDescription {
	OBJECT_IDENTIFIER_t	 accessMethod;
	GeneralName_t	 accessLocation;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AccessDescription_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AccessDescription;

#ifdef __cplusplus
}
#endif

#endif	/* _AccessDescription_H_ */
