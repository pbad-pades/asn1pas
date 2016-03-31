/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_NetworkAddress_H_
#define	_NetworkAddress_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X121Address.h"

#ifdef __cplusplus
extern "C" {
#endif

/* NetworkAddress */
typedef X121Address_t	 NetworkAddress_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NetworkAddress;
asn_struct_free_f NetworkAddress_free;
asn_struct_print_f NetworkAddress_print;
asn_constr_check_f NetworkAddress_constraint;
ber_type_decoder_f NetworkAddress_decode_ber;
der_type_encoder_f NetworkAddress_encode_der;
xer_type_decoder_f NetworkAddress_decode_xer;
xer_type_encoder_f NetworkAddress_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _NetworkAddress_H_ */
