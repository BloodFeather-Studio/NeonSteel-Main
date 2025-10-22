// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PilotCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePilotCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NEONSTEEL_API UClass* Z_Construct_UClass_APilotCharacter();
NEONSTEEL_API UClass* Z_Construct_UClass_APilotCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_NeonSteel();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APilotCharacter **********************************************************
void APilotCharacter::StaticRegisterNativesAPilotCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APilotCharacter;
UClass* APilotCharacter::GetPrivateStaticClass()
{
	using TClass = APilotCharacter;
	if (!Z_Registration_Info_UClass_APilotCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PilotCharacter"),
			Z_Registration_Info_UClass_APilotCharacter.InnerSingleton,
			StaticRegisterNativesAPilotCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APilotCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_APilotCharacter_NoRegister()
{
	return APilotCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APilotCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents the player-controlled character when not inside the mech.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PilotCharacter.h" },
		{ "ModuleRelativePath", "Public/PilotCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the player-controlled character when not inside the mech." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoomLength_MetaData[] = {
		{ "Category", "Pilot Settings|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- CAMERA ---\n" },
#endif
		{ "ModuleRelativePath", "Public/PilotCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- CAMERA ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpHeight_MetaData[] = {
		{ "Category", "Pilot Settings|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- MOVEMENT ---\n" },
#endif
		{ "ModuleRelativePath", "Public/PilotCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- MOVEMENT ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EjectionBackwardForce_MetaData[] = {
		{ "Category", "Pilot Settings|Ejection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EJECTION ---\n" },
#endif
		{ "ModuleRelativePath", "Public/PilotCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EJECTION ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EjectionUpwardForce_MetaData[] = {
		{ "Category", "Pilot Settings|Ejection" },
		{ "ModuleRelativePath", "Public/PilotCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionReenableDelay_MetaData[] = {
		{ "Category", "Pilot Settings|Ejection" },
		{ "ModuleRelativePath", "Public/PilotCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Input Mapping Context to use for the pilot. */" },
#endif
		{ "ModuleRelativePath", "Public/PilotCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Mapping Context to use for the pilot." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Action for jumping. */" },
#endif
		{ "ModuleRelativePath", "Public/PilotCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Action for jumping." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Action for moving forward/back and right/left. */" },
#endif
		{ "ModuleRelativePath", "Public/PilotCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Action for moving forward/back and right/left." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Iut" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Action for looking around with the mouse. */" },
#endif
		{ "ModuleRelativePath", "Public/PilotCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Action for looking around with the mouse." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SummonMechAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Action for summoning the mech. */" },
#endif
		{ "ModuleRelativePath", "Public/PilotCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Action for summoning the mech." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spring arm for the camera, responsible for distance and collision. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PilotCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring arm for the camera, responsible for distance and collision." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The camera the player sees through. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PilotCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The camera the player sees through." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraBoomLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EjectionBackwardForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EjectionUpwardForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionReenableDelay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SummonMechAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APilotCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APilotCharacter_Statics::NewProp_CameraBoomLength = { "CameraBoomLength", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APilotCharacter, CameraBoomLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoomLength_MetaData), NewProp_CameraBoomLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APilotCharacter_Statics::NewProp_JumpHeight = { "JumpHeight", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APilotCharacter, JumpHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpHeight_MetaData), NewProp_JumpHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APilotCharacter_Statics::NewProp_EjectionBackwardForce = { "EjectionBackwardForce", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APilotCharacter, EjectionBackwardForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EjectionBackwardForce_MetaData), NewProp_EjectionBackwardForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APilotCharacter_Statics::NewProp_EjectionUpwardForce = { "EjectionUpwardForce", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APilotCharacter, EjectionUpwardForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EjectionUpwardForce_MetaData), NewProp_EjectionUpwardForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APilotCharacter_Statics::NewProp_CollisionReenableDelay = { "CollisionReenableDelay", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APilotCharacter, CollisionReenableDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionReenableDelay_MetaData), NewProp_CollisionReenableDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APilotCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APilotCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APilotCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APilotCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APilotCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APilotCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APilotCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APilotCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APilotCharacter_Statics::NewProp_SummonMechAction = { "SummonMechAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APilotCharacter, SummonMechAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SummonMechAction_MetaData), NewProp_SummonMechAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APilotCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APilotCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APilotCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APilotCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APilotCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APilotCharacter_Statics::NewProp_CameraBoomLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APilotCharacter_Statics::NewProp_JumpHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APilotCharacter_Statics::NewProp_EjectionBackwardForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APilotCharacter_Statics::NewProp_EjectionUpwardForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APilotCharacter_Statics::NewProp_CollisionReenableDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APilotCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APilotCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APilotCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APilotCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APilotCharacter_Statics::NewProp_SummonMechAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APilotCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APilotCharacter_Statics::NewProp_FollowCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APilotCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APilotCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NeonSteel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APilotCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APilotCharacter_Statics::ClassParams = {
	&APilotCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APilotCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APilotCharacter_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APilotCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APilotCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APilotCharacter()
{
	if (!Z_Registration_Info_UClass_APilotCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APilotCharacter.OuterSingleton, Z_Construct_UClass_APilotCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APilotCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APilotCharacter);
APilotCharacter::~APilotCharacter() {}
// ********** End Class APilotCharacter ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NeonSteel_Source_NeonSteel_Public_PilotCharacter_h__Script_NeonSteel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APilotCharacter, APilotCharacter::StaticClass, TEXT("APilotCharacter"), &Z_Registration_Info_UClass_APilotCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APilotCharacter), 2646048822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NeonSteel_Source_NeonSteel_Public_PilotCharacter_h__Script_NeonSteel_2493044256(TEXT("/Script/NeonSteel"),
	Z_CompiledInDeferFile_FID_NeonSteel_Source_NeonSteel_Public_PilotCharacter_h__Script_NeonSteel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NeonSteel_Source_NeonSteel_Public_PilotCharacter_h__Script_NeonSteel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
