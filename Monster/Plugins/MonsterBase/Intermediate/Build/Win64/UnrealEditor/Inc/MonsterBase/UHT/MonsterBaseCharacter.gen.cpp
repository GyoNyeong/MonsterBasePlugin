// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterBase/Public/MonsterBaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterBaseCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
MONSTERBASE_API UClass* Z_Construct_UClass_AMonsterBaseCharacter();
MONSTERBASE_API UClass* Z_Construct_UClass_AMonsterBaseCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_MonsterBase();
// End Cross Module References

// Begin Class AMonsterBaseCharacter
void AMonsterBaseCharacter::StaticRegisterNativesAMonsterBaseCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMonsterBaseCharacter);
UClass* Z_Construct_UClass_AMonsterBaseCharacter_NoRegister()
{
	return AMonsterBaseCharacter::StaticClass();
}
struct Z_Construct_UClass_AMonsterBaseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MonsterBaseCharacter.h" },
		{ "ModuleRelativePath", "Public/MonsterBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MonsterLife_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/MonsterBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnTime_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/MonsterBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/MonsterBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MonsterLife;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterBaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMonsterBaseCharacter_Statics::NewProp_MonsterLife = { "MonsterLife", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterBaseCharacter, MonsterLife), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MonsterLife_MetaData), NewProp_MonsterLife_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterBaseCharacter_Statics::NewProp_RespawnTime = { "RespawnTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterBaseCharacter, RespawnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnTime_MetaData), NewProp_RespawnTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterBaseCharacter_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterBaseCharacter, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonsterBaseCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterBaseCharacter_Statics::NewProp_MonsterLife,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterBaseCharacter_Statics::NewProp_RespawnTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterBaseCharacter_Statics::NewProp_AttackMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterBaseCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMonsterBaseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MonsterBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterBaseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonsterBaseCharacter_Statics::ClassParams = {
	&AMonsterBaseCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMonsterBaseCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterBaseCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterBaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMonsterBaseCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMonsterBaseCharacter()
{
	if (!Z_Registration_Info_UClass_AMonsterBaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMonsterBaseCharacter.OuterSingleton, Z_Construct_UClass_AMonsterBaseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMonsterBaseCharacter.OuterSingleton;
}
template<> MONSTERBASE_API UClass* StaticClass<AMonsterBaseCharacter>()
{
	return AMonsterBaseCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterBaseCharacter);
AMonsterBaseCharacter::~AMonsterBaseCharacter() {}
// End Class AMonsterBaseCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterBaseCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMonsterBaseCharacter, AMonsterBaseCharacter::StaticClass, TEXT("AMonsterBaseCharacter"), &Z_Registration_Info_UClass_AMonsterBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonsterBaseCharacter), 2020241268U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterBaseCharacter_h_3736517148(TEXT("/Script/MonsterBase"),
	Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterBaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterBaseCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
