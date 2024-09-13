// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterBase/Public/MonsterAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
MONSTERBASE_API UClass* Z_Construct_UClass_AMonsterAIController();
MONSTERBASE_API UClass* Z_Construct_UClass_AMonsterAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_MonsterBase();
// End Cross Module References

// Begin Class AMonsterAIController
void AMonsterAIController::StaticRegisterNativesAMonsterAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMonsterAIController);
UClass* Z_Construct_UClass_AMonsterAIController_NoRegister()
{
	return AMonsterAIController::StaticClass();
}
struct Z_Construct_UClass_AMonsterAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MonsterAIController.h" },
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerception_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTMonster_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerception;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTMonster;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AIPerception = { "AIPerception", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAIController, AIPerception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerception_MetaData), NewProp_AIPerception_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_BTMonster = { "BTMonster", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAIController, BTMonster), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTMonster_MetaData), NewProp_BTMonster_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonsterAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AIPerception,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_BTMonster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMonsterAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_MonsterBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonsterAIController_Statics::ClassParams = {
	&AMonsterAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMonsterAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMonsterAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMonsterAIController()
{
	if (!Z_Registration_Info_UClass_AMonsterAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMonsterAIController.OuterSingleton, Z_Construct_UClass_AMonsterAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMonsterAIController.OuterSingleton;
}
template<> MONSTERBASE_API UClass* StaticClass<AMonsterAIController>()
{
	return AMonsterAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterAIController);
AMonsterAIController::~AMonsterAIController() {}
// End Class AMonsterAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMonsterAIController, AMonsterAIController::StaticClass, TEXT("AMonsterAIController"), &Z_Registration_Info_UClass_AMonsterAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonsterAIController), 3426413802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterAIController_h_3577341999(TEXT("/Script/MonsterBase"),
	Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
