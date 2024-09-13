// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterBase/Public/BTTask_CalculateDistance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_CalculateDistance() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
MONSTERBASE_API UClass* Z_Construct_UClass_UBTTask_CalculateDistance();
MONSTERBASE_API UClass* Z_Construct_UClass_UBTTask_CalculateDistance_NoRegister();
UPackage* Z_Construct_UPackage__Script_MonsterBase();
// End Cross Module References

// Begin Class UBTTask_CalculateDistance
void UBTTask_CalculateDistance::StaticRegisterNativesUBTTask_CalculateDistance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_CalculateDistance);
UClass* Z_Construct_UClass_UBTTask_CalculateDistance_NoRegister()
{
	return UBTTask_CalculateDistance::StaticClass();
}
struct Z_Construct_UClass_UBTTask_CalculateDistance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_CalculateDistance.h" },
		{ "ModuleRelativePath", "Public/BTTask_CalculateDistance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_CalculateDistance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_CalculateDistance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_MonsterBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_CalculateDistance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_CalculateDistance_Statics::ClassParams = {
	&UBTTask_CalculateDistance::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_CalculateDistance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_CalculateDistance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_CalculateDistance()
{
	if (!Z_Registration_Info_UClass_UBTTask_CalculateDistance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_CalculateDistance.OuterSingleton, Z_Construct_UClass_UBTTask_CalculateDistance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_CalculateDistance.OuterSingleton;
}
template<> MONSTERBASE_API UClass* StaticClass<UBTTask_CalculateDistance>()
{
	return UBTTask_CalculateDistance::StaticClass();
}
UBTTask_CalculateDistance::UBTTask_CalculateDistance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_CalculateDistance);
UBTTask_CalculateDistance::~UBTTask_CalculateDistance() {}
// End Class UBTTask_CalculateDistance

// Begin Registration
struct Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_BTTask_CalculateDistance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_CalculateDistance, UBTTask_CalculateDistance::StaticClass, TEXT("UBTTask_CalculateDistance"), &Z_Registration_Info_UClass_UBTTask_CalculateDistance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_CalculateDistance), 4188254163U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_BTTask_CalculateDistance_h_1056951607(TEXT("/Script/MonsterBase"),
	Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_BTTask_CalculateDistance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_BTTask_CalculateDistance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
