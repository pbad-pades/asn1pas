/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ExtendedSecurityServices"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_ContentIdentifier_H_
#define	_ContentIdentifier_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ContentIdentifier */
typedef OCTET_STRING_t	 ContentIdentifier_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ContentIdentifier;
asn_struct_free_f ContentIdentifier_free;
asn_struct_print_f ContentIdentifier_print;
asn_constr_check_f ContentIdentifier_constraint;
ber_type_decoder_f ContentIdentifier_decode_ber;
der_type_encoder_f ContentIdentifier_encode_der;
xer_type_decoder_f ContentIdentifier_decode_xer;
xer_type_encoder_f ContentIdentifier_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _ContentIdentifier_H_ */
