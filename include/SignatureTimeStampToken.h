/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignatureFormats-88syntax"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_SignatureTimeStampToken_H_
#define	_SignatureTimeStampToken_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TimeStampToken.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SignatureTimeStampToken */
typedef TimeStampToken_t	 SignatureTimeStampToken_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SignatureTimeStampToken;
asn_struct_free_f SignatureTimeStampToken_free;
asn_struct_print_f SignatureTimeStampToken_print;
asn_constr_check_f SignatureTimeStampToken_constraint;
ber_type_decoder_f SignatureTimeStampToken_decode_ber;
der_type_encoder_f SignatureTimeStampToken_encode_der;
xer_type_decoder_f SignatureTimeStampToken_decode_xer;
xer_type_encoder_f SignatureTimeStampToken_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _SignatureTimeStampToken_H_ */
