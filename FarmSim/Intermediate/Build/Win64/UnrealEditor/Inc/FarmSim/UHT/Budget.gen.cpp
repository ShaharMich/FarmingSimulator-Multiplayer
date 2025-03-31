// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FarmSim/Budget.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBudget() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
FARMSIM_API UClass* Z_Construct_UClass_ABudget();
FARMSIM_API UClass* Z_Construct_UClass_ABudget_NoRegister();
UPackage* Z_Construct_UPackage__Script_FarmSim();
// End Cross Module References

// Begin Class ABudget Function GetBudget
struct Z_Construct_UFunction_ABudget_GetBudget_Statics
{
	struct Budget_eventGetBudget_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Budget" },
		{ "ModuleRelativePath", "Budget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABudget_GetBudget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Budget_eventGetBudget_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABudget_GetBudget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABudget_GetBudget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABudget_GetBudget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABudget_GetBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABudget, nullptr, "GetBudget", nullptr, nullptr, Z_Construct_UFunction_ABudget_GetBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABudget_GetBudget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABudget_GetBudget_Statics::Budget_eventGetBudget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABudget_GetBudget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABudget_GetBudget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABudget_GetBudget_Statics::Budget_eventGetBudget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABudget_GetBudget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABudget_GetBudget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABudget::execGetBudget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBudget();
	P_NATIVE_END;
}
// End Class ABudget Function GetBudget

// Begin Class ABudget Function OnRep_CurrentBudget
struct Z_Construct_UFunction_ABudget_OnRep_CurrentBudget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Budget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABudget_OnRep_CurrentBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABudget, nullptr, "OnRep_CurrentBudget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABudget_OnRep_CurrentBudget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABudget_OnRep_CurrentBudget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABudget_OnRep_CurrentBudget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABudget_OnRep_CurrentBudget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABudget::execOnRep_CurrentBudget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentBudget();
	P_NATIVE_END;
}
// End Class ABudget Function OnRep_CurrentBudget

// Begin Class ABudget Function Server_DecreaseBudget
struct Budget_eventServer_DecreaseBudget_Parms
{
	float Amount;
};
static const FName NAME_ABudget_Server_DecreaseBudget = FName(TEXT("Server_DecreaseBudget"));
void ABudget::Server_DecreaseBudget(float Amount)
{
	Budget_eventServer_DecreaseBudget_Parms Parms;
	Parms.Amount=Amount;
	UFunction* Func = FindFunctionChecked(NAME_ABudget_Server_DecreaseBudget);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABudget_Server_DecreaseBudget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Budget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABudget_Server_DecreaseBudget_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Budget_eventServer_DecreaseBudget_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABudget_Server_DecreaseBudget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABudget_Server_DecreaseBudget_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABudget_Server_DecreaseBudget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABudget_Server_DecreaseBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABudget, nullptr, "Server_DecreaseBudget", nullptr, nullptr, Z_Construct_UFunction_ABudget_Server_DecreaseBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABudget_Server_DecreaseBudget_Statics::PropPointers), sizeof(Budget_eventServer_DecreaseBudget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABudget_Server_DecreaseBudget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABudget_Server_DecreaseBudget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Budget_eventServer_DecreaseBudget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABudget_Server_DecreaseBudget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABudget_Server_DecreaseBudget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABudget::execServer_DecreaseBudget)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_DecreaseBudget_Validate(Z_Param_Amount))
	{
		RPC_ValidateFailed(TEXT("Server_DecreaseBudget_Validate"));
		return;
	}
	P_THIS->Server_DecreaseBudget_Implementation(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class ABudget Function Server_DecreaseBudget

// Begin Class ABudget Function Server_IncreaseBudget
struct Budget_eventServer_IncreaseBudget_Parms
{
	float Amount;
};
static const FName NAME_ABudget_Server_IncreaseBudget = FName(TEXT("Server_IncreaseBudget"));
void ABudget::Server_IncreaseBudget(float Amount)
{
	Budget_eventServer_IncreaseBudget_Parms Parms;
	Parms.Amount=Amount;
	UFunction* Func = FindFunctionChecked(NAME_ABudget_Server_IncreaseBudget);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABudget_Server_IncreaseBudget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Budget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABudget_Server_IncreaseBudget_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Budget_eventServer_IncreaseBudget_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABudget_Server_IncreaseBudget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABudget_Server_IncreaseBudget_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABudget_Server_IncreaseBudget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABudget_Server_IncreaseBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABudget, nullptr, "Server_IncreaseBudget", nullptr, nullptr, Z_Construct_UFunction_ABudget_Server_IncreaseBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABudget_Server_IncreaseBudget_Statics::PropPointers), sizeof(Budget_eventServer_IncreaseBudget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABudget_Server_IncreaseBudget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABudget_Server_IncreaseBudget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Budget_eventServer_IncreaseBudget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABudget_Server_IncreaseBudget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABudget_Server_IncreaseBudget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABudget::execServer_IncreaseBudget)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_IncreaseBudget_Validate(Z_Param_Amount))
	{
		RPC_ValidateFailed(TEXT("Server_IncreaseBudget_Validate"));
		return;
	}
	P_THIS->Server_IncreaseBudget_Implementation(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class ABudget Function Server_IncreaseBudget

// Begin Class ABudget
void ABudget::StaticRegisterNativesABudget()
{
	UClass* Class = ABudget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBudget", &ABudget::execGetBudget },
		{ "OnRep_CurrentBudget", &ABudget::execOnRep_CurrentBudget },
		{ "Server_DecreaseBudget", &ABudget::execServer_DecreaseBudget },
		{ "Server_IncreaseBudget", &ABudget::execServer_IncreaseBudget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABudget);
UClass* Z_Construct_UClass_ABudget_NoRegister()
{
	return ABudget::StaticClass();
}
struct Z_Construct_UClass_ABudget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Budget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Budget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBudget_MetaData[] = {
		{ "Category", "Budget" },
		{ "ModuleRelativePath", "Budget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentBudget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABudget_GetBudget, "GetBudget" }, // 1071004356
		{ &Z_Construct_UFunction_ABudget_OnRep_CurrentBudget, "OnRep_CurrentBudget" }, // 3716497392
		{ &Z_Construct_UFunction_ABudget_Server_DecreaseBudget, "Server_DecreaseBudget" }, // 340869000
		{ &Z_Construct_UFunction_ABudget_Server_IncreaseBudget, "Server_IncreaseBudget" }, // 1822197175
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABudget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABudget_Statics::NewProp_CurrentBudget = { "CurrentBudget", "OnRep_CurrentBudget", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABudget, CurrentBudget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBudget_MetaData), NewProp_CurrentBudget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABudget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABudget_Statics::NewProp_CurrentBudget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABudget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABudget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FarmSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABudget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABudget_Statics::ClassParams = {
	&ABudget::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABudget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABudget_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABudget_Statics::Class_MetaDataParams), Z_Construct_UClass_ABudget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABudget()
{
	if (!Z_Registration_Info_UClass_ABudget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABudget.OuterSingleton, Z_Construct_UClass_ABudget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABudget.OuterSingleton;
}
template<> FARMSIM_API UClass* StaticClass<ABudget>()
{
	return ABudget::StaticClass();
}
void ABudget::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentBudget(TEXT("CurrentBudget"));
	const bool bIsValid = true
		&& Name_CurrentBudget == ClassReps[(int32)ENetFields_Private::CurrentBudget].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABudget"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABudget);
ABudget::~ABudget() {}
// End Class ABudget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Source_FarmSim_Budget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABudget, ABudget::StaticClass, TEXT("ABudget"), &Z_Registration_Info_UClass_ABudget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABudget), 1671991902U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Source_FarmSim_Budget_h_3008405822(TEXT("/Script/FarmSim"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Source_FarmSim_Budget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Source_FarmSim_Budget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
