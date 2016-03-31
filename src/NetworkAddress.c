/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "NetworkAddress.h"

static int permitted_alphabet_table_1[256] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/* .                */
 2, 3, 4, 5, 6, 7, 8, 9,10,11, 0, 0, 0, 0, 0, 0,	/* 0123456789       */
};

static int check_permitted_alphabet_1(const void *sptr) {
	int *table = permitted_alphabet_table_1;
	/* The underlying type is NumericString */
	const NumericString_t *st = (const NumericString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!table[cv]) return -1;
	}
	return 0;
}

int
NetworkAddress_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const X121Address_t *st = (const X121Address_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 16)
		 && !check_permitted_alphabet_1(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using X121Address,
 * so here we adjust the DEF accordingly.
 */
static void
NetworkAddress_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_X121Address.free_struct;
	td->print_struct   = asn_DEF_X121Address.print_struct;
	td->ber_decoder    = asn_DEF_X121Address.ber_decoder;
	td->der_encoder    = asn_DEF_X121Address.der_encoder;
	td->xer_decoder    = asn_DEF_X121Address.xer_decoder;
	td->xer_encoder    = asn_DEF_X121Address.xer_encoder;
	td->uper_decoder   = asn_DEF_X121Address.uper_decoder;
	td->uper_encoder   = asn_DEF_X121Address.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_X121Address.per_constraints;
	td->elements       = asn_DEF_X121Address.elements;
	td->elements_count = asn_DEF_X121Address.elements_count;
	td->specifics      = asn_DEF_X121Address.specifics;
}

void
NetworkAddress_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	NetworkAddress_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
NetworkAddress_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	NetworkAddress_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
NetworkAddress_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	NetworkAddress_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
NetworkAddress_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	NetworkAddress_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
NetworkAddress_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	NetworkAddress_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
NetworkAddress_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	NetworkAddress_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static ber_tlv_tag_t asn_DEF_NetworkAddress_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (18 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NetworkAddress = {
	"NetworkAddress",
	"NetworkAddress",
	NetworkAddress_free,
	NetworkAddress_print,
	NetworkAddress_constraint,
	NetworkAddress_decode_ber,
	NetworkAddress_encode_der,
	NetworkAddress_decode_xer,
	NetworkAddress_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_NetworkAddress_tags_1,
	sizeof(asn_DEF_NetworkAddress_tags_1)
		/sizeof(asn_DEF_NetworkAddress_tags_1[0]), /* 1 */
	asn_DEF_NetworkAddress_tags_1,	/* Same as above */
	sizeof(asn_DEF_NetworkAddress_tags_1)
		/sizeof(asn_DEF_NetworkAddress_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	0	/* No specifics */
};

