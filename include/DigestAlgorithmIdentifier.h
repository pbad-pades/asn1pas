/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_DigestAlgorithmIdentifier_H_
#define	_DigestAlgorithmIdentifier_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AlgorithmIdentifier.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DigestAlgorithmIdentifier */
typedef AlgorithmIdentifier_t	 DigestAlgorithmIdentifier_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DigestAlgorithmIdentifier;
asn_struct_free_f DigestAlgorithmIdentifier_free;
asn_struct_print_f DigestAlgorithmIdentifier_print;
asn_constr_check_f DigestAlgorithmIdentifier_constraint;
ber_type_decoder_f DigestAlgorithmIdentifier_decode_ber;
der_type_encoder_f DigestAlgorithmIdentifier_encode_der;
xer_type_decoder_f DigestAlgorithmIdentifier_decode_xer;
xer_type_encoder_f DigestAlgorithmIdentifier_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _DigestAlgorithmIdentifier_H_ */
