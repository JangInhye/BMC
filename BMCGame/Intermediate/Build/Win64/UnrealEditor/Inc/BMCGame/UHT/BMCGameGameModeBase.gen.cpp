// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BMCGame/BMCGameGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBMCGameGameModeBase() {}
// Cross Module References
	BMCGAME_API UClass* Z_Construct_UClass_ABMCGameGameModeBase();
	BMCGAME_API UClass* Z_Construct_UClass_ABMCGameGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BMCGame();
// End Cross Module References
	void ABMCGameGameModeBase::StaticRegisterNativesABMCGameGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABMCGameGameModeBase);
	UClass* Z_Construct_UClass_ABMCGameGameModeBase_NoRegister()
	{
		return ABMCGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABMCGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABMCGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BMCGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABMCGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BMCGameGameModeBase.h" },
		{ "ModuleRelativePath", "BMCGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABMCGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABMCGameGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABMCGameGameModeBase_Statics::ClassParams = {
		&ABMCGameGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABMCGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABMCGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABMCGameGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ABMCGameGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABMCGameGameModeBase.OuterSingleton, Z_Construct_UClass_ABMCGameGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABMCGameGameModeBase.OuterSingleton;
	}
	template<> BMCGAME_API UClass* StaticClass<ABMCGameGameModeBase>()
	{
		return ABMCGameGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABMCGameGameModeBase);
	ABMCGameGameModeBase::~ABMCGameGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Projects_BMC_BMCGame_Source_BMCGame_BMCGameGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_BMC_BMCGame_Source_BMCGame_BMCGameGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABMCGameGameModeBase, ABMCGameGameModeBase::StaticClass, TEXT("ABMCGameGameModeBase"), &Z_Registration_Info_UClass_ABMCGameGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABMCGameGameModeBase), 1805930953U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_BMC_BMCGame_Source_BMCGame_BMCGameGameModeBase_h_2009134435(TEXT("/Script/BMCGame"),
		Z_CompiledInDeferFile_FID_Projects_BMC_BMCGame_Source_BMCGame_BMCGameGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_BMC_BMCGame_Source_BMCGame_BMCGameGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
