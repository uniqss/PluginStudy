// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plugin_Maker/Plugin_MakerGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlugin_MakerGameModeBase() {}
// Cross Module References
	PLUGIN_MAKER_API UClass* Z_Construct_UClass_APlugin_MakerGameModeBase_NoRegister();
	PLUGIN_MAKER_API UClass* Z_Construct_UClass_APlugin_MakerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Plugin_Maker();
// End Cross Module References
	void APlugin_MakerGameModeBase::StaticRegisterNativesAPlugin_MakerGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APlugin_MakerGameModeBase_NoRegister()
	{
		return APlugin_MakerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APlugin_MakerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlugin_MakerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Plugin_Maker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlugin_MakerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Plugin_MakerGameModeBase.h" },
		{ "ModuleRelativePath", "Plugin_MakerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlugin_MakerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlugin_MakerGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlugin_MakerGameModeBase_Statics::ClassParams = {
		&APlugin_MakerGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APlugin_MakerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlugin_MakerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlugin_MakerGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlugin_MakerGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlugin_MakerGameModeBase, 1627133202);
	template<> PLUGIN_MAKER_API UClass* StaticClass<APlugin_MakerGameModeBase>()
	{
		return APlugin_MakerGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlugin_MakerGameModeBase(Z_Construct_UClass_APlugin_MakerGameModeBase, &APlugin_MakerGameModeBase::StaticClass, TEXT("/Script/Plugin_Maker"), TEXT("APlugin_MakerGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlugin_MakerGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
