/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignaturePolicies-88syntax"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "SignaturePolicy.h"

static asn_TYPE_member_t asn_MBR_SignaturePolicy_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SignaturePolicy, signPolicyHashAlg),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AlgorithmIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"signPolicyHashAlg"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SignaturePolicy, signPolicyInfo),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SignPolicyInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"signPolicyInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct SignaturePolicy, signPolicyHash),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_SignPolicyHash,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"signPolicyHash"
		},
};
static ber_tlv_tag_t asn_DEF_SignaturePolicy_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SignaturePolicy_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 2, 0, 0 }, /* signPolicyHash at 995 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 1 }, /* signPolicyHashAlg at 993 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 0 } /* signPolicyInfo at 994 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SignaturePolicy_specs_1 = {
	sizeof(struct SignaturePolicy),
	offsetof(struct SignaturePolicy, _asn_ctx),
	asn_MAP_SignaturePolicy_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SignaturePolicy = {
	"SignaturePolicy",
	"SignaturePolicy",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SignaturePolicy_tags_1,
	sizeof(asn_DEF_SignaturePolicy_tags_1)
		/sizeof(asn_DEF_SignaturePolicy_tags_1[0]), /* 1 */
	asn_DEF_SignaturePolicy_tags_1,	/* Same as above */
	sizeof(asn_DEF_SignaturePolicy_tags_1)
		/sizeof(asn_DEF_SignaturePolicy_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SignaturePolicy_1,
	3,	/* Elements count */
	&asn_SPC_SignaturePolicy_specs_1	/* Additional specs */
};

SignaturePolicy_t*
DecodeSignaturePolicy(const void *buffer, size_t buf_size, int *retcode) {
	SignaturePolicy_t *sigpol = 0; /* Note this 0! */
	asn_dec_rval_t rval;
	rval = asn_DEF_SignaturePolicy.ber_decoder(0,
		&asn_DEF_SignaturePolicy,
		(void **)&sigpol,
		buffer, buf_size,
		0);
	if (rval.code == RC_OK) {
	
		/*********** Check ASN.1 constraints */
		char errbuf[128];
		size_t errlen = sizeof(errbuf);
		if (asn_check_constraints(&asn_DEF_SignaturePolicy, sigpol, errbuf, &errlen)) {
			*retcode = RC_CHECKFAIL;
			return sigpol;
		}
		/************/

		*retcode = RC_OK;
		return sigpol; /* Decoding succeeded */
	}
	else {
		/* Free partially decoded rect */
		SignaturePolicy_free(sigpol);
		*retcode = RC_FAIL;
		return 0;
	}
}

void SignaturePolicy_free(SignaturePolicy_t * sigpol) {
	if (sigpol)
		asn_DEF_SignaturePolicy.free_struct(&asn_DEF_SignaturePolicy, sigpol, 0);
}
