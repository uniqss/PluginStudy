// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULevel;
class UObject;
class UActorComponent;
#ifdef UNIQSUTILITIES_UniqsBlueprintUtilities_generated_h
#error "UniqsBlueprintUtilities.generated.h already included, missing '#pragma once' in UniqsBlueprintUtilities.h"
#endif
#define UNIQSUTILITIES_UniqsBlueprintUtilities_generated_h

#define Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_SPARSE_DATA
#define Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActorLevel); \
	DECLARE_FUNCTION(execGetUniqueActorOfClass); \
	DECLARE_FUNCTION(execGetActorByIDNameFromAnArrayOfActors); \
	DECLARE_FUNCTION(execGetActorByIDNameAndClass); \
	DECLARE_FUNCTION(execGetAllActorsWithComponent);


#define Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActorLevel); \
	DECLARE_FUNCTION(execGetUniqueActorOfClass); \
	DECLARE_FUNCTION(execGetActorByIDNameFromAnArrayOfActors); \
	DECLARE_FUNCTION(execGetActorByIDNameAndClass); \
	DECLARE_FUNCTION(execGetAllActorsWithComponent);


#define Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUniqsBlueprintUtilities(); \
	friend struct Z_Construct_UClass_UUniqsBlueprintUtilities_Statics; \
public: \
	DECLARE_CLASS(UUniqsBlueprintUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UniqsUtilities"), NO_API) \
	DECLARE_SERIALIZER(UUniqsBlueprintUtilities)


#define Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUUniqsBlueprintUtilities(); \
	friend struct Z_Construct_UClass_UUniqsBlueprintUtilities_Statics; \
public: \
	DECLARE_CLASS(UUniqsBlueprintUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UniqsUtilities"), NO_API) \
	DECLARE_SERIALIZER(UUniqsBlueprintUtilities)


#define Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUniqsBlueprintUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUniqsBlueprintUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniqsBlueprintUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniqsBlueprintUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniqsBlueprintUtilities(UUniqsBlueprintUtilities&&); \
	NO_API UUniqsBlueprintUtilities(const UUniqsBlueprintUtilities&); \
public:


#define Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUniqsBlueprintUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniqsBlueprintUtilities(UUniqsBlueprintUtilities&&); \
	NO_API UUniqsBlueprintUtilities(const UUniqsBlueprintUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniqsBlueprintUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniqsBlueprintUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUniqsBlueprintUtilities)


#define Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_PRIVATE_PROPERTY_OFFSET
#define Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_12_PROLOG
#define Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_PRIVATE_PROPERTY_OFFSET \
	Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_SPARSE_DATA \
	Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_RPC_WRAPPERS \
	Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_INCLASS \
	Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_PRIVATE_PROPERTY_OFFSET \
	Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_SPARSE_DATA \
	Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_INCLASS_NO_PURE_DECLS \
	Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNIQSUTILITIES_API UClass* StaticClass<class UUniqsBlueprintUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Plugin_Maker_Source_UniqsUtilities_Public_UniqsBlueprintUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
