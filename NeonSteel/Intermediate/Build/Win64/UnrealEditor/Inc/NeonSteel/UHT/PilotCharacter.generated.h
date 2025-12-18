// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PilotCharacter.h"

#ifdef NEONSTEEL_PilotCharacter_generated_h
#error "PilotCharacter.generated.h already included, missing '#pragma once' in PilotCharacter.h"
#endif
#define NEONSTEEL_PilotCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APilotCharacter **********************************************************
NEONSTEEL_API UClass* Z_Construct_UClass_APilotCharacter_NoRegister();

#define FID_NeonSteel_Source_NeonSteel_Public_PilotCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPilotCharacter(); \
	friend struct Z_Construct_UClass_APilotCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEONSTEEL_API UClass* Z_Construct_UClass_APilotCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(APilotCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NeonSteel"), Z_Construct_UClass_APilotCharacter_NoRegister) \
	DECLARE_SERIALIZER(APilotCharacter)


#define FID_NeonSteel_Source_NeonSteel_Public_PilotCharacter_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APilotCharacter(APilotCharacter&&) = delete; \
	APilotCharacter(const APilotCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APilotCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APilotCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APilotCharacter) \
	NO_API virtual ~APilotCharacter();


#define FID_NeonSteel_Source_NeonSteel_Public_PilotCharacter_h_18_PROLOG
#define FID_NeonSteel_Source_NeonSteel_Public_PilotCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NeonSteel_Source_NeonSteel_Public_PilotCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_NeonSteel_Source_NeonSteel_Public_PilotCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APilotCharacter;

// ********** End Class APilotCharacter ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NeonSteel_Source_NeonSteel_Public_PilotCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
