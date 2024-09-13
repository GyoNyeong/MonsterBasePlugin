// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MonsterState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MONSTERBASE_MonsterState_generated_h
#error "MonsterState.generated.h already included, missing '#pragma once' in MonsterState.h"
#endif
#define MONSTERBASE_MonsterState_generated_h

#define FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMonsterState(); \
	friend struct Z_Construct_UClass_UMonsterState_Statics; \
public: \
	DECLARE_CLASS(UMonsterState, UUserDefinedEnum, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MonsterBase"), NO_API) \
	DECLARE_SERIALIZER(UMonsterState)


#define FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMonsterState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMonsterState(UMonsterState&&); \
	UMonsterState(const UMonsterState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMonsterState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMonsterState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMonsterState) \
	NO_API virtual ~UMonsterState();


#define FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterState_h_12_PROLOG
#define FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterState_h_15_INCLASS_NO_PURE_DECLS \
	FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONSTERBASE_API UClass* StaticClass<class UMonsterState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterState_h


#define FOREACH_ENUM_EMONSTERSTATE(op) \
	op(EMonsterState::Stand) \
	op(EMonsterState::Chase) \
	op(EMonsterState::Attack) \
	op(EMonsterState::Die) 

enum class EMonsterState;
template<> struct TIsUEnumClass<EMonsterState> { enum { Value = true }; };
template<> MONSTERBASE_API UEnum* StaticEnum<EMonsterState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
