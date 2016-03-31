/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "CertificateList.h"

static asn_TYPE_member_t asn_MBR_CertificateList_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CertificateList, tbsCertList),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TBSCertList,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"tbsCertList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CertificateList, signatureAlgorithm),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AlgorithmIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"signatureAlgorithm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CertificateList, signature),
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_BIT_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"signature"
		},
};
static ber_tlv_tag_t asn_DEF_CertificateList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CertificateList_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (3 << 2)), 2, 0, 0 }, /* signature at 614 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 1 }, /* tbsCertList at 612 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 0 } /* signatureAlgorithm at 613 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CertificateList_specs_1 = {
	sizeof(struct CertificateList),
	offsetof(struct CertificateList, _asn_ctx),
	asn_MAP_CertificateList_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CertificateList = {
	"CertificateList",
	"CertificateList",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CertificateList_tags_1,
	sizeof(asn_DEF_CertificateList_tags_1)
		/sizeof(asn_DEF_CertificateList_tags_1[0]), /* 1 */
	asn_DEF_CertificateList_tags_1,	/* Same as above */
	sizeof(asn_DEF_CertificateList_tags_1)
		/sizeof(asn_DEF_CertificateList_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CertificateList_1,
	3,	/* Elements count */
	&asn_SPC_CertificateList_specs_1	/* Additional specs */
};

