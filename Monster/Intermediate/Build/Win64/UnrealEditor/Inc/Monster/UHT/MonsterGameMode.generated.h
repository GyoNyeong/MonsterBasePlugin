// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MonsterGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MONSTER_MonsterGameMode_generated_h
#error "MonsterGameMode.generated.h already included, missing '#pragma once' in MonsterGameMode.h"
#endif
#define MONSTER_MonsterGameMode_generated_h

#define FID_game_Monster_Source_Monster_MonsterGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonsterGameMode(); \
	friend struct Z_Construct_UClass_AMonsterGameMode_Statics; \
public: \
	DECLARE_CLASS(AMonsterGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Monster"), MONSTER_API) \
	DECLARE_SERIALIZER(AMonsterGameMode)


#define FID_game_Monster_Source_Monster_MonsterGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMonsterGameMode(AMonsterGameMode&&); \
	AMonsterGameMode(const AMonsterGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MONSTER_API, AMonsterGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonsterGameMode) \
	MONSTER_API virtual ~AMonsterGameMode();


#define FID_game_Monster_Source_Monster_MonsterGameMode_h_9_PROLOG
#define FID_game_Monster_Source_Monster_MonsterGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_Monster_Source_Monster_MonsterGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_game_Monster_Source_Monster_MonsterGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONSTER_API UClass* StaticClass<class AMonsterGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_game_Monster_Source_Monster_MonsterGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
