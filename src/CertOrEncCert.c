/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCMP"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "CertOrEncCert.h"

static asn_TYPE_member_t asn_MBR_CertOrEncCert_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CertOrEncCert, choice.certificate),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Certificate,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"certificate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CertOrEncCert, choice.encryptedCert),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_EncryptedValue,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"encryptedCert"
		},
};
static asn_TYPE_tag2member_t asn_MAP_CertOrEncCert_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* certificate at 2575 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* encryptedCert at 2577 */
};
static asn_CHOICE_specifics_t asn_SPC_CertOrEncCert_specs_1 = {
	sizeof(struct CertOrEncCert),
	offsetof(struct CertOrEncCert, _asn_ctx),
	offsetof(struct CertOrEncCert, present),
	sizeof(((struct CertOrEncCert *)0)->present),
	asn_MAP_CertOrEncCert_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_CertOrEncCert = {
	"CertOrEncCert",
	"CertOrEncCert",
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
	asn_MBR_CertOrEncCert_1,
	2,	/* Elements count */
	&asn_SPC_CertOrEncCert_specs_1	/* Additional specs */
};

