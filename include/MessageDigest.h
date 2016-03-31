/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_MessageDigest_H_
#define	_MessageDigest_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MessageDigest */
typedef OCTET_STRING_t	 MessageDigest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MessageDigest;
asn_struct_free_f MessageDigest_free;
asn_struct_print_f MessageDigest_print;
asn_constr_check_f MessageDigest_constraint;
ber_type_decoder_f MessageDigest_decode_ber;
der_type_encoder_f MessageDigest_encode_der;
xer_type_decoder_f MessageDigest_decode_xer;
xer_type_encoder_f MessageDigest_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _MessageDigest_H_ */
