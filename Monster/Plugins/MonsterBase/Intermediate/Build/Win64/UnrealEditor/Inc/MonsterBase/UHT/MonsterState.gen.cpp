// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterBase/Public/MonsterState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UUserDefinedEnum();
MONSTERBASE_API UClass* Z_Construct_UClass_UMonsterState();
MONSTERBASE_API UClass* Z_Construct_UClass_UMonsterState_NoRegister();
MONSTERBASE_API UEnum* Z_Construct_UEnum_MonsterBase_EMonsterState();
UPackage* Z_Construct_UPackage__Script_MonsterBase();
// End Cross Module References

// Begin Class UMonsterState
void UMonsterState::StaticRegisterNativesUMonsterState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMonsterState);
UClass* Z_Construct_UClass_UMonsterState_NoRegister()
{
	return UMonsterState::StaticClass();
}
struct Z_Construct_UClass_UMonsterState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MonsterState.h" },
		{ "ModuleRelativePath", "Public/MonsterState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMonsterState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMonsterState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserDefinedEnum,
	(UObject* (*)())Z_Construct_UPackage__Script_MonsterBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMonsterState_Statics::ClassParams = {
	&UMonsterState::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterState_Statics::Class_MetaDataParams), Z_Construct_UClass_UMonsterState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMonsterState()
{
	if (!Z_Registration_Info_UClass_UMonsterState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMonsterState.OuterSingleton, Z_Construct_UClass_UMonsterState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMonsterState.OuterSingleton;
}
template<> MONSTERBASE_API UClass* StaticClass<UMonsterState>()
{
	return UMonsterState::StaticClass();
}
UMonsterState::UMonsterState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMonsterState);
UMonsterState::~UMonsterState() {}
// End Class UMonsterState

// Begin Enum EMonsterState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMonsterState;
static UEnum* EMonsterState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMonsterState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMonsterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MonsterBase_EMonsterState, (UObject*)Z_Construct_UPackage__Script_MonsterBase(), TEXT("EMonsterState"));
	}
	return Z_Registration_Info_UEnum_EMonsterState.OuterSingleton;
}
template<> MONSTERBASE_API UEnum* StaticEnum<EMonsterState>()
{
	return EMonsterState_StaticEnum();
}
struct Z_Construct_UEnum_MonsterBase_EMonsterState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.DisplayName", "Attack" },
		{ "Attack.Name", "EMonsterState::Attack" },
		{ "Chase.DisplayName", "Chase" },
		{ "Chase.Name", "EMonsterState::Chase" },
		{ "Die.DisplayName", "Die" },
		{ "Die.Name", "EMonsterState::Die" },
		{ "ModuleRelativePath", "Public/MonsterState.h" },
		{ "Stand.DisplayName", "Stand" },
		{ "Stand.Name", "EMonsterState::Stand" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMonsterState::Stand", (int64)EMonsterState::Stand },
		{ "EMonsterState::Chase", (int64)EMonsterState::Chase },
		{ "EMonsterState::Attack", (int64)EMonsterState::Attack },
		{ "EMonsterState::Die", (int64)EMonsterState::Die },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MonsterBase_EMonsterState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MonsterBase,
	nullptr,
	"EMonsterState",
	"EMonsterState",
	Z_Construct_UEnum_MonsterBase_EMonsterState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MonsterBase_EMonsterState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MonsterBase_EMonsterState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MonsterBase_EMonsterState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MonsterBase_EMonsterState()
{
	if (!Z_Registration_Info_UEnum_EMonsterState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMonsterState.InnerSingleton, Z_Construct_UEnum_MonsterBase_EMonsterState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMonsterState.InnerSingleton;
}
// End Enum EMonsterState

// Begin Registration
struct Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMonsterState_StaticEnum, TEXT("EMonsterState"), &Z_Registration_Info_UEnum_EMonsterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1194746373U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMonsterState, UMonsterState::StaticClass, TEXT("UMonsterState"), &Z_Registration_Info_UClass_UMonsterState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMonsterState), 1602697568U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterState_h_2941645018(TEXT("/Script/MonsterBase"),
	Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterState_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_Monster_Plugins_MonsterBase_Source_MonsterBase_Public_MonsterState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
