// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BTTask_Attack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MONSTERBASE_BTTask_Attack_generated_h
#error "BTTask_Attack.generated.h already included, missing '#pragma once' in BTTask_Attack.h"
#endif
#define MONSTERBASE_BTTask_Attack_generated_h

#define FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_BTTask_Attack_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTask_Attack(); \
	friend struct Z_Construct_UClass_UBTTask_Attack_Statics; \
public: \
	DECLARE_CLASS(UBTTask_Attack, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MonsterBase"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_Attack)


#define FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_BTTask_Attack_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTask_Attack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTTask_Attack(UBTTask_Attack&&); \
	UBTTask_Attack(const UBTTask_Attack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_Attack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_Attack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_Attack) \
	NO_API virtual ~UBTTask_Attack();


#define FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_BTTask_Attack_h_12_PROLOG
#define FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_BTTask_Attack_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_BTTask_Attack_h_15_INCLASS_NO_PURE_DECLS \
	FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_BTTask_Attack_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONSTERBASE_API UClass* StaticClass<class UBTTask_Attack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_BTTask_Attack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
