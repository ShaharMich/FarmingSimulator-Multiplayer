// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaleSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FARMSIM_SaleSystem_generated_h
#error "SaleSystem.generated.h already included, missing '#pragma once' in SaleSystem.h"
#endif
#define FARMSIM_SaleSystem_generated_h

#define FID_Unreal_Engine_FarmSim_Source_FarmSim_SaleSystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetProductPrice); \
	DECLARE_FUNCTION(execIsAvailable); \
	DECLARE_FUNCTION(execGetTotalProducts); \
	DECLARE_FUNCTION(execRemoveProduct); \
	DECLARE_FUNCTION(execAddProduct);


#define FID_Unreal_Engine_FarmSim_Source_FarmSim_SaleSystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASaleSystem(); \
	friend struct Z_Construct_UClass_ASaleSystem_Statics; \
public: \
	DECLARE_CLASS(ASaleSystem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FarmSim"), NO_API) \
	DECLARE_SERIALIZER(ASaleSystem)


#define FID_Unreal_Engine_FarmSim_Source_FarmSim_SaleSystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASaleSystem(ASaleSystem&&); \
	ASaleSystem(const ASaleSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASaleSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASaleSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASaleSystem) \
	NO_API virtual ~ASaleSystem();


#define FID_Unreal_Engine_FarmSim_Source_FarmSim_SaleSystem_h_12_PROLOG
#define FID_Unreal_Engine_FarmSim_Source_FarmSim_SaleSystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_FarmSim_Source_FarmSim_SaleSystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Source_FarmSim_SaleSystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Source_FarmSim_SaleSystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARMSIM_API UClass* StaticClass<class ASaleSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_FarmSim_Source_FarmSim_SaleSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
