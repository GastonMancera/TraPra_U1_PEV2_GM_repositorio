// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTraPra_U1_PEV2_GM_init() {}
	TRAPRA_U1_PEV2_GM_API UFunction* Z_Construct_UDelegateFunction_TraPra_U1_PEV2_GM_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TraPra_U1_PEV2_GM;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TraPra_U1_PEV2_GM()
	{
		if (!Z_Registration_Info_UPackage__Script_TraPra_U1_PEV2_GM.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TraPra_U1_PEV2_GM_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TraPra_U1_PEV2_GM",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF1670096,
				0x8BF90807,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TraPra_U1_PEV2_GM.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TraPra_U1_PEV2_GM.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TraPra_U1_PEV2_GM(Z_Construct_UPackage__Script_TraPra_U1_PEV2_GM, TEXT("/Script/TraPra_U1_PEV2_GM"), Z_Registration_Info_UPackage__Script_TraPra_U1_PEV2_GM, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF1670096, 0x8BF90807));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
