/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "OCSP"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "ResponseData.h"

static int asn_DFL_2_set_0(int set_value, void **sptr) {
	OCSP_Version_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static asn_TYPE_member_t asn_MBR_responses_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SingleResponse,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_responses_tags_5[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_responses_specs_5 = {
	sizeof(struct responses),
	offsetof(struct responses, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_responses_5 = {
	"responses",
	"responses",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_responses_tags_5,
	sizeof(asn_DEF_responses_tags_5)
		/sizeof(asn_DEF_responses_tags_5[0]), /* 1 */
	asn_DEF_responses_tags_5,	/* Same as above */
	sizeof(asn_DEF_responses_tags_5)
		/sizeof(asn_DEF_responses_tags_5[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_responses_5,
	1,	/* Single element */
	&asn_SPC_responses_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ResponseData_1[] = {
	{ ATF_NOFLAGS, 1, offsetof(struct ResponseData, version),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_OCSP_Version,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		asn_DFL_2_set_0,	/* DEFAULT 0 */
		"version"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ResponseData, responderID),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_ResponderID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"responderID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ResponseData, producedAt),
		(ASN_TAG_CLASS_UNIVERSAL | (24 << 2)),
		0,
		&asn_DEF_GeneralizedTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"producedAt"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ResponseData, responses),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_responses_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"responses"
		},
	{ ATF_POINTER, 1, offsetof(struct ResponseData, responseExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"responseExtensions"
		},
};
static ber_tlv_tag_t asn_DEF_ResponseData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ResponseData_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, 0, 0 }, /* responses at 3207 */
    { (ASN_TAG_CLASS_UNIVERSAL | (24 << 2)), 2, 0, 0 }, /* producedAt at 3206 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* version at 3204 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 1 }, /* byName at 3211 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 4, -1, 0 }, /* responseExtensions at 3208 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 } /* byKey at 3212 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ResponseData_specs_1 = {
	sizeof(struct ResponseData),
	offsetof(struct ResponseData, _asn_ctx),
	asn_MAP_ResponseData_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ResponseData = {
	"ResponseData",
	"ResponseData",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ResponseData_tags_1,
	sizeof(asn_DEF_ResponseData_tags_1)
		/sizeof(asn_DEF_ResponseData_tags_1[0]), /* 1 */
	asn_DEF_ResponseData_tags_1,	/* Same as above */
	sizeof(asn_DEF_ResponseData_tags_1)
		/sizeof(asn_DEF_ResponseData_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ResponseData_1,
	5,	/* Elements count */
	&asn_SPC_ResponseData_specs_1	/* Additional specs */
};

