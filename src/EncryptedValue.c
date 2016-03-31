/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCRMF"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "EncryptedValue.h"

static asn_TYPE_member_t asn_MBR_EncryptedValue_1[] = {
	{ ATF_POINTER, 5, offsetof(struct EncryptedValue, intendedAlg),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AlgorithmIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"intendedAlg"
		},
	{ ATF_POINTER, 4, offsetof(struct EncryptedValue, symmAlg),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AlgorithmIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"symmAlg"
		},
	{ ATF_POINTER, 3, offsetof(struct EncryptedValue, encSymmKey),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"encSymmKey"
		},
	{ ATF_POINTER, 2, offsetof(struct EncryptedValue, keyAlg),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AlgorithmIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"keyAlg"
		},
	{ ATF_POINTER, 1, offsetof(struct EncryptedValue, valueHint),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"valueHint"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EncryptedValue, encValue),
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_BIT_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"encValue"
		},
};
static ber_tlv_tag_t asn_DEF_EncryptedValue_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_EncryptedValue_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (3 << 2)), 5, 0, 0 }, /* encValue at 2887 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intendedAlg at 2874 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* symmAlg at 2876 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* encSymmKey at 2878 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* keyAlg at 2880 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* valueHint at 2882 */
};
static asn_SEQUENCE_specifics_t asn_SPC_EncryptedValue_specs_1 = {
	sizeof(struct EncryptedValue),
	offsetof(struct EncryptedValue, _asn_ctx),
	asn_MAP_EncryptedValue_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_EncryptedValue = {
	"EncryptedValue",
	"EncryptedValue",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_EncryptedValue_tags_1,
	sizeof(asn_DEF_EncryptedValue_tags_1)
		/sizeof(asn_DEF_EncryptedValue_tags_1[0]), /* 1 */
	asn_DEF_EncryptedValue_tags_1,	/* Same as above */
	sizeof(asn_DEF_EncryptedValue_tags_1)
		/sizeof(asn_DEF_EncryptedValue_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_EncryptedValue_1,
	6,	/* Elements count */
	&asn_SPC_EncryptedValue_specs_1	/* Additional specs */
};

