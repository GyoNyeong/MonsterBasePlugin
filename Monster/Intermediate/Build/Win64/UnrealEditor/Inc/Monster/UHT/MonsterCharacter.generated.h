// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MonsterCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MONSTER_MonsterCharacter_generated_h
#error "MonsterCharacter.generated.h already included, missing '#pragma once' in MonsterCharacter.h"
#endif
#define MONSTER_MonsterCharacter_generated_h

#define FID_game_Monster_Source_Monster_MonsterCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonsterCharacter(); \
	friend struct Z_Construct_UClass_AMonsterCharacter_Statics; \
public: \
	DECLARE_CLASS(AMonsterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Monster"), NO_API) \
	DECLARE_SERIALIZER(AMonsterCharacter)


#define FID_game_Monster_Source_Monster_MonsterCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMonsterCharacter(AMonsterCharacter&&); \
	AMonsterCharacter(const AMonsterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonsterCharacter) \
	NO_API virtual ~AMonsterCharacter();


#define FID_game_Monster_Source_Monster_MonsterCharacter_h_18_PROLOG
#define FID_game_Monster_Source_Monster_MonsterCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_Monster_Source_Monster_MonsterCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_game_Monster_Source_Monster_MonsterCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONSTER_API UClass* StaticClass<class AMonsterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_game_Monster_Source_Monster_MonsterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
