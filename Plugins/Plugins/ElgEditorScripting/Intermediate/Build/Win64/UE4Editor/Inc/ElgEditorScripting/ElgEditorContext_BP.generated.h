// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FS_ElgNotificationIcon;
enum class EBPNotificationCompletionState : uint8;
struct FS_ElgNotificationButtons;
class UObject;
class UElgEditorContext_Jason;
class UElgEditorContext_DirWatcher;
struct FS_ElgNotificationInfo;
class UElgEditorContext_Notification;
class UElgEditorContext_Config;
class UElgEditorContext_AssetBrowser;
class UElgEditorContext_LevelEditor;
#ifdef ELGEDITORSCRIPTING_ElgEditorContext_BP_generated_h
#error "ElgEditorContext_BP.generated.h already included, missing '#pragma once' in ElgEditorContext_BP.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorContext_BP_generated_h

#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_SPARSE_DATA
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsInPIE); \
	DECLARE_FUNCTION(execIsInEditor); \
	DECLARE_FUNCTION(execShowQuickNotification); \
	DECLARE_FUNCTION(execGetJasonContext); \
	DECLARE_FUNCTION(execGetDirectoryWatcherContext); \
	DECLARE_FUNCTION(execGetNotificationContext); \
	DECLARE_FUNCTION(execGetConfigContext); \
	DECLARE_FUNCTION(execGetAssetBrowserContext); \
	DECLARE_FUNCTION(execGetLevelEditorContext);


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsInPIE); \
	DECLARE_FUNCTION(execIsInEditor); \
	DECLARE_FUNCTION(execShowQuickNotification); \
	DECLARE_FUNCTION(execGetJasonContext); \
	DECLARE_FUNCTION(execGetDirectoryWatcherContext); \
	DECLARE_FUNCTION(execGetNotificationContext); \
	DECLARE_FUNCTION(execGetConfigContext); \
	DECLARE_FUNCTION(execGetAssetBrowserContext); \
	DECLARE_FUNCTION(execGetLevelEditorContext);


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorContext_BP(); \
	friend struct Z_Construct_UClass_UElgEditorContext_BP_Statics; \
public: \
	DECLARE_CLASS(UElgEditorContext_BP, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorContext_BP)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorContext_BP(); \
	friend struct Z_Construct_UClass_UElgEditorContext_BP_Statics; \
public: \
	DECLARE_CLASS(UElgEditorContext_BP, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorContext_BP)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorContext_BP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorContext_BP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorContext_BP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorContext_BP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorContext_BP(UElgEditorContext_BP&&); \
	NO_API UElgEditorContext_BP(const UElgEditorContext_BP&); \
public:


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorContext_BP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorContext_BP(UElgEditorContext_BP&&); \
	NO_API UElgEditorContext_BP(const UElgEditorContext_BP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorContext_BP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorContext_BP); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorContext_BP)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_PRIVATE_PROPERTY_OFFSET
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_22_PROLOG
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_PRIVATE_PROPERTY_OFFSET \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_SPARSE_DATA \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_RPC_WRAPPERS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_INCLASS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_PRIVATE_PROPERTY_OFFSET \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_SPARSE_DATA \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_INCLASS_NO_PURE_DECLS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorContext_BP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
