// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FarmSimCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABudget;
#ifdef FARMSIM_FarmSimCharacter_generated_h
#error "FarmSimCharacter.generated.h already included, missing '#pragma once' in FarmSimCharacter.h"
#endif
#define FARMSIM_FarmSimCharacter_generated_h

#define FID_Unreal_Engine_FarmSim_Source_FarmSim_FarmSimCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_RequestIncreaseBudget_Validate(float , ABudget* ); \
	virtual void Server_RequestIncreaseBudget_Implementation(float Amount, ABudget* Budget); \
	virtual bool Server_RequestDecreaseBudget_Validate(float , ABudget* ); \
	virtual void Server_RequestDecreaseBudget_Implementation(float Amount, ABudget* Budget); \
	DECLARE_FUNCTION(execServer_RequestIncreaseBudget); \
	DECLARE_FUNCTION(execServer_RequestDecreaseBudget);


#define FID_Unreal_Engine_FarmSim_Source_FarmSim_FarmSimCharacter_h_32_CALLBACK_WRAPPERS
#define FID_Unreal_Engine_FarmSim_Source_FarmSim_FarmSimCharacter_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFarmSimCharacter(); \
	friend struct Z_Construct_UClass_AFarmSimCharacter_Statics; \
public: \
	DECLARE_CLASS(AFarmSimCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FarmSim"), NO_API) \
	DECLARE_SERIALIZER(AFarmSimCharacter)


#define FID_Unreal_Engine_FarmSim_Source_FarmSim_FarmSimCharacter_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFarmSimCharacter(AFarmSimCharacter&&); \
	AFarmSimCharacter(const AFarmSimCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFarmSimCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFarmSimCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFarmSimCharacter) \
	NO_API virtual ~AFarmSimCharacter();


#define FID_Unreal_Engine_FarmSim_Source_FarmSim_FarmSimCharacter_h_29_PROLOG
#define FID_Unreal_Engine_FarmSim_Source_FarmSim_FarmSimCharacter_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_FarmSim_Source_FarmSim_FarmSimCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Source_FarmSim_FarmSimCharacter_h_32_CALLBACK_WRAPPERS \
	FID_Unreal_Engine_FarmSim_Source_FarmSim_FarmSimCharacter_h_32_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Source_FarmSim_FarmSimCharacter_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARMSIM_API UClass* StaticClass<class AFarmSimCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_FarmSim_Source_FarmSim_FarmSimCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
