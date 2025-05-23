// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FarmSim/FarmSimGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFarmSimGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FARMSIM_API UClass* Z_Construct_UClass_AFarmSimGameMode();
FARMSIM_API UClass* Z_Construct_UClass_AFarmSimGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FarmSim();
// End Cross Module References

// Begin Class AFarmSimGameMode
void AFarmSimGameMode::StaticRegisterNativesAFarmSimGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFarmSimGameMode);
UClass* Z_Construct_UClass_AFarmSimGameMode_NoRegister()
{
	return AFarmSimGameMode::StaticClass();
}
struct Z_Construct_UClass_AFarmSimGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FarmSimGameMode.h" },
		{ "ModuleRelativePath", "FarmSimGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFarmSimGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFarmSimGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FarmSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmSimGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFarmSimGameMode_Statics::ClassParams = {
	&AFarmSimGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmSimGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFarmSimGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFarmSimGameMode()
{
	if (!Z_Registration_Info_UClass_AFarmSimGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFarmSimGameMode.OuterSingleton, Z_Construct_UClass_AFarmSimGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFarmSimGameMode.OuterSingleton;
}
template<> FARMSIM_API UClass* StaticClass<AFarmSimGameMode>()
{
	return AFarmSimGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFarmSimGameMode);
AFarmSimGameMode::~AFarmSimGameMode() {}
// End Class AFarmSimGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Source_FarmSim_FarmSimGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFarmSimGameMode, AFarmSimGameMode::StaticClass, TEXT("AFarmSimGameMode"), &Z_Registration_Info_UClass_AFarmSimGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFarmSimGameMode), 708725953U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Source_FarmSim_FarmSimGameMode_h_2078183501(TEXT("/Script/FarmSim"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Source_FarmSim_FarmSimGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Source_FarmSim_FarmSimGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
