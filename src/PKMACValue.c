/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCRMF"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "PKMACValue.h"

static asn_TYPE_member_t asn_MBR_PKMACValue_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PKMACValue, algId),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AlgorithmIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"algId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PKMACValue, value),
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_BIT_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"value"
		},
};
static ber_tlv_tag_t asn_DEF_PKMACValue_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PKMACValue_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (3 << 2)), 1, 0, 0 }, /* value at 2779 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 } /* algId at 2776 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PKMACValue_specs_1 = {
	sizeof(struct PKMACValue),
	offsetof(struct PKMACValue, _asn_ctx),
	asn_MAP_PKMACValue_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PKMACValue = {
	"PKMACValue",
	"PKMACValue",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_PKMACValue_tags_1,
	sizeof(asn_DEF_PKMACValue_tags_1)
		/sizeof(asn_DEF_PKMACValue_tags_1[0]), /* 1 */
	asn_DEF_PKMACValue_tags_1,	/* Same as above */
	sizeof(asn_DEF_PKMACValue_tags_1)
		/sizeof(asn_DEF_PKMACValue_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PKMACValue_1,
	2,	/* Elements count */
	&asn_SPC_PKMACValue_specs_1	/* Additional specs */
};

