/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignatureFormats-88syntax"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "CRLListID.h"

static asn_TYPE_member_t asn_MBR_crls_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CrlValidatedID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_crls_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_crls_specs_2 = {
	sizeof(struct crls),
	offsetof(struct crls, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_crls_2 = {
	"crls",
	"crls",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_crls_tags_2,
	sizeof(asn_DEF_crls_tags_2)
		/sizeof(asn_DEF_crls_tags_2[0]), /* 1 */
	asn_DEF_crls_tags_2,	/* Same as above */
	sizeof(asn_DEF_crls_tags_2)
		/sizeof(asn_DEF_crls_tags_2[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_crls_2,
	1,	/* Single element */
	&asn_SPC_crls_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CRLListID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CRLListID, crls),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_crls_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"crls"
		},
};
static ber_tlv_tag_t asn_DEF_CRLListID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CRLListID_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 } /* crls at 260 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CRLListID_specs_1 = {
	sizeof(struct CRLListID),
	offsetof(struct CRLListID, _asn_ctx),
	asn_MAP_CRLListID_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CRLListID = {
	"CRLListID",
	"CRLListID",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CRLListID_tags_1,
	sizeof(asn_DEF_CRLListID_tags_1)
		/sizeof(asn_DEF_CRLListID_tags_1[0]), /* 1 */
	asn_DEF_CRLListID_tags_1,	/* Same as above */
	sizeof(asn_DEF_CRLListID_tags_1)
		/sizeof(asn_DEF_CRLListID_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CRLListID_1,
	1,	/* Elements count */
	&asn_SPC_CRLListID_specs_1	/* Additional specs */
};

