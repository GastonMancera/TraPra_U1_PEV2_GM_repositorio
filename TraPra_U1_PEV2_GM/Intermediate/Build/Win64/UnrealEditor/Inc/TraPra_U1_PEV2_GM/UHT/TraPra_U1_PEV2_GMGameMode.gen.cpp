// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TraPra_U1_PEV2_GMGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTraPra_U1_PEV2_GMGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TRAPRA_U1_PEV2_GM_API UClass* Z_Construct_UClass_ATraPra_U1_PEV2_GMGameMode();
TRAPRA_U1_PEV2_GM_API UClass* Z_Construct_UClass_ATraPra_U1_PEV2_GMGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TraPra_U1_PEV2_GM();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATraPra_U1_PEV2_GMGameMode ***********************************************
void ATraPra_U1_PEV2_GMGameMode::StaticRegisterNativesATraPra_U1_PEV2_GMGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMGameMode;
UClass* ATraPra_U1_PEV2_GMGameMode::GetPrivateStaticClass()
{
	using TClass = ATraPra_U1_PEV2_GMGameMode;
	if (!Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TraPra_U1_PEV2_GMGameMode"),
			Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMGameMode.InnerSingleton,
			StaticRegisterNativesATraPra_U1_PEV2_GMGameMode,
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
	return Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ATraPra_U1_PEV2_GMGameMode_NoRegister()
{
	return ATraPra_U1_PEV2_GMGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATraPra_U1_PEV2_GMGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TraPra_U1_PEV2_GMGameMode.h" },
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATraPra_U1_PEV2_GMGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATraPra_U1_PEV2_GMGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TraPra_U1_PEV2_GM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATraPra_U1_PEV2_GMGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATraPra_U1_PEV2_GMGameMode_Statics::ClassParams = {
	&ATraPra_U1_PEV2_GMGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATraPra_U1_PEV2_GMGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATraPra_U1_PEV2_GMGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATraPra_U1_PEV2_GMGameMode()
{
	if (!Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMGameMode.OuterSingleton, Z_Construct_UClass_ATraPra_U1_PEV2_GMGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATraPra_U1_PEV2_GMGameMode);
ATraPra_U1_PEV2_GMGameMode::~ATraPra_U1_PEV2_GMGameMode() {}
// ********** End Class ATraPra_U1_PEV2_GMGameMode *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Fredo_Desktop_Repositorio_Git_HUB_TraPra_U1_PEV2_GM_repositotio_TraPra_U1_PEV2_GM_Source_TraPra_U1_PEV2_GM_TraPra_U1_PEV2_GMGameMode_h__Script_TraPra_U1_PEV2_GM_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATraPra_U1_PEV2_GMGameMode, ATraPra_U1_PEV2_GMGameMode::StaticClass, TEXT("ATraPra_U1_PEV2_GMGameMode"), &Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATraPra_U1_PEV2_GMGameMode), 381051238U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Fredo_Desktop_Repositorio_Git_HUB_TraPra_U1_PEV2_GM_repositotio_TraPra_U1_PEV2_GM_Source_TraPra_U1_PEV2_GM_TraPra_U1_PEV2_GMGameMode_h__Script_TraPra_U1_PEV2_GM_510447618(TEXT("/Script/TraPra_U1_PEV2_GM"),
	Z_CompiledInDeferFile_FID_Users_Fredo_Desktop_Repositorio_Git_HUB_TraPra_U1_PEV2_GM_repositotio_TraPra_U1_PEV2_GM_Source_TraPra_U1_PEV2_GM_TraPra_U1_PEV2_GMGameMode_h__Script_TraPra_U1_PEV2_GM_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Fredo_Desktop_Repositorio_Git_HUB_TraPra_U1_PEV2_GM_repositotio_TraPra_U1_PEV2_GM_Source_TraPra_U1_PEV2_GM_TraPra_U1_PEV2_GMGameMode_h__Script_TraPra_U1_PEV2_GM_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
