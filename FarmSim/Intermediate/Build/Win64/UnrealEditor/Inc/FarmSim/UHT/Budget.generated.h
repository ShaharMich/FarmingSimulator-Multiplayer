// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Budget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FARMSIM_Budget_generated_h
#error "Budget.generated.h already included, missing '#pragma once' in Budget.h"
#endif
#define FARMSIM_Budget_generated_h

#define FID_Unreal_Engine_FarmSim_Source_FarmSim_Budget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execServer_IncreaseBudget); \
	DECLARE_FUNCTION(execServer_DecreaseBudget); \
	DECLARE_FUNCTION(execGetBudget); \
	DECLARE_FUNCTION(execOnRep_CurrentBudget);


#define FID_Unreal_Engine_FarmSim_Source_FarmSim_Budget_h_12_CALLBACK_WRAPPERS
#define FID_Unreal_Engine_FarmSim_Source_FarmSim_Budget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABudget(); \
	friend struct Z_Construct_UClass_ABudget_Statics; \
public: \
	DECLARE_CLASS(ABudget, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FarmSim"), NO_API) \
	DECLARE_SERIALIZER(ABudget) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentBudget=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentBudget	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Engine_FarmSim_Source_FarmSim_Budget_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABudget(ABudget&&); \
	ABudget(const ABudget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABudget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABudget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABudget) \
	NO_API virtual ~ABudget();


#define FID_Unreal_Engine_FarmSim_Source_FarmSim_Budget_h_9_PROLOG
#define FID_Unreal_Engine_FarmSim_Source_FarmSim_Budget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_FarmSim_Source_FarmSim_Budget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Source_FarmSim_Budget_h_12_CALLBACK_WRAPPERS \
	FID_Unreal_Engine_FarmSim_Source_FarmSim_Budget_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Source_FarmSim_Budget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARMSIM_API UClass* StaticClass<class ABudget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_FarmSim_Source_FarmSim_Budget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
