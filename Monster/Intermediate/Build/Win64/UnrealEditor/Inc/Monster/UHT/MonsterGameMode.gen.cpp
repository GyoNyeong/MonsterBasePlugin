// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Monster/MonsterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MONSTER_API UClass* Z_Construct_UClass_AMonsterGameMode();
MONSTER_API UClass* Z_Construct_UClass_AMonsterGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Monster();
// End Cross Module References

// Begin Class AMonsterGameMode
void AMonsterGameMode::StaticRegisterNativesAMonsterGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMonsterGameMode);
UClass* Z_Construct_UClass_AMonsterGameMode_NoRegister()
{
	return AMonsterGameMode::StaticClass();
}
struct Z_Construct_UClass_AMonsterGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MonsterGameMode.h" },
		{ "ModuleRelativePath", "MonsterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMonsterGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Monster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonsterGameMode_Statics::ClassParams = {
	&AMonsterGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMonsterGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMonsterGameMode()
{
	if (!Z_Registration_Info_UClass_AMonsterGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMonsterGameMode.OuterSingleton, Z_Construct_UClass_AMonsterGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMonsterGameMode.OuterSingleton;
}
template<> MONSTER_API UClass* StaticClass<AMonsterGameMode>()
{
	return AMonsterGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterGameMode);
AMonsterGameMode::~AMonsterGameMode() {}
// End Class AMonsterGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_game_Monster_Source_Monster_MonsterGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMonsterGameMode, AMonsterGameMode::StaticClass, TEXT("AMonsterGameMode"), &Z_Registration_Info_UClass_AMonsterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonsterGameMode), 270152990U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_Monster_Source_Monster_MonsterGameMode_h_188091461(TEXT("/Script/Monster"),
	Z_CompiledInDeferFile_FID_game_Monster_Source_Monster_MonsterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_Monster_Source_Monster_MonsterGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
