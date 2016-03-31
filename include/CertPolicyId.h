/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_CertPolicyId_H_
#define	_CertPolicyId_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OBJECT_IDENTIFIER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CertPolicyId */
typedef OBJECT_IDENTIFIER_t	 CertPolicyId_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CertPolicyId;
asn_struct_free_f CertPolicyId_free;
asn_struct_print_f CertPolicyId_print;
asn_constr_check_f CertPolicyId_constraint;
ber_type_decoder_f CertPolicyId_decode_ber;
der_type_encoder_f CertPolicyId_encode_der;
xer_type_decoder_f CertPolicyId_decode_xer;
xer_type_encoder_f CertPolicyId_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _CertPolicyId_H_ */
