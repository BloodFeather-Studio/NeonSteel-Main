// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerMech.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerMech() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NEONSTEEL_API UClass* Z_Construct_UClass_APlayerMech();
NEONSTEEL_API UClass* Z_Construct_UClass_APlayerMech_NoRegister();
UPackage* Z_Construct_UPackage__Script_NeonSteel();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayerMech **************************************************************
void APlayerMech::StaticRegisterNativesAPlayerMech()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlayerMech;
UClass* APlayerMech::GetPrivateStaticClass()
{
	using TClass = APlayerMech;
	if (!Z_Registration_Info_UClass_APlayerMech.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerMech"),
			Z_Registration_Info_UClass_APlayerMech.InnerSingleton,
			StaticRegisterNativesAPlayerMech,
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
	return Z_Registration_Info_UClass_APlayerMech.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayerMech_NoRegister()
{
	return APlayerMech::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayerMech_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerMech.h" },
		{ "ModuleRelativePath", "Public/PlayerMech.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Mech Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum health of the mech. */" },
#endif
		{ "ModuleRelativePath", "Public/PlayerMech.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum health of the mech." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScuttleDamage_MetaData[] = {
		{ "Category", "Mech Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The amount of damage the 'Scuttle' action deals to the mech. */" },
#endif
		{ "ModuleRelativePath", "Public/PlayerMech.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of damage the 'Scuttle' action deals to the mech." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeed_MetaData[] = {
		{ "Category", "Mech Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The maximum walking speed of the mech. */" },
#endif
		{ "ModuleRelativePath", "Public/PlayerMech.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum walking speed of the mech." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpHeight_MetaData[] = {
		{ "Category", "Mech Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The vertical force of the mech's jump. */" },
#endif
		{ "ModuleRelativePath", "Public/PlayerMech.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The vertical force of the mech's jump." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoomLength_MetaData[] = {
		{ "Category", "Mech Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The distance of the camera from the mech. */" },
#endif
		{ "ModuleRelativePath", "Public/PlayerMech.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The distance of the camera from the mech." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Input Mapping Context to use for this character. */" },
#endif
		{ "ModuleRelativePath", "Public/PlayerMech.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Mapping Context to use for this character." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Input Action for jumping. */" },
#endif
		{ "ModuleRelativePath", "Public/PlayerMech.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Action for jumping." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Input Action for moving forward/back and right/left. */" },
#endif
		{ "ModuleRelativePath", "Public/PlayerMech.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Action for moving forward/back and right/left." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Input Action for looking around with the mouse. */" },
#endif
		{ "ModuleRelativePath", "Public/PlayerMech.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Action for looking around with the mouse." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DemechAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Input Action for the de-mech/scuttle sequence. */" },
#endif
		{ "ModuleRelativePath", "Public/PlayerMech.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Action for the de-mech/scuttle sequence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageFlashMaterial_MetaData[] = {
		{ "Category", "Mech Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The material to apply briefly when the mech takes damage. */" },
#endif
		{ "ModuleRelativePath", "Public/PlayerMech.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The material to apply briefly when the mech takes damage." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The spring arm that positions the camera behind the character. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerMech.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The spring arm that positions the camera behind the character." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The camera that follows the character. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerMech.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The camera that follows the character." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterials_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An array to store the mech's original materials so they can be restored after a damage flash. */" },
#endif
		{ "ModuleRelativePath", "Public/PlayerMech.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An array to store the mech's original materials so they can be restored after a damage flash." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScuttleDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraBoomLength;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DemechAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageFlashMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerMech>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerMech_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerMech, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerMech_Statics::NewProp_ScuttleDamage = { "ScuttleDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerMech, ScuttleDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScuttleDamage_MetaData), NewProp_ScuttleDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerMech_Statics::NewProp_MaxWalkSpeed = { "MaxWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerMech, MaxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWalkSpeed_MetaData), NewProp_MaxWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerMech_Statics::NewProp_JumpHeight = { "JumpHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerMech, JumpHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpHeight_MetaData), NewProp_JumpHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerMech_Statics::NewProp_CameraBoomLength = { "CameraBoomLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerMech, CameraBoomLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoomLength_MetaData), NewProp_CameraBoomLength_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerMech_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerMech, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerMech_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerMech, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerMech_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerMech, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerMech_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerMech, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerMech_Statics::NewProp_DemechAction = { "DemechAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerMech, DemechAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DemechAction_MetaData), NewProp_DemechAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerMech_Statics::NewProp_DamageFlashMaterial = { "DamageFlashMaterial", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerMech, DamageFlashMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageFlashMaterial_MetaData), NewProp_DamageFlashMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerMech_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerMech, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerMech_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerMech, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerMech_Statics::NewProp_OriginalMaterials_Inner = { "OriginalMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerMech_Statics::NewProp_OriginalMaterials = { "OriginalMaterials", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerMech, OriginalMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalMaterials_MetaData), NewProp_OriginalMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerMech_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerMech_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerMech_Statics::NewProp_ScuttleDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerMech_Statics::NewProp_MaxWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerMech_Statics::NewProp_JumpHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerMech_Statics::NewProp_CameraBoomLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerMech_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerMech_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerMech_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerMech_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerMech_Statics::NewProp_DemechAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerMech_Statics::NewProp_DamageFlashMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerMech_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerMech_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerMech_Statics::NewProp_OriginalMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerMech_Statics::NewProp_OriginalMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerMech_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerMech_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NeonSteel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerMech_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerMech_Statics::ClassParams = {
	&APlayerMech::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlayerMech_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerMech_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerMech_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerMech_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerMech()
{
	if (!Z_Registration_Info_UClass_APlayerMech.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerMech.OuterSingleton, Z_Construct_UClass_APlayerMech_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerMech.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerMech);
APlayerMech::~APlayerMech() {}
// ********** End Class APlayerMech ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NeonSteel_Source_NeonSteel_Public_PlayerMech_h__Script_NeonSteel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerMech, APlayerMech::StaticClass, TEXT("APlayerMech"), &Z_Registration_Info_UClass_APlayerMech, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerMech), 3161639796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NeonSteel_Source_NeonSteel_Public_PlayerMech_h__Script_NeonSteel_2686979467(TEXT("/Script/NeonSteel"),
	Z_CompiledInDeferFile_FID_NeonSteel_Source_NeonSteel_Public_PlayerMech_h__Script_NeonSteel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NeonSteel_Source_NeonSteel_Public_PlayerMech_h__Script_NeonSteel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
