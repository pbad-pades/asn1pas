/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ExtendedSecurityServices"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "ReceiptsFrom.h"

static asn_TYPE_member_t asn_MBR_receiptList_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_GeneralNames,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_receiptList_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_receiptList_specs_3 = {
	sizeof(struct receiptList),
	offsetof(struct receiptList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_receiptList_3 = {
	"receiptList",
	"receiptList",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_receiptList_tags_3,
	sizeof(asn_DEF_receiptList_tags_3)
		/sizeof(asn_DEF_receiptList_tags_3[0]) - 1, /* 1 */
	asn_DEF_receiptList_tags_3,	/* Same as above */
	sizeof(asn_DEF_receiptList_tags_3)
		/sizeof(asn_DEF_receiptList_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_receiptList_3,
	1,	/* Single element */
	&asn_SPC_receiptList_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ReceiptsFrom_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReceiptsFrom, choice.allOrFirstTier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AllOrFirstTier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"allOrFirstTier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReceiptsFrom, choice.receiptList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_receiptList_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"receiptList"
		},
};
static asn_TYPE_tag2member_t asn_MAP_ReceiptsFrom_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* allOrFirstTier at 2986 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* receiptList at 2988 */
};
static asn_CHOICE_specifics_t asn_SPC_ReceiptsFrom_specs_1 = {
	sizeof(struct ReceiptsFrom),
	offsetof(struct ReceiptsFrom, _asn_ctx),
	offsetof(struct ReceiptsFrom, present),
	sizeof(((struct ReceiptsFrom *)0)->present),
	asn_MAP_ReceiptsFrom_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ReceiptsFrom = {
	"ReceiptsFrom",
	"ReceiptsFrom",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_ReceiptsFrom_1,
	2,	/* Elements count */
	&asn_SPC_ReceiptsFrom_specs_1	/* Additional specs */
};

