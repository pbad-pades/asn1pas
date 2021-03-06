/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "OCSP"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "OCSP-Signature.h"

static asn_TYPE_member_t asn_MBR_certs_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Certificate,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_certs_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_certs_specs_4 = {
	sizeof(struct certs),
	offsetof(struct certs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_certs_4 = {
	"certs",
	"certs",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_certs_tags_4,
	sizeof(asn_DEF_certs_tags_4)
		/sizeof(asn_DEF_certs_tags_4[0]), /* 2 */
	asn_DEF_certs_tags_4,	/* Same as above */
	sizeof(asn_DEF_certs_tags_4)
		/sizeof(asn_DEF_certs_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_certs_4,
	1,	/* Single element */
	&asn_SPC_certs_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_OCSP_Signature_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OCSP_Signature, signatureAlgorithm),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AlgorithmIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"signatureAlgorithm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OCSP_Signature, signature),
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_BIT_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"signature"
		},
	{ ATF_POINTER, 1, offsetof(struct OCSP_Signature, certs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_certs_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"certs"
		},
};
static ber_tlv_tag_t asn_DEF_OCSP_Signature_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_OCSP_Signature_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (3 << 2)), 1, 0, 0 }, /* signature at 3164 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 }, /* signatureAlgorithm at 3163 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 2, 0, 0 } /* certs at 3165 */
};
static asn_SEQUENCE_specifics_t asn_SPC_OCSP_Signature_specs_1 = {
	sizeof(struct OCSP_Signature),
	offsetof(struct OCSP_Signature, _asn_ctx),
	asn_MAP_OCSP_Signature_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_OCSP_Signature = {
	"OCSP-Signature",
	"OCSP-Signature",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_OCSP_Signature_tags_1,
	sizeof(asn_DEF_OCSP_Signature_tags_1)
		/sizeof(asn_DEF_OCSP_Signature_tags_1[0]), /* 1 */
	asn_DEF_OCSP_Signature_tags_1,	/* Same as above */
	sizeof(asn_DEF_OCSP_Signature_tags_1)
		/sizeof(asn_DEF_OCSP_Signature_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_OCSP_Signature_1,
	3,	/* Elements count */
	&asn_SPC_OCSP_Signature_specs_1	/* Additional specs */
};

