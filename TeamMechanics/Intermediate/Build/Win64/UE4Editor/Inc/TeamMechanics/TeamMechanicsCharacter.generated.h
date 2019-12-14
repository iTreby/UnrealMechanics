// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAMMECHANICS_TeamMechanicsCharacter_generated_h
#error "TeamMechanicsCharacter.generated.h already included, missing '#pragma once' in TeamMechanicsCharacter.h"
#endif
#define TEAMMECHANICS_TeamMechanicsCharacter_generated_h

#define TeamMechanics_Source_TeamMechanics_TeamMechanicsCharacter_h_14_RPC_WRAPPERS
#define TeamMechanics_Source_TeamMechanics_TeamMechanicsCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define TeamMechanics_Source_TeamMechanics_TeamMechanicsCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeamMechanicsCharacter(); \
	friend struct Z_Construct_UClass_ATeamMechanicsCharacter_Statics; \
public: \
	DECLARE_CLASS(ATeamMechanicsCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TeamMechanics"), NO_API) \
	DECLARE_SERIALIZER(ATeamMechanicsCharacter)


#define TeamMechanics_Source_TeamMechanics_TeamMechanicsCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATeamMechanicsCharacter(); \
	friend struct Z_Construct_UClass_ATeamMechanicsCharacter_Statics; \
public: \
	DECLARE_CLASS(ATeamMechanicsCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TeamMechanics"), NO_API) \
	DECLARE_SERIALIZER(ATeamMechanicsCharacter)


#define TeamMechanics_Source_TeamMechanics_TeamMechanicsCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATeamMechanicsCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATeamMechanicsCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeamMechanicsCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeamMechanicsCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeamMechanicsCharacter(ATeamMechanicsCharacter&&); \
	NO_API ATeamMechanicsCharacter(const ATeamMechanicsCharacter&); \
public:


#define TeamMechanics_Source_TeamMechanics_TeamMechanicsCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeamMechanicsCharacter(ATeamMechanicsCharacter&&); \
	NO_API ATeamMechanicsCharacter(const ATeamMechanicsCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeamMechanicsCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeamMechanicsCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATeamMechanicsCharacter)


#define TeamMechanics_Source_TeamMechanics_TeamMechanicsCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ATeamMechanicsCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ATeamMechanicsCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ATeamMechanicsCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ATeamMechanicsCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ATeamMechanicsCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ATeamMechanicsCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ATeamMechanicsCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ATeamMechanicsCharacter, L_MotionController); }


#define TeamMechanics_Source_TeamMechanics_TeamMechanicsCharacter_h_11_PROLOG
#define TeamMechanics_Source_TeamMechanics_TeamMechanicsCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TeamMechanics_Source_TeamMechanics_TeamMechanicsCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TeamMechanics_Source_TeamMechanics_TeamMechanicsCharacter_h_14_RPC_WRAPPERS \
	TeamMechanics_Source_TeamMechanics_TeamMechanicsCharacter_h_14_INCLASS \
	TeamMechanics_Source_TeamMechanics_TeamMechanicsCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TeamMechanics_Source_TeamMechanics_TeamMechanicsCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TeamMechanics_Source_TeamMechanics_TeamMechanicsCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TeamMechanics_Source_TeamMechanics_TeamMechanicsCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TeamMechanics_Source_TeamMechanics_TeamMechanicsCharacter_h_14_INCLASS_NO_PURE_DECLS \
	TeamMechanics_Source_TeamMechanics_TeamMechanicsCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAMMECHANICS_API UClass* StaticClass<class ATeamMechanicsCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TeamMechanics_Source_TeamMechanics_TeamMechanicsCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
