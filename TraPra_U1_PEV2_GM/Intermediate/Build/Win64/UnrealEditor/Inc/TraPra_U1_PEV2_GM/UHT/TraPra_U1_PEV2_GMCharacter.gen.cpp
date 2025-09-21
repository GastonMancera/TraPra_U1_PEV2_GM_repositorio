// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TraPra_U1_PEV2_GMCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTraPra_U1_PEV2_GMCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
TRAPRA_U1_PEV2_GM_API UClass* Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter();
TRAPRA_U1_PEV2_GM_API UClass* Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TraPra_U1_PEV2_GM();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATraPra_U1_PEV2_GMCharacter Function DoJumpEnd ***************************
struct Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoJumpEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump pressed inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump pressed inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoJumpEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter, nullptr, "DoJumpEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoJumpEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoJumpEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoJumpEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoJumpEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATraPra_U1_PEV2_GMCharacter::execDoJumpEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpEnd();
	P_NATIVE_END;
}
// ********** End Class ATraPra_U1_PEV2_GMCharacter Function DoJumpEnd *****************************

// ********** Begin Class ATraPra_U1_PEV2_GMCharacter Function DoJumpStart *************************
struct Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoJumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump pressed inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump pressed inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoJumpStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter, nullptr, "DoJumpStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoJumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoJumpStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoJumpStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoJumpStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATraPra_U1_PEV2_GMCharacter::execDoJumpStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpStart();
	P_NATIVE_END;
}
// ********** End Class ATraPra_U1_PEV2_GMCharacter Function DoJumpStart ***************************

// ********** Begin Class ATraPra_U1_PEV2_GMCharacter Function DoLook ******************************
struct Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoLook_Statics
{
	struct TraPra_U1_PEV2_GMCharacter_eventDoLook_Parms
	{
		float Yaw;
		float Pitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles look inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles look inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoLook_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TraPra_U1_PEV2_GMCharacter_eventDoLook_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoLook_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TraPra_U1_PEV2_GMCharacter_eventDoLook_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoLook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoLook_Statics::NewProp_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoLook_Statics::NewProp_Pitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoLook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoLook_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter, nullptr, "DoLook", Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoLook_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoLook_Statics::TraPra_U1_PEV2_GMCharacter_eventDoLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoLook_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoLook_Statics::TraPra_U1_PEV2_GMCharacter_eventDoLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoLook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoLook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATraPra_U1_PEV2_GMCharacter::execDoLook)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoLook(Z_Param_Yaw,Z_Param_Pitch);
	P_NATIVE_END;
}
// ********** End Class ATraPra_U1_PEV2_GMCharacter Function DoLook ********************************

// ********** Begin Class ATraPra_U1_PEV2_GMCharacter Function DoMove ******************************
struct Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoMove_Statics
{
	struct TraPra_U1_PEV2_GMCharacter_eventDoMove_Parms
	{
		float Right;
		float Forward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles move inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles move inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoMove_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TraPra_U1_PEV2_GMCharacter_eventDoMove_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoMove_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TraPra_U1_PEV2_GMCharacter_eventDoMove_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoMove_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoMove_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter, nullptr, "DoMove", Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoMove_Statics::TraPra_U1_PEV2_GMCharacter_eventDoMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoMove_Statics::TraPra_U1_PEV2_GMCharacter_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATraPra_U1_PEV2_GMCharacter::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_Right,Z_Param_Forward);
	P_NATIVE_END;
}
// ********** End Class ATraPra_U1_PEV2_GMCharacter Function DoMove ********************************

// ********** Begin Class ATraPra_U1_PEV2_GMCharacter Function ShowAgilidad ************************
struct Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowAgilidad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowAgilidad_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter, nullptr, "ShowAgilidad", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowAgilidad_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowAgilidad_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowAgilidad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowAgilidad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATraPra_U1_PEV2_GMCharacter::execShowAgilidad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowAgilidad();
	P_NATIVE_END;
}
// ********** End Class ATraPra_U1_PEV2_GMCharacter Function ShowAgilidad **************************

// ********** Begin Class ATraPra_U1_PEV2_GMCharacter Function ShowDMG *****************************
struct Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowDMG_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowDMG_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter, nullptr, "ShowDMG", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowDMG_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowDMG_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowDMG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowDMG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATraPra_U1_PEV2_GMCharacter::execShowDMG)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowDMG();
	P_NATIVE_END;
}
// ********** End Class ATraPra_U1_PEV2_GMCharacter Function ShowDMG *******************************

// ********** Begin Class ATraPra_U1_PEV2_GMCharacter Function ShowVida ****************************
struct Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowVida_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowVida_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter, nullptr, "ShowVida", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowVida_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowVida_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowVida()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowVida_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATraPra_U1_PEV2_GMCharacter::execShowVida)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowVida();
	P_NATIVE_END;
}
// ********** End Class ATraPra_U1_PEV2_GMCharacter Function ShowVida ******************************

// ********** Begin Class ATraPra_U1_PEV2_GMCharacter **********************************************
void ATraPra_U1_PEV2_GMCharacter::StaticRegisterNativesATraPra_U1_PEV2_GMCharacter()
{
	UClass* Class = ATraPra_U1_PEV2_GMCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoJumpEnd", &ATraPra_U1_PEV2_GMCharacter::execDoJumpEnd },
		{ "DoJumpStart", &ATraPra_U1_PEV2_GMCharacter::execDoJumpStart },
		{ "DoLook", &ATraPra_U1_PEV2_GMCharacter::execDoLook },
		{ "DoMove", &ATraPra_U1_PEV2_GMCharacter::execDoMove },
		{ "ShowAgilidad", &ATraPra_U1_PEV2_GMCharacter::execShowAgilidad },
		{ "ShowDMG", &ATraPra_U1_PEV2_GMCharacter::execShowDMG },
		{ "ShowVida", &ATraPra_U1_PEV2_GMCharacter::execShowVida },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMCharacter;
UClass* ATraPra_U1_PEV2_GMCharacter::GetPrivateStaticClass()
{
	using TClass = ATraPra_U1_PEV2_GMCharacter;
	if (!Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TraPra_U1_PEV2_GMCharacter"),
			Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMCharacter.InnerSingleton,
			StaticRegisterNativesATraPra_U1_PEV2_GMCharacter,
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
	return Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_NoRegister()
{
	return ATraPra_U1_PEV2_GMCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Crea la clase del personaje y la asigna como p\xef\xbf\xbd""blica.\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TraPra_U1_PEV2_GMCharacter.h" },
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crea la clase del personaje y la asigna como p\xef\xbf\xbd""blica." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** posiciona el brazo de la camara detras del personaje */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "posiciona el brazo de la camara detras del personaje" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** seguimiento de camara */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "seguimiento de camara" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump */" },
#endif
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input */" },
#endif
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mirar Input  */" },
#endif
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mirar Input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mirar con Mouse  Input */" },
#endif
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mirar con Mouse  Input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowVidaAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowAgilidadAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowDMGAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vida_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Agilidad_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DMG_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "TraPra_U1_PEV2_GMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseLookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowVidaAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowAgilidadAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowDMGAction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Vida;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Agilidad;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DMG;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoJumpEnd, "DoJumpEnd" }, // 2565152241
		{ &Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoJumpStart, "DoJumpStart" }, // 2863942125
		{ &Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoLook, "DoLook" }, // 4255174852
		{ &Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_DoMove, "DoMove" }, // 2160224072
		{ &Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowAgilidad, "ShowAgilidad" }, // 3091128695
		{ &Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowDMG, "ShowDMG" }, // 998023648
		{ &Z_Construct_UFunction_ATraPra_U1_PEV2_GMCharacter_ShowVida, "ShowVida" }, // 523024223
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATraPra_U1_PEV2_GMCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATraPra_U1_PEV2_GMCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATraPra_U1_PEV2_GMCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATraPra_U1_PEV2_GMCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATraPra_U1_PEV2_GMCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATraPra_U1_PEV2_GMCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATraPra_U1_PEV2_GMCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_MouseLookAction = { "MouseLookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATraPra_U1_PEV2_GMCharacter, MouseLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseLookAction_MetaData), NewProp_MouseLookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_ShowVidaAction = { "ShowVidaAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATraPra_U1_PEV2_GMCharacter, ShowVidaAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowVidaAction_MetaData), NewProp_ShowVidaAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_ShowAgilidadAction = { "ShowAgilidadAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATraPra_U1_PEV2_GMCharacter, ShowAgilidadAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowAgilidadAction_MetaData), NewProp_ShowAgilidadAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_ShowDMGAction = { "ShowDMGAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATraPra_U1_PEV2_GMCharacter, ShowDMGAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowDMGAction_MetaData), NewProp_ShowDMGAction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_Vida = { "Vida", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATraPra_U1_PEV2_GMCharacter, Vida), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vida_MetaData), NewProp_Vida_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_Agilidad = { "Agilidad", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATraPra_U1_PEV2_GMCharacter, Agilidad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Agilidad_MetaData), NewProp_Agilidad_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_DMG = { "DMG", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATraPra_U1_PEV2_GMCharacter, DMG), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DMG_MetaData), NewProp_DMG_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_MouseLookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_ShowVidaAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_ShowAgilidadAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_ShowDMGAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_Vida,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_Agilidad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::NewProp_DMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TraPra_U1_PEV2_GM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::ClassParams = {
	&ATraPra_U1_PEV2_GMCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter()
{
	if (!Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMCharacter.OuterSingleton, Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATraPra_U1_PEV2_GMCharacter);
ATraPra_U1_PEV2_GMCharacter::~ATraPra_U1_PEV2_GMCharacter() {}
// ********** End Class ATraPra_U1_PEV2_GMCharacter ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Fredo_Desktop_Repositorio_Git_HUB_TraPra_U1_PEV2_GM_repositotio_TraPra_U1_PEV2_GM_Source_TraPra_U1_PEV2_GM_TraPra_U1_PEV2_GMCharacter_h__Script_TraPra_U1_PEV2_GM_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATraPra_U1_PEV2_GMCharacter, ATraPra_U1_PEV2_GMCharacter::StaticClass, TEXT("ATraPra_U1_PEV2_GMCharacter"), &Z_Registration_Info_UClass_ATraPra_U1_PEV2_GMCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATraPra_U1_PEV2_GMCharacter), 1615285376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Fredo_Desktop_Repositorio_Git_HUB_TraPra_U1_PEV2_GM_repositotio_TraPra_U1_PEV2_GM_Source_TraPra_U1_PEV2_GM_TraPra_U1_PEV2_GMCharacter_h__Script_TraPra_U1_PEV2_GM_1914928344(TEXT("/Script/TraPra_U1_PEV2_GM"),
	Z_CompiledInDeferFile_FID_Users_Fredo_Desktop_Repositorio_Git_HUB_TraPra_U1_PEV2_GM_repositotio_TraPra_U1_PEV2_GM_Source_TraPra_U1_PEV2_GM_TraPra_U1_PEV2_GMCharacter_h__Script_TraPra_U1_PEV2_GM_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Fredo_Desktop_Repositorio_Git_HUB_TraPra_U1_PEV2_GM_repositotio_TraPra_U1_PEV2_GM_Source_TraPra_U1_PEV2_GM_TraPra_U1_PEV2_GMCharacter_h__Script_TraPra_U1_PEV2_GM_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
