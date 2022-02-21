// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FAssetData;
struct FS_ElgAssetMetaData;
enum class EBPEditorOutputValidBranch : uint8;
class UObject; struct FS_ElgAssetMetaData;
class UPackage;
struct FDateTime;
 
#ifdef ELGEDITORSCRIPTING_ElgEditorBP_Assets_generated_h
#error "ElgEditorBP_Assets.generated.h already included, missing '#pragma once' in ElgEditorBP_Assets.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorBP_Assets_generated_h

#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgAssetMetaData>();

#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_SPARSE_DATA
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDiffAssetWithExternalAsset); \
	DECLARE_FUNCTION(execDiffAssetPath); \
	DECLARE_FUNCTION(execDiffAssetData); \
	DECLARE_FUNCTION(execDiffAssets); \
	DECLARE_FUNCTION(execNewAssetPathToDiskPath); \
	DECLARE_FUNCTION(execAssetPathsToDiskPaths); \
	DECLARE_FUNCTION(execAssetPathToDiskPath); \
	DECLARE_FUNCTION(execGetSelectedPaths); \
	DECLARE_FUNCTION(execHasAssetRefs); \
	DECLARE_FUNCTION(execGetAssetDependenciesByObject); \
	DECLARE_FUNCTION(execGetAssetDependenciesByPath); \
	DECLARE_FUNCTION(execGetAssetDependencies); \
	DECLARE_FUNCTION(execGetAssetReferencersByObject); \
	DECLARE_FUNCTION(execGetAssetReferencersByPath); \
	DECLARE_FUNCTION(execGetAssetReferencers); \
	DECLARE_FUNCTION(execGetAssetObjectMetaDataBranch); \
	DECLARE_FUNCTION(execGetAssetObjectMetaData); \
	DECLARE_FUNCTION(execGetMetaDataKeyBranch); \
	DECLARE_FUNCTION(execGetAssetObjectsWithMetaDataKey); \
	DECLARE_FUNCTION(execGetAssetObjectsMetaData); \
	DECLARE_FUNCTION(execGetAssetObjectsByPath); \
	DECLARE_FUNCTION(execGetAssetObjects); \
	DECLARE_FUNCTION(execGetAssetObjectByPath); \
	DECLARE_FUNCTION(execGetPackage); \
	DECLARE_FUNCTION(execIsAssetUWorldType); \
	DECLARE_FUNCTION(execGetAssetPath); \
	DECLARE_FUNCTION(execGetAssetName); \
	DECLARE_FUNCTION(execGetAssetDatasByPath); \
	DECLARE_FUNCTION(execGetAssetPathFromObject); \
	DECLARE_FUNCTION(execGetAssetDataFromObject); \
	DECLARE_FUNCTION(execGetAssetDataFromPath); \
	DECLARE_FUNCTION(execGetAssetMetaDataBranch); \
	DECLARE_FUNCTION(execGetAssetMetaData); \
	DECLARE_FUNCTION(execGetAssetDiskPath); \
	DECLARE_FUNCTION(execGetAssetDateModifiedAsString); \
	DECLARE_FUNCTION(execGetAssetDateModified); \
	DECLARE_FUNCTION(execGetAssetTags); \
	DECLARE_FUNCTION(execFixRedirectorsByPath); \
	DECLARE_FUNCTION(execFixRedirectors);


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDiffAssetWithExternalAsset); \
	DECLARE_FUNCTION(execDiffAssetPath); \
	DECLARE_FUNCTION(execDiffAssetData); \
	DECLARE_FUNCTION(execDiffAssets); \
	DECLARE_FUNCTION(execNewAssetPathToDiskPath); \
	DECLARE_FUNCTION(execAssetPathsToDiskPaths); \
	DECLARE_FUNCTION(execAssetPathToDiskPath); \
	DECLARE_FUNCTION(execGetSelectedPaths); \
	DECLARE_FUNCTION(execHasAssetRefs); \
	DECLARE_FUNCTION(execGetAssetDependenciesByObject); \
	DECLARE_FUNCTION(execGetAssetDependenciesByPath); \
	DECLARE_FUNCTION(execGetAssetDependencies); \
	DECLARE_FUNCTION(execGetAssetReferencersByObject); \
	DECLARE_FUNCTION(execGetAssetReferencersByPath); \
	DECLARE_FUNCTION(execGetAssetReferencers); \
	DECLARE_FUNCTION(execGetAssetObjectMetaDataBranch); \
	DECLARE_FUNCTION(execGetAssetObjectMetaData); \
	DECLARE_FUNCTION(execGetMetaDataKeyBranch); \
	DECLARE_FUNCTION(execGetAssetObjectsWithMetaDataKey); \
	DECLARE_FUNCTION(execGetAssetObjectsMetaData); \
	DECLARE_FUNCTION(execGetAssetObjectsByPath); \
	DECLARE_FUNCTION(execGetAssetObjects); \
	DECLARE_FUNCTION(execGetAssetObjectByPath); \
	DECLARE_FUNCTION(execGetPackage); \
	DECLARE_FUNCTION(execIsAssetUWorldType); \
	DECLARE_FUNCTION(execGetAssetPath); \
	DECLARE_FUNCTION(execGetAssetName); \
	DECLARE_FUNCTION(execGetAssetDatasByPath); \
	DECLARE_FUNCTION(execGetAssetPathFromObject); \
	DECLARE_FUNCTION(execGetAssetDataFromObject); \
	DECLARE_FUNCTION(execGetAssetDataFromPath); \
	DECLARE_FUNCTION(execGetAssetMetaDataBranch); \
	DECLARE_FUNCTION(execGetAssetMetaData); \
	DECLARE_FUNCTION(execGetAssetDiskPath); \
	DECLARE_FUNCTION(execGetAssetDateModifiedAsString); \
	DECLARE_FUNCTION(execGetAssetDateModified); \
	DECLARE_FUNCTION(execGetAssetTags); \
	DECLARE_FUNCTION(execFixRedirectorsByPath); \
	DECLARE_FUNCTION(execFixRedirectors);


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorBP_Assets(); \
	friend struct Z_Construct_UClass_UElgEditorBP_Assets_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_Assets, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_Assets)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorBP_Assets(); \
	friend struct Z_Construct_UClass_UElgEditorBP_Assets_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_Assets, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_Assets)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_Assets(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_Assets) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_Assets); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_Assets); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_Assets(UElgEditorBP_Assets&&); \
	NO_API UElgEditorBP_Assets(const UElgEditorBP_Assets&); \
public:


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_Assets(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_Assets(UElgEditorBP_Assets&&); \
	NO_API UElgEditorBP_Assets(const UElgEditorBP_Assets&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_Assets); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_Assets); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_Assets)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_PRIVATE_PROPERTY_OFFSET
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_57_PROLOG
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_PRIVATE_PROPERTY_OFFSET \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_SPARSE_DATA \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_RPC_WRAPPERS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_INCLASS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_PRIVATE_PROPERTY_OFFSET \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_SPARSE_DATA \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_INCLASS_NO_PURE_DECLS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorBP_Assets>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
