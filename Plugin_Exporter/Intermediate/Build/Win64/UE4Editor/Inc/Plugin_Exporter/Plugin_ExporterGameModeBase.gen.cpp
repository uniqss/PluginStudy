// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plugin_Exporter/Plugin_ExporterGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlugin_ExporterGameModeBase() {}
// Cross Module References
	PLUGIN_EXPORTER_API UClass* Z_Construct_UClass_APlugin_ExporterGameModeBase_NoRegister();
	PLUGIN_EXPORTER_API UClass* Z_Construct_UClass_APlugin_ExporterGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Plugin_Exporter();
// End Cross Module References
	void APlugin_ExporterGameModeBase::StaticRegisterNativesAPlugin_ExporterGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APlugin_ExporterGameModeBase_NoRegister()
	{
		return APlugin_ExporterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APlugin_ExporterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlugin_ExporterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Plugin_Exporter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlugin_ExporterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Plugin_ExporterGameModeBase.h" },
		{ "ModuleRelativePath", "Plugin_ExporterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlugin_ExporterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlugin_ExporterGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlugin_ExporterGameModeBase_Statics::ClassParams = {
		&APlugin_ExporterGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APlugin_ExporterGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlugin_ExporterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlugin_ExporterGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlugin_ExporterGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlugin_ExporterGameModeBase, 924325963);
	template<> PLUGIN_EXPORTER_API UClass* StaticClass<APlugin_ExporterGameModeBase>()
	{
		return APlugin_ExporterGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlugin_ExporterGameModeBase(Z_Construct_UClass_APlugin_ExporterGameModeBase, &APlugin_ExporterGameModeBase::StaticClass, TEXT("/Script/Plugin_Exporter"), TEXT("APlugin_ExporterGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlugin_ExporterGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
