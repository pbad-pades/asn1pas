/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignaturePolicies-88syntax"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "VriDictionary.h"

static asn_TYPE_member_t asn_MBR_VriDictionary_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VriDictionary, type),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PdfEntry,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"type"
		},
	{ ATF_POINTER, 2, offsetof(struct VriDictionary, timeReference),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_TimeReferenceType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"timeReference"
		},
	{ ATF_POINTER, 1, offsetof(struct VriDictionary, paArtifacts),
		(ASN_TAG_CLASS_UNIVERSAL | (1 << 2)),
		0,
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"paArtifacts"
		},
};
static ber_tlv_tag_t asn_DEF_VriDictionary_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_VriDictionary_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (1 << 2)), 2, 0, 0 }, /* paArtifacts at 1224 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 1, 0, 0 }, /* timeReference at 1223 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 } /* type at 1222 */
};
static asn_SEQUENCE_specifics_t asn_SPC_VriDictionary_specs_1 = {
	sizeof(struct VriDictionary),
	offsetof(struct VriDictionary, _asn_ctx),
	asn_MAP_VriDictionary_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_VriDictionary = {
	"VriDictionary",
	"VriDictionary",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_VriDictionary_tags_1,
	sizeof(asn_DEF_VriDictionary_tags_1)
		/sizeof(asn_DEF_VriDictionary_tags_1[0]), /* 1 */
	asn_DEF_VriDictionary_tags_1,	/* Same as above */
	sizeof(asn_DEF_VriDictionary_tags_1)
		/sizeof(asn_DEF_VriDictionary_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_VriDictionary_1,
	3,	/* Elements count */
	&asn_SPC_VriDictionary_specs_1	/* Additional specs */
};

