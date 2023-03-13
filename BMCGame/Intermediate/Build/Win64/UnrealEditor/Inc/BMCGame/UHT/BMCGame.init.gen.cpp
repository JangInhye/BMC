// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBMCGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BMCGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BMCGame()
	{
		if (!Z_Registration_Info_UPackage__Script_BMCGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BMCGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x04408986,
				0xFB1632E6,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BMCGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BMCGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BMCGame(Z_Construct_UPackage__Script_BMCGame, TEXT("/Script/BMCGame"), Z_Registration_Info_UPackage__Script_BMCGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x04408986, 0xFB1632E6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
