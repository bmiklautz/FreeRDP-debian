/*
 * Generated by asn1c-0.9.22.1409 (http://lionet.info/asn1c)
 * From ASN.1 module "CREDSSP"
 * 	found in "credssp.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy`
 */

#include <asn_internal.h>

#include "TSCspDataDetail.h"

static asn_TYPE_member_t asn_MBR_TSCspDataDetail_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TSCspDataDetail, keySpec),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"keySpec"
		},
	{ ATF_POINTER, 4, offsetof(struct TSCspDataDetail, cardName),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cardName"
		},
	{ ATF_POINTER, 3, offsetof(struct TSCspDataDetail, readerName),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"readerName"
		},
	{ ATF_POINTER, 2, offsetof(struct TSCspDataDetail, containerName),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"containerName"
		},
	{ ATF_POINTER, 1, offsetof(struct TSCspDataDetail, cspName),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cspName"
		},
};
static int asn_MAP_TSCspDataDetail_oms_1[] = { 1, 2, 3, 4 };
static ber_tlv_tag_t asn_DEF_TSCspDataDetail_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_TSCspDataDetail_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* keySpec at 40 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cardName at 41 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* readerName at 42 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* containerName at 43 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* cspName at 44 */
};
static asn_SEQUENCE_specifics_t asn_SPC_TSCspDataDetail_specs_1 = {
	sizeof(struct TSCspDataDetail),
	offsetof(struct TSCspDataDetail, _asn_ctx),
	asn_MAP_TSCspDataDetail_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_TSCspDataDetail_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_TSCspDataDetail = {
	"TSCspDataDetail",
	"TSCspDataDetail",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_TSCspDataDetail_tags_1,
	sizeof(asn_DEF_TSCspDataDetail_tags_1)
		/sizeof(asn_DEF_TSCspDataDetail_tags_1[0]), /* 1 */
	asn_DEF_TSCspDataDetail_tags_1,	/* Same as above */
	sizeof(asn_DEF_TSCspDataDetail_tags_1)
		/sizeof(asn_DEF_TSCspDataDetail_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_TSCspDataDetail_1,
	5,	/* Elements count */
	&asn_SPC_TSCspDataDetail_specs_1	/* Additional specs */
};
