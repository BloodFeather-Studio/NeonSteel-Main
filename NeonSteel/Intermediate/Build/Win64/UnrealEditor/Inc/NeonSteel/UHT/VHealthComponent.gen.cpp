// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VHealthComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVHealthComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
NEONSTEEL_API UClass* Z_Construct_UClass_AVHealthComponent();
NEONSTEEL_API UClass* Z_Construct_UClass_AVHealthComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NeonSteel();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AVHealthComponent ********************************************************
void AVHealthComponent::StaticRegisterNativesAVHealthComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVHealthComponent;
UClass* AVHealthComponent::GetPrivateStaticClass()
{
	using TClass = AVHealthComponent;
	if (!Z_Registration_Info_UClass_AVHealthComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VHealthComponent"),
			Z_Registration_Info_UClass_AVHealthComponent.InnerSingleton,
			StaticRegisterNativesAVHealthComponent,
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
	return Z_Registration_Info_UClass_AVHealthComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_AVHealthComponent_NoRegister()
{
	return AVHealthComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVHealthComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VHealthComponent.h" },
		{ "ModuleRelativePath", "Public/VHealthComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVHealthComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVHealthComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NeonSteel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVHealthComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVHealthComponent_Statics::ClassParams = {
	&AVHealthComponent::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVHealthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_AVHealthComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVHealthComponent()
{
	if (!Z_Registration_Info_UClass_AVHealthComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVHealthComponent.OuterSingleton, Z_Construct_UClass_AVHealthComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVHealthComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVHealthComponent);
AVHealthComponent::~AVHealthComponent() {}
// ********** End Class AVHealthComponent **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_ethan_Documents_Unreal_Projects_NeonSteel_Main_NeonSteel_Source_NeonSteel_Public_VHealthComponent_h__Script_NeonSteel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVHealthComponent, AVHealthComponent::StaticClass, TEXT("AVHealthComponent"), &Z_Registration_Info_UClass_AVHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVHealthComponent), 1595531745U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ethan_Documents_Unreal_Projects_NeonSteel_Main_NeonSteel_Source_NeonSteel_Public_VHealthComponent_h__Script_NeonSteel_1305278371(TEXT("/Script/NeonSteel"),
	Z_CompiledInDeferFile_FID_Users_ethan_Documents_Unreal_Projects_NeonSteel_Main_NeonSteel_Source_NeonSteel_Public_VHealthComponent_h__Script_NeonSteel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ethan_Documents_Unreal_Projects_NeonSteel_Main_NeonSteel_Source_NeonSteel_Public_VHealthComponent_h__Script_NeonSteel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
