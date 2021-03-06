/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "CRLDistributionPoints.h"

static asn_TYPE_member_t asn_MBR_CRLDistributionPoints_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_DistributionPoint,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_CRLDistributionPoints_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_CRLDistributionPoints_specs_1 = {
	sizeof(struct CRLDistributionPoints),
	offsetof(struct CRLDistributionPoints, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_CRLDistributionPoints = {
	"CRLDistributionPoints",
	"CRLDistributionPoints",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CRLDistributionPoints_tags_1,
	sizeof(asn_DEF_CRLDistributionPoints_tags_1)
		/sizeof(asn_DEF_CRLDistributionPoints_tags_1[0]), /* 1 */
	asn_DEF_CRLDistributionPoints_tags_1,	/* Same as above */
	sizeof(asn_DEF_CRLDistributionPoints_tags_1)
		/sizeof(asn_DEF_CRLDistributionPoints_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CRLDistributionPoints_1,
	1,	/* Single element */
	&asn_SPC_CRLDistributionPoints_specs_1	/* Additional specs */
};

CRLDistributionPoints_t*
DecodeCRLDistributionPoints(const void *buf, size_t size) {
	CRLDistributionPoints_t *crl = 0; /* Note this 0! */
	asn_dec_rval_t rval;
	rval = asn_DEF_CRLDistributionPoints.ber_decoder(0,
		&asn_DEF_CRLDistributionPoints,
		(void **)&crl,
		buf, size,
		0);

	if (rval.code == RC_OK) {
		/* Check ASN.1 constraints */
		return crl; /* Decoding succeeded */
	}
	else {
		/* Free partially decoded rect */
		CRLDistributionPoints_free(crl);
		return 0;
	}
}

void
CRLDistributionPoints_free(CRLDistributionPoints_t *crl) {
	if (crl) {
		asn_DEF_CRLDistributionPoints.free_struct(
			&asn_DEF_CRLDistributionPoints, crl, 0);
	}
}
