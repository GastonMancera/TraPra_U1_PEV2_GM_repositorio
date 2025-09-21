// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TraPra_U1_PEV2_GMPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTraPra_U1_PEV2_GMPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
TRAPRA_U1_PEV2_GM_API UClass* Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController();
TRAPRA_U1_PEV2_GM_API UClass* Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_TraPra_U1_PEV2_GM();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATraPra_U1_PEV2_GMPlayerController ***************************************
void ATraPra_U1_PEV2_GMPlayerController::StaticRegisterNativesATraPra_U1_PEV2_GMPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMPlayerController;
UClass* ATraPra_U1_PEV2_GMPlayerController::GetPrivateStaticClass()
{
	using TClass = ATraPra_U1_PEV2_GMPlayerController;
	if (!Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TraPra_U1_PEV2_GMPlayerController"),
			Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMPlayerController.InnerSingleton,
			StaticRegisterNativesATraPra_U1_PEV2_GMPlayerController,
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
	return Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_NoRegister()
{
	return ATraPra_U1_PEV2_GMPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic PlayerController class for a third person game\n *  Manages input mappings\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TraPra_U1_PEV2_GMPlayerController.h" },
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic PlayerController class for a third person game\nManages input mappings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileExcludedMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidgetClass_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mobile controls widget to spawn */" },
#endif
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mobile controls widget to spawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileExcludedMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileExcludedMappingContexts;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MobileControlsWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATraPra_U1_PEV2_GMPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATraPra_U1_PEV2_GMPlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::NewProp_MobileExcludedMappingContexts = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATraPra_U1_PEV2_GMPlayerController, MobileExcludedMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileExcludedMappingContexts_MetaData), NewProp_MobileExcludedMappingContexts_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::NewProp_MobileControlsWidgetClass = { "MobileControlsWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATraPra_U1_PEV2_GMPlayerController, MobileControlsWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidgetClass_MetaData), NewProp_MobileControlsWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::NewProp_DefaultMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::NewProp_MobileExcludedMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::NewProp_MobileControlsWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_TraPra_U1_PEV2_GM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::ClassParams = {
	&ATraPra_U1_PEV2_GMPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::PropPointers),
	0,
	0x008003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController()
{
	if (!Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMPlayerController.OuterSingleton, Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMPlayerController.OuterSingleton;
}
ATraPra_U1_PEV2_GMPlayerController::ATraPra_U1_PEV2_GMPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATraPra_U1_PEV2_GMPlayerController);
ATraPra_U1_PEV2_GMPlayerController::~ATraPra_U1_PEV2_GMPlayerController() {}
// ********** End Class ATraPra_U1_PEV2_GMPlayerController *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Fredo_Desktop_UnrealC___TraPra_U1_PEV2_GM_Source_TraPra_U1_PEV2_GM_TraPra_U1_PEV2_GMPlayerController_h__Script_TraPra_U1_PEV2_GM_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATraPra_U1_PEV2_GMPlayerController, ATraPra_U1_PEV2_GMPlayerController::StaticClass, TEXT("ATraPra_U1_PEV2_GMPlayerController"), &Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATraPra_U1_PEV2_GMPlayerController), 2576521296U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Fredo_Desktop_UnrealC___TraPra_U1_PEV2_GM_Source_TraPra_U1_PEV2_GM_TraPra_U1_PEV2_GMPlayerController_h__Script_TraPra_U1_PEV2_GM_3200957420(TEXT("/Script/TraPra_U1_PEV2_GM"),
	Z_CompiledInDeferFile_FID_Users_Fredo_Desktop_UnrealC___TraPra_U1_PEV2_GM_Source_TraPra_U1_PEV2_GM_TraPra_U1_PEV2_GMPlayerController_h__Script_TraPra_U1_PEV2_GM_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Fredo_Desktop_UnrealC___TraPra_U1_PEV2_GM_Source_TraPra_U1_PEV2_GM_TraPra_U1_PEV2_GMPlayerController_h__Script_TraPra_U1_PEV2_GM_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
