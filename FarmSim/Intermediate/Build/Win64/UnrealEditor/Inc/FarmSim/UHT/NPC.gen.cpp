// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FarmSim/NPC.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
FARMSIM_API UClass* Z_Construct_UClass_ANPC();
FARMSIM_API UClass* Z_Construct_UClass_ANPC_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FarmSim();
// End Cross Module References

// Begin Class ANPC Function CompletePurchase
struct Z_Construct_UFunction_ANPC_CompletePurchase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_CompletePurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC, nullptr, "CompletePurchase", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_CompletePurchase_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPC_CompletePurchase_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANPC_CompletePurchase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPC_CompletePurchase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPC::execCompletePurchase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CompletePurchase();
	P_NATIVE_END;
}
// End Class ANPC Function CompletePurchase

// Begin Class ANPC Function MoveToCounter
struct Z_Construct_UFunction_ANPC_MoveToCounter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_MoveToCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC, nullptr, "MoveToCounter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_MoveToCounter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPC_MoveToCounter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANPC_MoveToCounter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPC_MoveToCounter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPC::execMoveToCounter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToCounter();
	P_NATIVE_END;
}
// End Class ANPC Function MoveToCounter

// Begin Class ANPC Function Multicast_MoveToCounter
static const FName NAME_ANPC_Multicast_MoveToCounter = FName(TEXT("Multicast_MoveToCounter"));
void ANPC::Multicast_MoveToCounter()
{
	UFunction* Func = FindFunctionChecked(NAME_ANPC_Multicast_MoveToCounter);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ANPC_Multicast_MoveToCounter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_Multicast_MoveToCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC, nullptr, "Multicast_MoveToCounter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_Multicast_MoveToCounter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPC_Multicast_MoveToCounter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANPC_Multicast_MoveToCounter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPC_Multicast_MoveToCounter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPC::execMulticast_MoveToCounter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Multicast_MoveToCounter_Validate())
	{
		RPC_ValidateFailed(TEXT("Multicast_MoveToCounter_Validate"));
		return;
	}
	P_THIS->Multicast_MoveToCounter_Implementation();
	P_NATIVE_END;
}
// End Class ANPC Function Multicast_MoveToCounter

// Begin Class ANPC Function OnRep_DesiredProduct
struct Z_Construct_UFunction_ANPC_OnRep_DesiredProduct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_OnRep_DesiredProduct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC, nullptr, "OnRep_DesiredProduct", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_OnRep_DesiredProduct_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPC_OnRep_DesiredProduct_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANPC_OnRep_DesiredProduct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPC_OnRep_DesiredProduct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPC::execOnRep_DesiredProduct)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DesiredProduct();
	P_NATIVE_END;
}
// End Class ANPC Function OnRep_DesiredProduct

// Begin Class ANPC Function Server_CompletePurchase
static const FName NAME_ANPC_Server_CompletePurchase = FName(TEXT("Server_CompletePurchase"));
void ANPC::Server_CompletePurchase()
{
	UFunction* Func = FindFunctionChecked(NAME_ANPC_Server_CompletePurchase);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ANPC_Server_CompletePurchase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_Server_CompletePurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC, nullptr, "Server_CompletePurchase", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_Server_CompletePurchase_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPC_Server_CompletePurchase_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANPC_Server_CompletePurchase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPC_Server_CompletePurchase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPC::execServer_CompletePurchase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_CompletePurchase_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_CompletePurchase_Validate"));
		return;
	}
	P_THIS->Server_CompletePurchase_Implementation();
	P_NATIVE_END;
}
// End Class ANPC Function Server_CompletePurchase

// Begin Class ANPC
void ANPC::StaticRegisterNativesANPC()
{
	UClass* Class = ANPC::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CompletePurchase", &ANPC::execCompletePurchase },
		{ "MoveToCounter", &ANPC::execMoveToCounter },
		{ "Multicast_MoveToCounter", &ANPC::execMulticast_MoveToCounter },
		{ "OnRep_DesiredProduct", &ANPC::execOnRep_DesiredProduct },
		{ "Server_CompletePurchase", &ANPC::execServer_CompletePurchase },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPC);
UClass* Z_Construct_UClass_ANPC_NoRegister()
{
	return ANPC::StaticClass();
}
struct Z_Construct_UClass_ANPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPC.h" },
		{ "ModuleRelativePath", "NPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathSpline_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI Movement\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI Movement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CounterLocation_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "NPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PurchaseWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredProduct_MetaData[] = {
		{ "Category", "Purchase" },
		{ "ModuleRelativePath", "NPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionSphere_MetaData[] = {
		{ "Category", "Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathSpline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CounterLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PurchaseWidget;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DesiredProduct;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionSphere;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPC_CompletePurchase, "CompletePurchase" }, // 4207733418
		{ &Z_Construct_UFunction_ANPC_MoveToCounter, "MoveToCounter" }, // 3132062382
		{ &Z_Construct_UFunction_ANPC_Multicast_MoveToCounter, "Multicast_MoveToCounter" }, // 3841289857
		{ &Z_Construct_UFunction_ANPC_OnRep_DesiredProduct, "OnRep_DesiredProduct" }, // 4244244572
		{ &Z_Construct_UFunction_ANPC_Server_CompletePurchase, "Server_CompletePurchase" }, // 936936027
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_Statics::NewProp_PathSpline = { "PathSpline", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPC, PathSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathSpline_MetaData), NewProp_PathSpline_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANPC_Statics::NewProp_CounterLocation = { "CounterLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPC, CounterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CounterLocation_MetaData), NewProp_CounterLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_Statics::NewProp_PurchaseWidget = { "PurchaseWidget", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPC, PurchaseWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PurchaseWidget_MetaData), NewProp_PurchaseWidget_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ANPC_Statics::NewProp_DesiredProduct = { "DesiredProduct", "OnRep_DesiredProduct", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPC, DesiredProduct), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredProduct_MetaData), NewProp_DesiredProduct_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_Statics::NewProp_InteractionSphere = { "InteractionSphere", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPC, InteractionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionSphere_MetaData), NewProp_InteractionSphere_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Statics::NewProp_PathSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Statics::NewProp_CounterLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Statics::NewProp_PurchaseWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Statics::NewProp_DesiredProduct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Statics::NewProp_InteractionSphere,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_FarmSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPC_Statics::ClassParams = {
	&ANPC::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANPC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANPC()
{
	if (!Z_Registration_Info_UClass_ANPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPC.OuterSingleton, Z_Construct_UClass_ANPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANPC.OuterSingleton;
}
template<> FARMSIM_API UClass* StaticClass<ANPC>()
{
	return ANPC::StaticClass();
}
void ANPC::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_DesiredProduct(TEXT("DesiredProduct"));
	const bool bIsValid = true
		&& Name_DesiredProduct == ClassReps[(int32)ENetFields_Private::DesiredProduct].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANPC"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC);
ANPC::~ANPC() {}
// End Class ANPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Source_FarmSim_NPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANPC, ANPC::StaticClass, TEXT("ANPC"), &Z_Registration_Info_UClass_ANPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPC), 2692491103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Source_FarmSim_NPC_h_3244161429(TEXT("/Script/FarmSim"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Source_FarmSim_NPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Source_FarmSim_NPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
