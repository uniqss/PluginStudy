// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniqsUtilities/Public/UniqsBlueprintUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniqsBlueprintUtilities() {}
// Cross Module References
	UNIQSUTILITIES_API UClass* Z_Construct_UClass_UUniqsBlueprintUtilities_NoRegister();
	UNIQSUTILITIES_API UClass* Z_Construct_UClass_UUniqsBlueprintUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UniqsUtilities();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUniqsBlueprintUtilities::execGetActorLevel)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevel**)Z_Param__Result=UUniqsBlueprintUtilities::GetActorLevel(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniqsBlueprintUtilities::execGetUniqueActorOfClass)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UUniqsBlueprintUtilities::GetUniqueActorOfClass(Z_Param_WorldContextObject,Z_Param_ActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniqsBlueprintUtilities::execGetActorByIDNameFromAnArrayOfActors)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_IDName);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ArrayOfActors);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUniqsBlueprintUtilities::GetActorByIDNameFromAnArrayOfActors(Z_Param_IDName,Z_Param_Out_ArrayOfActors,Z_Param_Out_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniqsBlueprintUtilities::execGetActorByIDNameAndClass)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_IDName);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UUniqsBlueprintUtilities::GetActorByIDNameAndClass(Z_Param_WorldContextObject,Z_Param_IDName,Z_Param_ActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniqsBlueprintUtilities::execGetAllActorsWithComponent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_Component);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_GET_TARRAY_REF(UActorComponent*,Z_Param_Out_OutActorComponents);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUniqsBlueprintUtilities::GetAllActorsWithComponent(Z_Param_WorldContextObject,Z_Param_Component,Z_Param_Out_OutActors,Z_Param_Out_OutActorComponents);
		P_NATIVE_END;
	}
	void UUniqsBlueprintUtilities::StaticRegisterNativesUUniqsBlueprintUtilities()
	{
		UClass* Class = UUniqsBlueprintUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorByIDNameAndClass", &UUniqsBlueprintUtilities::execGetActorByIDNameAndClass },
			{ "GetActorByIDNameFromAnArrayOfActors", &UUniqsBlueprintUtilities::execGetActorByIDNameFromAnArrayOfActors },
			{ "GetActorLevel", &UUniqsBlueprintUtilities::execGetActorLevel },
			{ "GetAllActorsWithComponent", &UUniqsBlueprintUtilities::execGetAllActorsWithComponent },
			{ "GetUniqueActorOfClass", &UUniqsBlueprintUtilities::execGetUniqueActorOfClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics
	{
		struct UniqsBlueprintUtilities_eventGetActorByIDNameAndClass_Parms
		{
			const UObject* WorldContextObject;
			FName IDName;
			const TSubclassOf<AActor>  ActorClass;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IDName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IDName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniqsBlueprintUtilities_eventGetActorByIDNameAndClass_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::NewProp_ActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniqsBlueprintUtilities_eventGetActorByIDNameAndClass_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::NewProp_IDName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::NewProp_IDName = { "IDName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniqsBlueprintUtilities_eventGetActorByIDNameAndClass_Parms, IDName), METADATA_PARAMS(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::NewProp_IDName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::NewProp_IDName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniqsBlueprintUtilities_eventGetActorByIDNameAndClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::NewProp_IDName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uniqs|Utilites::BlueprintLibrary" },
		{ "Comment", "/**\n\x09 *\x09Get an actor by IDName and Class in the world(hover the mouse in the world out liner to see the actor ID Name).\n\x09 *\x09This is a slow operation, use with caution e.g. do not use every frame.\n\x09 *\x09@param IDName\x09\x09\x09ID Name to find. Must be specified or the result will be nullptr.\n\x09 *\x09@param ActorClass\x09\x09""Class Filter of the actor, determines the OutputType.\n\x09 *\x09@return\x09\x09\x09\x09\x09The Actor found.\n\x09 */" },
		{ "DeterminesOutputType", "ActorClass" },
		{ "DisplayName", "Uniqs::Get Actor By ID Name and Class" },
		{ "ModuleRelativePath", "Public/UniqsBlueprintUtilities.h" },
		{ "ToolTip", "Get an actor by IDName and Class in the world(hover the mouse in the world out liner to see the actor ID Name).\nThis is a slow operation, use with caution e.g. do not use every frame.\n@param IDName                   ID Name to find. Must be specified or the result will be nullptr.\n@param ActorClass               Class Filter of the actor, determines the OutputType.\n@return                                 The Actor found." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniqsBlueprintUtilities, nullptr, "GetActorByIDNameAndClass", nullptr, nullptr, sizeof(UniqsBlueprintUtilities_eventGetActorByIDNameAndClass_Parms), Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics
	{
		struct UniqsBlueprintUtilities_eventGetActorByIDNameFromAnArrayOfActors_Parms
		{
			FName IDName;
			TArray<AActor*> ArrayOfActors;
			AActor* Actor;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayOfActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayOfActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrayOfActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IDName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IDName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniqsBlueprintUtilities_eventGetActorByIDNameFromAnArrayOfActors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniqsBlueprintUtilities_eventGetActorByIDNameFromAnArrayOfActors_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::NewProp_ArrayOfActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::NewProp_ArrayOfActors = { "ArrayOfActors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniqsBlueprintUtilities_eventGetActorByIDNameFromAnArrayOfActors_Parms, ArrayOfActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::NewProp_ArrayOfActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::NewProp_ArrayOfActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::NewProp_ArrayOfActors_Inner = { "ArrayOfActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::NewProp_IDName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::NewProp_IDName = { "IDName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniqsBlueprintUtilities_eventGetActorByIDNameFromAnArrayOfActors_Parms, IDName), METADATA_PARAMS(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::NewProp_IDName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::NewProp_IDName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::NewProp_ArrayOfActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::NewProp_ArrayOfActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::NewProp_IDName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uniqs|Utilites::BlueprintLibrary" },
		{ "Comment", "/**\n\x09 *\x09Get an actor by IDName from a given Array of Actors.\n\x09 *\x09@param IDName\x09\x09\x09ID Name to find. Must be specified or the result will be nullptr.\n\x09 *\x09@param ArrayOfActors\x09The Array of Actors in which the search will be performed.\n\x09 *\x09@param Actor\x09\x09\x09The Actor found.\n\x09 *\x09@return\x09\x09\x09\x09\x09The index of the array where the Actor was found(it's -1 if no actor was found).\n\x09 */" },
		{ "DisplayName", "Uniqs::Get Actor By ID Name from Array of Actors" },
		{ "ModuleRelativePath", "Public/UniqsBlueprintUtilities.h" },
		{ "ToolTip", "Get an actor by IDName from a given Array of Actors.\n@param IDName                   ID Name to find. Must be specified or the result will be nullptr.\n@param ArrayOfActors    The Array of Actors in which the search will be performed.\n@param Actor                    The Actor found.\n@return                                 The index of the array where the Actor was found(it's -1 if no actor was found)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniqsBlueprintUtilities, nullptr, "GetActorByIDNameFromAnArrayOfActors", nullptr, nullptr, sizeof(UniqsBlueprintUtilities_eventGetActorByIDNameFromAnArrayOfActors_Parms), Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorLevel_Statics
	{
		struct UniqsBlueprintUtilities_eventGetActorLevel_Parms
		{
			AActor* Actor;
			ULevel* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniqsBlueprintUtilities_eventGetActorLevel_Parms, ReturnValue), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorLevel_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniqsBlueprintUtilities_eventGetActorLevel_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorLevel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorLevel_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uniqs|Utilites::BlueprintLibrary" },
		{ "Comment", "/**\n\x09 *\x09Get the Level reference where the actor is loaded(supports level streaming).\n\x09 *\x09@param Actor\x09\x09The actor reference.\n\x09 *\x09@return\x09\x09\x09\x09The Level reference where the actor belongs(supports level streaming).\n\x09 */" },
		{ "DisplayName", "Uniqs::Get Level Owner From Actor" },
		{ "ModuleRelativePath", "Public/UniqsBlueprintUtilities.h" },
		{ "ToolTip", "Get the Level reference where the actor is loaded(supports level streaming).\n@param Actor            The actor reference.\n@return                         The Level reference where the actor belongs(supports level streaming)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniqsBlueprintUtilities, nullptr, "GetActorLevel", nullptr, nullptr, sizeof(UniqsBlueprintUtilities_eventGetActorLevel_Parms), Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics
	{
		struct UniqsBlueprintUtilities_eventGetAllActorsWithComponent_Parms
		{
			const UObject* WorldContextObject;
			const TSubclassOf<UActorComponent>  Component;
			TArray<AActor*> OutActors;
			TArray<UActorComponent*> OutActorComponents;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutActorComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActorComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActorComponents_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_OutActorComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_OutActorComponents = { "OutActorComponents", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniqsBlueprintUtilities_eventGetAllActorsWithComponent_Parms, OutActorComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_OutActorComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_OutActorComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_OutActorComponents_Inner = { "OutActorComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniqsBlueprintUtilities_eventGetAllActorsWithComponent_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_Component_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniqsBlueprintUtilities_eventGetAllActorsWithComponent_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniqsBlueprintUtilities_eventGetAllActorsWithComponent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_OutActorComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_OutActorComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_OutActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uniqs|Utilites::BlueprintLibrary" },
		{ "Comment", "/**\n\x09*\x09""Find all Actors in the world with the specified component.\n\x09*\x09This is a slow operation, use with caution e.g. do not use every frame.\n\x09*\x09@param Component\x09\x09\x09""Component to find. Must be specified or result array will be empty.\n\x09*\x09@param OutActorss\x09\x09\x09Output array of Actors that have specified component.\n\x09*\x09@param OutActorComponents\x09Output array of Actor Components that belongs to the array of actors.\n\x09*/" },
		{ "DeterminesOutputType", "Component" },
		{ "DisplayName", "Uniqs::Get All Actors With Component" },
		{ "DynamicOutputParam", "OutActorComponents" },
		{ "ModuleRelativePath", "Public/UniqsBlueprintUtilities.h" },
		{ "ToolTip", "Find all Actors in the world with the specified component.\nThis is a slow operation, use with caution e.g. do not use every frame.\n@param Component                        Component to find. Must be specified or result array will be empty.\n@param OutActorss                       Output array of Actors that have specified component.\n@param OutActorComponents       Output array of Actor Components that belongs to the array of actors." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniqsBlueprintUtilities, nullptr, "GetAllActorsWithComponent", nullptr, nullptr, sizeof(UniqsBlueprintUtilities_eventGetAllActorsWithComponent_Parms), Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics
	{
		struct UniqsBlueprintUtilities_eventGetUniqueActorOfClass_Parms
		{
			const UObject* WorldContextObject;
			const TSubclassOf<AActor>  ActorClass;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniqsBlueprintUtilities_eventGetUniqueActorOfClass_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::NewProp_ActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniqsBlueprintUtilities_eventGetUniqueActorOfClass_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniqsBlueprintUtilities_eventGetUniqueActorOfClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uniqs|Utilites::BlueprintLibrary" },
		{ "Comment", "/**\n\x09 *\x09Get an actor of this class, only if there's only one actor of this class in the world.\n\x09 *\x09@param ActorClass\x09\x09\x09""Class of the actor to return.\n\x09 *\x09@return\x09\x09\x09\x09\x09\x09The reference of the actor, can be nullptr if there are none or two+ actors in the world.\n\x09 */" },
		{ "DisplayName", "Uniqs::Get Unique Actor of this class in the world" },
		{ "ModuleRelativePath", "Public/UniqsBlueprintUtilities.h" },
		{ "ToolTip", "Get an actor of this class, only if there's only one actor of this class in the world.\n@param ActorClass                       Class of the actor to return.\n@return                                         The reference of the actor, can be nullptr if there are none or two+ actors in the world." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniqsBlueprintUtilities, nullptr, "GetUniqueActorOfClass", nullptr, nullptr, sizeof(UniqsBlueprintUtilities_eventGetUniqueActorOfClass_Parms), Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUniqsBlueprintUtilities_NoRegister()
	{
		return UUniqsBlueprintUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UUniqsBlueprintUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUniqsBlueprintUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UniqsUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUniqsBlueprintUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameAndClass, "GetActorByIDNameAndClass" }, // 3153483367
		{ &Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorByIDNameFromAnArrayOfActors, "GetActorByIDNameFromAnArrayOfActors" }, // 2129202155
		{ &Z_Construct_UFunction_UUniqsBlueprintUtilities_GetActorLevel, "GetActorLevel" }, // 3603261111
		{ &Z_Construct_UFunction_UUniqsBlueprintUtilities_GetAllActorsWithComponent, "GetAllActorsWithComponent" }, // 965564026
		{ &Z_Construct_UFunction_UUniqsBlueprintUtilities_GetUniqueActorOfClass, "GetUniqueActorOfClass" }, // 612689425
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniqsBlueprintUtilities_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UniqsBlueprintUtilities.h" },
		{ "ModuleRelativePath", "Public/UniqsBlueprintUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUniqsBlueprintUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUniqsBlueprintUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUniqsBlueprintUtilities_Statics::ClassParams = {
		&UUniqsBlueprintUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUniqsBlueprintUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUniqsBlueprintUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUniqsBlueprintUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUniqsBlueprintUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUniqsBlueprintUtilities, 2395584182);
	template<> UNIQSUTILITIES_API UClass* StaticClass<UUniqsBlueprintUtilities>()
	{
		return UUniqsBlueprintUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUniqsBlueprintUtilities(Z_Construct_UClass_UUniqsBlueprintUtilities, &UUniqsBlueprintUtilities::StaticClass, TEXT("/Script/UniqsUtilities"), TEXT("UUniqsBlueprintUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUniqsBlueprintUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
