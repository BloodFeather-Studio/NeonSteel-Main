// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MechTestMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMechTestMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NEONSTEEL_API UClass* Z_Construct_UClass_AMechTestMode();
NEONSTEEL_API UClass* Z_Construct_UClass_AMechTestMode_NoRegister();
NEONSTEEL_API UClass* Z_Construct_UClass_APilotCharacter_NoRegister();
NEONSTEEL_API UClass* Z_Construct_UClass_APlayerMech_NoRegister();
UPackage* Z_Construct_UPackage__Script_NeonSteel();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMechTestMode ************************************************************
void AMechTestMode::StaticRegisterNativesAMechTestMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMechTestMode;
UClass* AMechTestMode::GetPrivateStaticClass()
{
	using TClass = AMechTestMode;
	if (!Z_Registration_Info_UClass_AMechTestMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MechTestMode"),
			Z_Registration_Info_UClass_AMechTestMode.InnerSingleton,
			StaticRegisterNativesAMechTestMode,
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
	return Z_Registration_Info_UClass_AMechTestMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AMechTestMode_NoRegister()
{
	return AMechTestMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMechTestMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Manages the game's rules, including the spawning and tracking of the persistent pilot and mech.\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MechTestMode.h" },
		{ "ModuleRelativePath", "Public/MechTestMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manages the game's rules, including the spawning and tracking of the persistent pilot and mech." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MechClass_MetaData[] = {
		{ "Category", "Mech" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Blueprint of the PlayerMech to spawn at the start of the game. Must be set in BP_MechTestMode. */" },
#endif
		{ "ModuleRelativePath", "Public/MechTestMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Blueprint of the PlayerMech to spawn at the start of the game. Must be set in BP_MechTestMode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldMech_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A direct pointer to the single mech instance in the world for persistence. */" },
#endif
		{ "ModuleRelativePath", "Public/MechTestMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A direct pointer to the single mech instance in the world for persistence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPilot_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A direct pointer to the single pilot instance in the world for persistence. */" },
#endif
		{ "ModuleRelativePath", "Public/MechTestMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A direct pointer to the single pilot instance in the world for persistence." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MechClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldMech;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldPilot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechTestMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMechTestMode_Statics::NewProp_MechClass = { "MechClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMechTestMode, MechClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APlayerMech_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MechClass_MetaData), NewProp_MechClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMechTestMode_Statics::NewProp_WorldMech = { "WorldMech", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMechTestMode, WorldMech), Z_Construct_UClass_APlayerMech_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldMech_MetaData), NewProp_WorldMech_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMechTestMode_Statics::NewProp_WorldPilot = { "WorldPilot", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMechTestMode, WorldPilot), Z_Construct_UClass_APilotCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPilot_MetaData), NewProp_WorldPilot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMechTestMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechTestMode_Statics::NewProp_MechClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechTestMode_Statics::NewProp_WorldMech,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechTestMode_Statics::NewProp_WorldPilot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMechTestMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMechTestMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NeonSteel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMechTestMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechTestMode_Statics::ClassParams = {
	&AMechTestMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMechTestMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMechTestMode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMechTestMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMechTestMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMechTestMode()
{
	if (!Z_Registration_Info_UClass_AMechTestMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechTestMode.OuterSingleton, Z_Construct_UClass_AMechTestMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMechTestMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMechTestMode);
AMechTestMode::~AMechTestMode() {}
// ********** End Class AMechTestMode **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NeonSteel_Source_NeonSteel_Public_MechTestMode_h__Script_NeonSteel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMechTestMode, AMechTestMode::StaticClass, TEXT("AMechTestMode"), &Z_Registration_Info_UClass_AMechTestMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechTestMode), 1599663571U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NeonSteel_Source_NeonSteel_Public_MechTestMode_h__Script_NeonSteel_2659430337(TEXT("/Script/NeonSteel"),
	Z_CompiledInDeferFile_FID_NeonSteel_Source_NeonSteel_Public_MechTestMode_h__Script_NeonSteel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NeonSteel_Source_NeonSteel_Public_MechTestMode_h__Script_NeonSteel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
