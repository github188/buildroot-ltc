/**
******************************************************************************
@file   /home/jenkins/builds/workspace/ISP_PKG/build/CI/felix/regdefs2.7/regdefs//hw_struct/fields_ext_data_generation.h

@brief  FIELDS_EXT_DATA_GENERATION_H registers and fields property array (name, offset, etc)

@author <Autogenerated>
		<b>Copyright 2005 by Imagination Technologies Limited.</b>
		All rights reserved.  No part of this software, either
		material or conceptual may be copied or distributed,
		transmitted, transcribed, stored in a retrieval system
		or translated into any human or computer language in any
		form by any means, electronic, mechanical, manual or
		other-wise, or disclosed to third parties without the
		express written permission of Imagination Technologies
		Limited, Unit 8, HomePark Industrial Estate,
		King's Langley, Hertfordshire, WD4 8LZ, U.K.


<b>Description:</b>
		Defines the FieldDefnListEl structure if not already defined (FIELD_DEFN_LIST_EL).


		Defines an array of FieldDefnListEl that contains all registers and fields information (non-sorted).
<b>Platform:</b> ?
@Version 1.0

******************************************************************************/

#if !defined (__FIELDS_EXT_DATA_GENERATION_H__)
#define __FIELDS_EXT_DATA_GENERATION_H__

#ifdef __cplusplus
extern "C" {
#endif

#ifndef FIELD_DEFN_LIST_EL
#define FIELD_DEFN_LIST_EL
/** @brief Register information structure */
typedef struct _FieldDefnListEl
{
	const IMG_CHAR*		szRegName; /**< @brief Register's name */
	const IMG_CHAR*		szFieldName; /**< @brief Field's name */
	IMG_UINT32		ui32RegOffset; /**< @brief Register's offset in Bytes in the register bank */
	IMG_UINT32		ui32FieldStart; /**< @brief Field's starting offset in bits (from ui32RegOffset) */
	IMG_UINT32		ui32FieldEnd; /**< @brief Field's ending offset in bits (from ui32RegOffset) */
	IMG_UINT32		ui32FieldDefault; /**< @brief Field's default value */
} FieldDefnListEl;
#endif // FIELD_DEFN_LIST_EL


#define DATA_GENERATION_POINTERS_GROUP_FIELDS FieldDefnListEl data_generation_pointers_group_fields[] = {\
	{"DG_LINK_ADDR", "DG_LINK_ADDRESS", 0x00000000, 6, 31, 0x0},\
	{"DG_TAG", "DG_TAG", 0x00000004, 0, 31, 0x0},\
	{"DG_ADDR_DATA", "DG_ADDR_DATA", 0x00000008, 6, 31, 0x0},\
	{"DG_DATA_STRIDE", "DG_ADDR_DATA_STRIDE", 0x0000000C, 6, 31, 0x0},\
};

#define DATA_GENERATION_POINTERS_GROUP_ADD_FIELD_DEFNS(DefnSet, Memspace, MemspaceID) \
	{ \
		int i; \
		DATA_GENERATION_POINTERS_GROUP_FIELDS; \
		for (i = 0; i < (sizeof(data_generation_pointers_group_fields)/sizeof(*data_generation_pointers_group_fields)); i++) \
		{ \
			addFieldDefn(DefnSet, Memspace, MemspaceID, \
				data_generation_pointers_group_fields[i].szRegName, \
				data_generation_pointers_group_fields[i].szFieldName, \
				data_generation_pointers_group_fields[i].ui32RegOffset, \
				data_generation_pointers_group_fields[i].ui32FieldStart, \
				data_generation_pointers_group_fields[i].ui32FieldEnd, \
				data_generation_pointers_group_fields[i].ui32FieldDefault); \
		} \
	}




#ifdef __cplusplus
}
#endif

#endif /* __FIELDS_EXT_DATA_GENERATION_H__ */