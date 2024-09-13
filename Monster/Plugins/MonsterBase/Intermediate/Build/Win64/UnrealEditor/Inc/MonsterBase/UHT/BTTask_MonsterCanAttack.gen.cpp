// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterBase/Public/BTTask_MonsterCanAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_MonsterCanAttack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
MONSTERBASE_API UClass* Z_Construct_UClass_UBTTask_MonsterCanAttack();
MONSTERBASE_API UClass* Z_Construct_UClass_UBTTask_MonsterCanAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_MonsterBase();
// End Cross Module References

// Begin Class UBTTask_MonsterCanAttack
void UBTTask_MonsterCanAttack::StaticRegisterNativesUBTTask_MonsterCanAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_MonsterCanAttack);
UClass* Z_Construct_UClass_UBTTask_MonsterCanAttack_NoRegister()
{
	return UBTTask_MonsterCanAttack::StaticClass();
}
struct Z_Construct_UClass_UBTTask_MonsterCanAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_MonsterCanAttack.h" },
		{ "ModuleRelativePath", "Public/BTTask_MonsterCanAttack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_MonsterCanAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_MonsterCanAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_MonsterBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MonsterCanAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_MonsterCanAttack_Statics::ClassParams = {
	&UBTTask_MonsterCanAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MonsterCanAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_MonsterCanAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_MonsterCanAttack()
{
	if (!Z_Registration_Info_UClass_UBTTask_MonsterCanAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_MonsterCanAttack.OuterSingleton, Z_Construct_UClass_UBTTask_MonsterCanAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_MonsterCanAttack.OuterSingleton;
}
template<> MONSTERBASE_API UClass* StaticClass<UBTTask_MonsterCanAttack>()
{
	return UBTTask_MonsterCanAttack::StaticClass();
}
UBTTask_MonsterCanAttack::UBTTask_MonsterCanAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_MonsterCanAttack);
UBTTask_MonsterCanAttack::~UBTTask_MonsterCanAttack() {}
// End Class UBTTask_MonsterCanAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_BTTask_MonsterCanAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_MonsterCanAttack, UBTTask_MonsterCanAttack::StaticClass, TEXT("UBTTask_MonsterCanAttack"), &Z_Registration_Info_UClass_UBTTask_MonsterCanAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_MonsterCanAttack), 2828026552U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_BTTask_MonsterCanAttack_h_1865141769(TEXT("/Script/MonsterBase"),
	Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_BTTask_MonsterCanAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_BTTask_MonsterCanAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
