// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FS_ElgModuleStatus;
 struct FS_ElgModuleStatus;
#ifdef ELGEDITORSCRIPTING_ElgEditorBP_FModuleManager_generated_h
#error "ElgEditorBP_FModuleManager.generated.h already included, missing '#pragma once' in ElgEditorBP_FModuleManager.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorBP_FModuleManager_generated_h

#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics; \
	ELGEDITORSCRIPTING_API static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgModuleStatus>();

#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_SPARSE_DATA
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanDynamicReloadModule); \
	DECLARE_FUNCTION(execCanHotReloadModule); \
	DECLARE_FUNCTION(execIsModuleLoaded); \
	DECLARE_FUNCTION(execCanRecompileModule); \
	DECLARE_FUNCTION(execCanShutdownModule); \
	DECLARE_FUNCTION(execReloadModule); \
	DECLARE_FUNCTION(execUnloadModule); \
	DECLARE_FUNCTION(execLoadModule); \
	DECLARE_FUNCTION(execRecompileModule); \
	DECLARE_FUNCTION(execGetModuleStatus); \
	DECLARE_FUNCTION(execGetModulesStatus); \
	DECLARE_FUNCTION(execGetModuleNames);


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanDynamicReloadModule); \
	DECLARE_FUNCTION(execCanHotReloadModule); \
	DECLARE_FUNCTION(execIsModuleLoaded); \
	DECLARE_FUNCTION(execCanRecompileModule); \
	DECLARE_FUNCTION(execCanShutdownModule); \
	DECLARE_FUNCTION(execReloadModule); \
	DECLARE_FUNCTION(execUnloadModule); \
	DECLARE_FUNCTION(execLoadModule); \
	DECLARE_FUNCTION(execRecompileModule); \
	DECLARE_FUNCTION(execGetModuleStatus); \
	DECLARE_FUNCTION(execGetModulesStatus); \
	DECLARE_FUNCTION(execGetModuleNames);


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorBP_FModuleManager(); \
	friend struct Z_Construct_UClass_UElgEditorBP_FModuleManager_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_FModuleManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_FModuleManager)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorBP_FModuleManager(); \
	friend struct Z_Construct_UClass_UElgEditorBP_FModuleManager_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_FModuleManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_FModuleManager)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_FModuleManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_FModuleManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_FModuleManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_FModuleManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_FModuleManager(UElgEditorBP_FModuleManager&&); \
	NO_API UElgEditorBP_FModuleManager(const UElgEditorBP_FModuleManager&); \
public:


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_FModuleManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_FModuleManager(UElgEditorBP_FModuleManager&&); \
	NO_API UElgEditorBP_FModuleManager(const UElgEditorBP_FModuleManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_FModuleManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_FModuleManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_FModuleManager)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_PRIVATE_PROPERTY_OFFSET
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_82_PROLOG
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_PRIVATE_PROPERTY_OFFSET \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_SPARSE_DATA \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_RPC_WRAPPERS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_INCLASS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_PRIVATE_PROPERTY_OFFSET \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_SPARSE_DATA \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_INCLASS_NO_PURE_DECLS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorBP_FModuleManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
