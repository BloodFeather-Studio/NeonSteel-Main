// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MechTestMode.h"

#ifdef NEONSTEEL_MechTestMode_generated_h
#error "MechTestMode.generated.h already included, missing '#pragma once' in MechTestMode.h"
#endif
#define NEONSTEEL_MechTestMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMechTestMode ************************************************************
NEONSTEEL_API UClass* Z_Construct_UClass_AMechTestMode_NoRegister();

#define FID_NeonSteel_Source_NeonSteel_Public_MechTestMode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMechTestMode(); \
	friend struct Z_Construct_UClass_AMechTestMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEONSTEEL_API UClass* Z_Construct_UClass_AMechTestMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AMechTestMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NeonSteel"), Z_Construct_UClass_AMechTestMode_NoRegister) \
	DECLARE_SERIALIZER(AMechTestMode)


#define FID_NeonSteel_Source_NeonSteel_Public_MechTestMode_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMechTestMode(AMechTestMode&&) = delete; \
	AMechTestMode(const AMechTestMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechTestMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechTestMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMechTestMode) \
	NO_API virtual ~AMechTestMode();


#define FID_NeonSteel_Source_NeonSteel_Public_MechTestMode_h_13_PROLOG
#define FID_NeonSteel_Source_NeonSteel_Public_MechTestMode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NeonSteel_Source_NeonSteel_Public_MechTestMode_h_16_INCLASS_NO_PURE_DECLS \
	FID_NeonSteel_Source_NeonSteel_Public_MechTestMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMechTestMode;

// ********** End Class AMechTestMode **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NeonSteel_Source_NeonSteel_Public_MechTestMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
