// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MonsterBaseCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MONSTERBASE_MonsterBaseCharacter_generated_h
#error "MonsterBaseCharacter.generated.h already included, missing '#pragma once' in MonsterBaseCharacter.h"
#endif
#define MONSTERBASE_MonsterBaseCharacter_generated_h

#define FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterBaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonsterBaseCharacter(); \
	friend struct Z_Construct_UClass_AMonsterBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(AMonsterBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MonsterBase"), NO_API) \
	DECLARE_SERIALIZER(AMonsterBaseCharacter)


#define FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterBaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMonsterBaseCharacter(AMonsterBaseCharacter&&); \
	AMonsterBaseCharacter(const AMonsterBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterBaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonsterBaseCharacter) \
	NO_API virtual ~AMonsterBaseCharacter();


#define FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterBaseCharacter_h_9_PROLOG
#define FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterBaseCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterBaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterBaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONSTERBASE_API UClass* StaticClass<class AMonsterBaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterBaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
