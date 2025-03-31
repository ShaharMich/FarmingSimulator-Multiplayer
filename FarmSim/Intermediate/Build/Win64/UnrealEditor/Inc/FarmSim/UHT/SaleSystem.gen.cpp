// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FarmSim/SaleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaleSystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
FARMSIM_API UClass* Z_Construct_UClass_ASaleSystem();
FARMSIM_API UClass* Z_Construct_UClass_ASaleSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_FarmSim();
// End Cross Module References

// Begin Class ASaleSystem Function AddProduct
struct Z_Construct_UFunction_ASaleSystem_AddProduct_Statics
{
	struct SaleSystem_eventAddProduct_Parms
	{
		FString ProductName;
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Storage" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASaleSystem_AddProduct_Statics::NewProp_ProductName = { "ProductName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaleSystem_eventAddProduct_Parms, ProductName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASaleSystem_AddProduct_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaleSystem_eventAddProduct_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASaleSystem_AddProduct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASaleSystem_AddProduct_Statics::NewProp_ProductName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASaleSystem_AddProduct_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASaleSystem_AddProduct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASaleSystem_AddProduct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASaleSystem, nullptr, "AddProduct", nullptr, nullptr, Z_Construct_UFunction_ASaleSystem_AddProduct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASaleSystem_AddProduct_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASaleSystem_AddProduct_Statics::SaleSystem_eventAddProduct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASaleSystem_AddProduct_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASaleSystem_AddProduct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASaleSystem_AddProduct_Statics::SaleSystem_eventAddProduct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASaleSystem_AddProduct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASaleSystem_AddProduct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASaleSystem::execAddProduct)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ProductName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddProduct(Z_Param_ProductName,Z_Param_Amount);
	P_NATIVE_END;
}
// End Class ASaleSystem Function AddProduct

// Begin Class ASaleSystem Function GetProductPrice
struct Z_Construct_UFunction_ASaleSystem_GetProductPrice_Statics
{
	struct SaleSystem_eventGetProductPrice_Parms
	{
		FName ProductName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Budget" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProductName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASaleSystem_GetProductPrice_Statics::NewProp_ProductName = { "ProductName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaleSystem_eventGetProductPrice_Parms, ProductName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASaleSystem_GetProductPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaleSystem_eventGetProductPrice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASaleSystem_GetProductPrice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASaleSystem_GetProductPrice_Statics::NewProp_ProductName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASaleSystem_GetProductPrice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASaleSystem_GetProductPrice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASaleSystem_GetProductPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASaleSystem, nullptr, "GetProductPrice", nullptr, nullptr, Z_Construct_UFunction_ASaleSystem_GetProductPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASaleSystem_GetProductPrice_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASaleSystem_GetProductPrice_Statics::SaleSystem_eventGetProductPrice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASaleSystem_GetProductPrice_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASaleSystem_GetProductPrice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASaleSystem_GetProductPrice_Statics::SaleSystem_eventGetProductPrice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASaleSystem_GetProductPrice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASaleSystem_GetProductPrice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASaleSystem::execGetProductPrice)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ProductName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetProductPrice(Z_Param_ProductName);
	P_NATIVE_END;
}
// End Class ASaleSystem Function GetProductPrice

// Begin Class ASaleSystem Function GetTotalProducts
struct Z_Construct_UFunction_ASaleSystem_GetTotalProducts_Statics
{
	struct SaleSystem_eventGetTotalProducts_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Storage" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASaleSystem_GetTotalProducts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaleSystem_eventGetTotalProducts_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASaleSystem_GetTotalProducts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASaleSystem_GetTotalProducts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASaleSystem_GetTotalProducts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASaleSystem_GetTotalProducts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASaleSystem, nullptr, "GetTotalProducts", nullptr, nullptr, Z_Construct_UFunction_ASaleSystem_GetTotalProducts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASaleSystem_GetTotalProducts_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASaleSystem_GetTotalProducts_Statics::SaleSystem_eventGetTotalProducts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASaleSystem_GetTotalProducts_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASaleSystem_GetTotalProducts_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASaleSystem_GetTotalProducts_Statics::SaleSystem_eventGetTotalProducts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASaleSystem_GetTotalProducts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASaleSystem_GetTotalProducts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASaleSystem::execGetTotalProducts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTotalProducts();
	P_NATIVE_END;
}
// End Class ASaleSystem Function GetTotalProducts

// Begin Class ASaleSystem Function IsAvailable
struct Z_Construct_UFunction_ASaleSystem_IsAvailable_Statics
{
	struct SaleSystem_eventIsAvailable_Parms
	{
		FName ProductName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Storage" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProductName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASaleSystem_IsAvailable_Statics::NewProp_ProductName = { "ProductName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaleSystem_eventIsAvailable_Parms, ProductName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASaleSystem_IsAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaleSystem_eventIsAvailable_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASaleSystem_IsAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASaleSystem_IsAvailable_Statics::NewProp_ProductName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASaleSystem_IsAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASaleSystem_IsAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASaleSystem_IsAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASaleSystem, nullptr, "IsAvailable", nullptr, nullptr, Z_Construct_UFunction_ASaleSystem_IsAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASaleSystem_IsAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASaleSystem_IsAvailable_Statics::SaleSystem_eventIsAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASaleSystem_IsAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASaleSystem_IsAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASaleSystem_IsAvailable_Statics::SaleSystem_eventIsAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASaleSystem_IsAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASaleSystem_IsAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASaleSystem::execIsAvailable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ProductName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->IsAvailable(Z_Param_ProductName);
	P_NATIVE_END;
}
// End Class ASaleSystem Function IsAvailable

// Begin Class ASaleSystem Function RemoveProduct
struct Z_Construct_UFunction_ASaleSystem_RemoveProduct_Statics
{
	struct SaleSystem_eventRemoveProduct_Parms
	{
		FString ProductName;
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Storage" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASaleSystem_RemoveProduct_Statics::NewProp_ProductName = { "ProductName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaleSystem_eventRemoveProduct_Parms, ProductName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASaleSystem_RemoveProduct_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaleSystem_eventRemoveProduct_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASaleSystem_RemoveProduct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASaleSystem_RemoveProduct_Statics::NewProp_ProductName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASaleSystem_RemoveProduct_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASaleSystem_RemoveProduct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASaleSystem_RemoveProduct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASaleSystem, nullptr, "RemoveProduct", nullptr, nullptr, Z_Construct_UFunction_ASaleSystem_RemoveProduct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASaleSystem_RemoveProduct_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASaleSystem_RemoveProduct_Statics::SaleSystem_eventRemoveProduct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASaleSystem_RemoveProduct_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASaleSystem_RemoveProduct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASaleSystem_RemoveProduct_Statics::SaleSystem_eventRemoveProduct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASaleSystem_RemoveProduct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASaleSystem_RemoveProduct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASaleSystem::execRemoveProduct)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ProductName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveProduct(Z_Param_ProductName,Z_Param_Amount);
	P_NATIVE_END;
}
// End Class ASaleSystem Function RemoveProduct

// Begin Class ASaleSystem
void ASaleSystem::StaticRegisterNativesASaleSystem()
{
	UClass* Class = ASaleSystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddProduct", &ASaleSystem::execAddProduct },
		{ "GetProductPrice", &ASaleSystem::execGetProductPrice },
		{ "GetTotalProducts", &ASaleSystem::execGetTotalProducts },
		{ "IsAvailable", &ASaleSystem::execIsAvailable },
		{ "RemoveProduct", &ASaleSystem::execRemoveProduct },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASaleSystem);
UClass* Z_Construct_UClass_ASaleSystem_NoRegister()
{
	return ASaleSystem::StaticClass();
}
struct Z_Construct_UClass_ASaleSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SaleSystem.h" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheatCount_MetaData[] = {
		{ "Category", "Storage" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlourCount_MetaData[] = {
		{ "Category", "Storage" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SesameCount_MetaData[] = {
		{ "Category", "Storage" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TahiniCount_MetaData[] = {
		{ "Category", "Storage" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WheatCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FlourCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SesameCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TahiniCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASaleSystem_AddProduct, "AddProduct" }, // 37577117
		{ &Z_Construct_UFunction_ASaleSystem_GetProductPrice, "GetProductPrice" }, // 2652541271
		{ &Z_Construct_UFunction_ASaleSystem_GetTotalProducts, "GetTotalProducts" }, // 2980117218
		{ &Z_Construct_UFunction_ASaleSystem_IsAvailable, "IsAvailable" }, // 1336582898
		{ &Z_Construct_UFunction_ASaleSystem_RemoveProduct, "RemoveProduct" }, // 3377634589
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASaleSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASaleSystem_Statics::NewProp_WheatCount = { "WheatCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASaleSystem, WheatCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheatCount_MetaData), NewProp_WheatCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASaleSystem_Statics::NewProp_FlourCount = { "FlourCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASaleSystem, FlourCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlourCount_MetaData), NewProp_FlourCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASaleSystem_Statics::NewProp_SesameCount = { "SesameCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASaleSystem, SesameCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SesameCount_MetaData), NewProp_SesameCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASaleSystem_Statics::NewProp_TahiniCount = { "TahiniCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASaleSystem, TahiniCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TahiniCount_MetaData), NewProp_TahiniCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASaleSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaleSystem_Statics::NewProp_WheatCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaleSystem_Statics::NewProp_FlourCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaleSystem_Statics::NewProp_SesameCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaleSystem_Statics::NewProp_TahiniCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASaleSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASaleSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FarmSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASaleSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASaleSystem_Statics::ClassParams = {
	&ASaleSystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASaleSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASaleSystem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASaleSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ASaleSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASaleSystem()
{
	if (!Z_Registration_Info_UClass_ASaleSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASaleSystem.OuterSingleton, Z_Construct_UClass_ASaleSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASaleSystem.OuterSingleton;
}
template<> FARMSIM_API UClass* StaticClass<ASaleSystem>()
{
	return ASaleSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASaleSystem);
ASaleSystem::~ASaleSystem() {}
// End Class ASaleSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Source_FarmSim_SaleSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASaleSystem, ASaleSystem::StaticClass, TEXT("ASaleSystem"), &Z_Registration_Info_UClass_ASaleSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASaleSystem), 2327365115U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Source_FarmSim_SaleSystem_h_3471650993(TEXT("/Script/FarmSim"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Source_FarmSim_SaleSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Source_FarmSim_SaleSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
