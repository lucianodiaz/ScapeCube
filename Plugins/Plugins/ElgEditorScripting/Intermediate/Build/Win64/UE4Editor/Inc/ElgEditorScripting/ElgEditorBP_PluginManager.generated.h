// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class UTexture2D;
enum class EBPEditorOutputResultBranch : uint8;
class UTexture2D;
 struct FS_ElgPluginCategory;
struct FS_ElgPluginDescriptor;
enum class EBPEditorOutputValidBranch : uint8;
 struct FS_ElgPluginDescriptor;
#ifdef ELGEDITORSCRIPTING_ElgEditorBP_PluginManager_generated_h
#error "ElgEditorBP_PluginManager.generated.h already included, missing '#pragma once' in ElgEditorBP_PluginManager.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorBP_PluginManager_generated_h

#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_189_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics; \
	ELGEDITORSCRIPTING_API static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgPluginCategory>();

#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics; \
	ELGEDITORSCRIPTING_API static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgPluginDescriptor>();

#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_SPARSE_DATA
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPluginIconTextures); \
	DECLARE_FUNCTION(execGetPluginIconTextureByPath); \
	DECLARE_FUNCTION(execGetPluginIconTexture); \
	DECLARE_FUNCTION(execSetPluginEnabled); \
	DECLARE_FUNCTION(execDisablePlugin); \
	DECLARE_FUNCTION(execEnablePlugin); \
	DECLARE_FUNCTION(execGetPluginCategory); \
	DECLARE_FUNCTION(execGetPluginFriendlyName); \
	DECLARE_FUNCTION(execGetPluginDescription); \
	DECLARE_FUNCTION(execGetPluginDescriptions); \
	DECLARE_FUNCTION(execPackagePlugin); \
	DECLARE_FUNCTION(execGetPluginCount);


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPluginIconTextures); \
	DECLARE_FUNCTION(execGetPluginIconTextureByPath); \
	DECLARE_FUNCTION(execGetPluginIconTexture); \
	DECLARE_FUNCTION(execSetPluginEnabled); \
	DECLARE_FUNCTION(execDisablePlugin); \
	DECLARE_FUNCTION(execEnablePlugin); \
	DECLARE_FUNCTION(execGetPluginCategory); \
	DECLARE_FUNCTION(execGetPluginFriendlyName); \
	DECLARE_FUNCTION(execGetPluginDescription); \
	DECLARE_FUNCTION(execGetPluginDescriptions); \
	DECLARE_FUNCTION(execPackagePlugin); \
	DECLARE_FUNCTION(execGetPluginCount);


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorBP_PluginManager(); \
	friend struct Z_Construct_UClass_UElgEditorBP_PluginManager_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_PluginManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_PluginManager)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorBP_PluginManager(); \
	friend struct Z_Construct_UClass_UElgEditorBP_PluginManager_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_PluginManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_PluginManager)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_PluginManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_PluginManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_PluginManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_PluginManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_PluginManager(UElgEditorBP_PluginManager&&); \
	NO_API UElgEditorBP_PluginManager(const UElgEditorBP_PluginManager&); \
public:


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_PluginManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_PluginManager(UElgEditorBP_PluginManager&&); \
	NO_API UElgEditorBP_PluginManager(const UElgEditorBP_PluginManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_PluginManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_PluginManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_PluginManager)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_PRIVATE_PROPERTY_OFFSET
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_222_PROLOG
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_PRIVATE_PROPERTY_OFFSET \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_SPARSE_DATA \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_RPC_WRAPPERS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_INCLASS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_PRIVATE_PROPERTY_OFFSET \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_SPARSE_DATA \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_RPC_WRAPPERS_NO_PURE_DECLS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_INCLASS_NO_PURE_DECLS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorBP_PluginManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h


#define FOREACH_ENUM_EBPPLUGINTYPE(op) \
	op(EBPPluginType::Engine) \
	op(EBPPluginType::Enterprise) \
	op(EBPPluginType::Project) \
	op(EBPPluginType::External) \
	op(EBPPluginType::Mod) 

enum class EBPPluginType : uint8;
template<> ELGEDITORSCRIPTING_API UEnum* StaticEnum<EBPPluginType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
