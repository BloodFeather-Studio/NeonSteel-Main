// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerMech.h"

#ifdef NEONSTEEL_PlayerMech_generated_h
#error "PlayerMech.generated.h already included, missing '#pragma once' in PlayerMech.h"
#endif
#define NEONSTEEL_PlayerMech_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APlayerMech **************************************************************
NEONSTEEL_API UClass* Z_Construct_UClass_APlayerMech_NoRegister();

#define FID_NeonSteel_Source_NeonSteel_Public_PlayerMech_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerMech(); \
	friend struct Z_Construct_UClass_APlayerMech_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEONSTEEL_API UClass* Z_Construct_UClass_APlayerMech_NoRegister(); \
public: \
	DECLARE_CLASS2(APlayerMech, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NeonSteel"), Z_Construct_UClass_APlayerMech_NoRegister) \
	DECLARE_SERIALIZER(APlayerMech)


#define FID_NeonSteel_Source_NeonSteel_Public_PlayerMech_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlayerMech(APlayerMech&&) = delete; \
	APlayerMech(const APlayerMech&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerMech); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerMech); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerMech) \
	NO_API virtual ~APlayerMech();


#define FID_NeonSteel_Source_NeonSteel_Public_PlayerMech_h_15_PROLOG
#define FID_NeonSteel_Source_NeonSteel_Public_PlayerMech_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NeonSteel_Source_NeonSteel_Public_PlayerMech_h_18_INCLASS_NO_PURE_DECLS \
	FID_NeonSteel_Source_NeonSteel_Public_PlayerMech_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlayerMech;

// ********** End Class APlayerMech ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NeonSteel_Source_NeonSteel_Public_PlayerMech_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
