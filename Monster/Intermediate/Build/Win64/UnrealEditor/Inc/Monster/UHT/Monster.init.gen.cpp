// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonster_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Monster;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Monster()
	{
		if (!Z_Registration_Info_UPackage__Script_Monster.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Monster",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x23976E26,
				0xFCCD8CAB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Monster.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Monster.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Monster(Z_Construct_UPackage__Script_Monster, TEXT("/Script/Monster"), Z_Registration_Info_UPackage__Script_Monster, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x23976E26, 0xFCCD8CAB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
