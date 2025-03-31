// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarvestGround.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FARMSIM_HarvestGround_generated_h
#error "HarvestGround.generated.h already included, missing '#pragma once' in HarvestGround.h"
#endif
#define FARMSIM_HarvestGround_generated_h

#define FID_Unreal_Engine_FarmSim_Source_FarmSim_HarvestGround_h_18_DELEGATE \
FARMSIM_API void FHarvestGroundOnPlanted_DelegateWrapper(const FMulticastScriptDelegate& HarvestGroundOnPlanted);


#define FID_Unreal_Engine_FarmSim_Source_FarmSim_HarvestGround_h_19_DELEGATE \
FARMSIM_API void FHarvestGroundOnWatered_DelegateWrapper(const FMulticastScriptDelegate& HarvestGroundOnWatered);


#define FID_Unreal_Engine_FarmSim_Source_FarmSim_HarvestGround_h_20_DELEGATE \
FARMSIM_API void FHarvestGroundOnRipped_DelegateWrapper(const FMulticastScriptDelegate& HarvestGroundOnRipped);


#define FID_Unreal_Engine_FarmSim_Source_FarmSim_HarvestGround_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execServer_ActivateHarvesting); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execActivateHarvesting); \
	DECLARE_FUNCTION(execHandleHarvesting);


#define FID_Unreal_Engine_FarmSim_Source_FarmSim_HarvestGround_h_26_CALLBACK_WRAPPERS
#define FID_Unreal_Engine_FarmSim_Source_FarmSim_HarvestGround_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHarvestGround(); \
	friend struct Z_Construct_UClass_AHarvestGround_Statics; \
public: \
	DECLARE_CLASS(AHarvestGround, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FarmSim"), NO_API) \
	DECLARE_SERIALIZER(AHarvestGround) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentState=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Engine_FarmSim_Source_FarmSim_HarvestGround_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHarvestGround(AHarvestGround&&); \
	AHarvestGround(const AHarvestGround&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHarvestGround); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHarvestGround); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHarvestGround) \
	NO_API virtual ~AHarvestGround();


#define FID_Unreal_Engine_FarmSim_Source_FarmSim_HarvestGround_h_23_PROLOG
#define FID_Unreal_Engine_FarmSim_Source_FarmSim_HarvestGround_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_FarmSim_Source_FarmSim_HarvestGround_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Source_FarmSim_HarvestGround_h_26_CALLBACK_WRAPPERS \
	FID_Unreal_Engine_FarmSim_Source_FarmSim_HarvestGround_h_26_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Source_FarmSim_HarvestGround_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARMSIM_API UClass* StaticClass<class AHarvestGround>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_FarmSim_Source_FarmSim_HarvestGround_h


#define FOREACH_ENUM_EHARVESTSTATE(op) \
	op(EHarvestState::Planted) \
	op(EHarvestState::Watered) \
	op(EHarvestState::Ripped) 

enum class EHarvestState : uint8;
template<> struct TIsUEnumClass<EHarvestState> { enum { Value = true }; };
template<> FARMSIM_API UEnum* StaticEnum<EHarvestState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
