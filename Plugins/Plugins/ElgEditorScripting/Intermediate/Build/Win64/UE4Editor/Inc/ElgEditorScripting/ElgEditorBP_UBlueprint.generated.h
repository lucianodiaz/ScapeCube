// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlueprint;
enum class EBPEditorOutputBranch : uint8;
struct FS_ElgBlueprintsNodeStats;
struct FS_ElgBlueprintNodeStats;
 
class UObject;
class UInterface;
class UActorComponent;
enum class EBPEditorOutputValidBranch : uint8;
struct FAssetData;
#ifdef ELGEDITORSCRIPTING_ElgEditorBP_UBlueprint_generated_h
#error "ElgEditorBP_UBlueprint.generated.h already included, missing '#pragma once' in ElgEditorBP_UBlueprint.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorBP_UBlueprint_generated_h

#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics; \
	ELGEDITORSCRIPTING_API static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgBlueprintsNodeStats>();

#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics; \
	ELGEDITORSCRIPTING_API static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgBlueprintNodeStats>();

#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_SPARSE_DATA
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveLocalVariable); \
	DECLARE_FUNCTION(execRenameLocalVariable); \
	DECLARE_FUNCTION(execRemoveUnusedLocalVariables); \
	DECLARE_FUNCTION(execGetUnusedLocalVariableNames); \
	DECLARE_FUNCTION(execGetLocalVariableNames); \
	DECLARE_FUNCTION(execGetVariableNames); \
	DECLARE_FUNCTION(execHasNodeCommentWith); \
	DECLARE_FUNCTION(execHasCommentWith); \
	DECLARE_FUNCTION(execHasCompilerErrorBranch); \
	DECLARE_FUNCTION(execHasCompilerError); \
	DECLARE_FUNCTION(execDeleteNodesByName); \
	DECLARE_FUNCTION(execGetNodeStatsByPath); \
	DECLARE_FUNCTION(execGetBlueprintsNodeStat); \
	DECLARE_FUNCTION(execGetBlueprintNodeStat); \
	DECLARE_FUNCTION(execGetNodeUsage); \
	DECLARE_FUNCTION(execIsNodePinConnectedBranch); \
	DECLARE_FUNCTION(execIsNodePinConnected); \
	DECLARE_FUNCTION(execHasNodeBranch); \
	DECLARE_FUNCTION(execHasNode); \
	DECLARE_FUNCTION(execIsConstructionScriptConnectedBranch); \
	DECLARE_FUNCTION(execIsConstructionScriptConnected); \
	DECLARE_FUNCTION(execSetRunConstructionScriptOnDrag); \
	DECLARE_FUNCTION(execIsRunConstructionScriptOnDragBranch); \
	DECLARE_FUNCTION(execIsRunConstructionScriptOnDrag); \
	DECLARE_FUNCTION(execSetCanEverTick); \
	DECLARE_FUNCTION(execCanEverTickBranch); \
	DECLARE_FUNCTION(execCanEverTick); \
	DECLARE_FUNCTION(execSetStartingWithTick); \
	DECLARE_FUNCTION(execIsStartingWithTickBranch); \
	DECLARE_FUNCTION(execIsStartingWithTick); \
	DECLARE_FUNCTION(execCompileBlueprint); \
	DECLARE_FUNCTION(execIsChildOfClassBranch); \
	DECLARE_FUNCTION(execIsChildOfClass); \
	DECLARE_FUNCTION(execGetNativeClass); \
	DECLARE_FUNCTION(execGetParentClass); \
	DECLARE_FUNCTION(execBlueprintSupportInterfaceBranch); \
	DECLARE_FUNCTION(execBlueprintSupportInterface); \
	DECLARE_FUNCTION(execBlueprintRemoveInterface); \
	DECLARE_FUNCTION(execBlueprintAddInterface); \
	DECLARE_FUNCTION(execBlueprintImplementInterface); \
	DECLARE_FUNCTION(execGetBlueprintInterfaces); \
	DECLARE_FUNCTION(execBlueprintSupportComponentBranch); \
	DECLARE_FUNCTION(execBlueprintSupportComponent); \
	DECLARE_FUNCTION(execBlueprintRemoveComponent); \
	DECLARE_FUNCTION(execBlueprintAddComponent); \
	DECLARE_FUNCTION(execGetBlueprintComponentsOfClassBranch); \
	DECLARE_FUNCTION(execGetBlueprintComponentsOfClass); \
	DECLARE_FUNCTION(execGetBlueprintComponentOfClassBranch); \
	DECLARE_FUNCTION(execGetBlueprintComponentOfClass); \
	DECLARE_FUNCTION(execGetBlueprintComponents); \
	DECLARE_FUNCTION(execGetBlueprintsByPath); \
	DECLARE_FUNCTION(execGetBlueprintsFromObjects); \
	DECLARE_FUNCTION(execGetBlueprintFromObject); \
	DECLARE_FUNCTION(execGetBlueprintFromAssetData);


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveLocalVariable); \
	DECLARE_FUNCTION(execRenameLocalVariable); \
	DECLARE_FUNCTION(execRemoveUnusedLocalVariables); \
	DECLARE_FUNCTION(execGetUnusedLocalVariableNames); \
	DECLARE_FUNCTION(execGetLocalVariableNames); \
	DECLARE_FUNCTION(execGetVariableNames); \
	DECLARE_FUNCTION(execHasNodeCommentWith); \
	DECLARE_FUNCTION(execHasCommentWith); \
	DECLARE_FUNCTION(execHasCompilerErrorBranch); \
	DECLARE_FUNCTION(execHasCompilerError); \
	DECLARE_FUNCTION(execDeleteNodesByName); \
	DECLARE_FUNCTION(execGetNodeStatsByPath); \
	DECLARE_FUNCTION(execGetBlueprintsNodeStat); \
	DECLARE_FUNCTION(execGetBlueprintNodeStat); \
	DECLARE_FUNCTION(execGetNodeUsage); \
	DECLARE_FUNCTION(execIsNodePinConnectedBranch); \
	DECLARE_FUNCTION(execIsNodePinConnected); \
	DECLARE_FUNCTION(execHasNodeBranch); \
	DECLARE_FUNCTION(execHasNode); \
	DECLARE_FUNCTION(execIsConstructionScriptConnectedBranch); \
	DECLARE_FUNCTION(execIsConstructionScriptConnected); \
	DECLARE_FUNCTION(execSetRunConstructionScriptOnDrag); \
	DECLARE_FUNCTION(execIsRunConstructionScriptOnDragBranch); \
	DECLARE_FUNCTION(execIsRunConstructionScriptOnDrag); \
	DECLARE_FUNCTION(execSetCanEverTick); \
	DECLARE_FUNCTION(execCanEverTickBranch); \
	DECLARE_FUNCTION(execCanEverTick); \
	DECLARE_FUNCTION(execSetStartingWithTick); \
	DECLARE_FUNCTION(execIsStartingWithTickBranch); \
	DECLARE_FUNCTION(execIsStartingWithTick); \
	DECLARE_FUNCTION(execCompileBlueprint); \
	DECLARE_FUNCTION(execIsChildOfClassBranch); \
	DECLARE_FUNCTION(execIsChildOfClass); \
	DECLARE_FUNCTION(execGetNativeClass); \
	DECLARE_FUNCTION(execGetParentClass); \
	DECLARE_FUNCTION(execBlueprintSupportInterfaceBranch); \
	DECLARE_FUNCTION(execBlueprintSupportInterface); \
	DECLARE_FUNCTION(execBlueprintRemoveInterface); \
	DECLARE_FUNCTION(execBlueprintAddInterface); \
	DECLARE_FUNCTION(execBlueprintImplementInterface); \
	DECLARE_FUNCTION(execGetBlueprintInterfaces); \
	DECLARE_FUNCTION(execBlueprintSupportComponentBranch); \
	DECLARE_FUNCTION(execBlueprintSupportComponent); \
	DECLARE_FUNCTION(execBlueprintRemoveComponent); \
	DECLARE_FUNCTION(execBlueprintAddComponent); \
	DECLARE_FUNCTION(execGetBlueprintComponentsOfClassBranch); \
	DECLARE_FUNCTION(execGetBlueprintComponentsOfClass); \
	DECLARE_FUNCTION(execGetBlueprintComponentOfClassBranch); \
	DECLARE_FUNCTION(execGetBlueprintComponentOfClass); \
	DECLARE_FUNCTION(execGetBlueprintComponents); \
	DECLARE_FUNCTION(execGetBlueprintsByPath); \
	DECLARE_FUNCTION(execGetBlueprintsFromObjects); \
	DECLARE_FUNCTION(execGetBlueprintFromObject); \
	DECLARE_FUNCTION(execGetBlueprintFromAssetData);


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorBP_UBlueprint(); \
	friend struct Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_UBlueprint, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_UBlueprint)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorBP_UBlueprint(); \
	friend struct Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_UBlueprint, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_UBlueprint)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_UBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_UBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_UBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_UBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_UBlueprint(UElgEditorBP_UBlueprint&&); \
	NO_API UElgEditorBP_UBlueprint(const UElgEditorBP_UBlueprint&); \
public:


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_UBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_UBlueprint(UElgEditorBP_UBlueprint&&); \
	NO_API UElgEditorBP_UBlueprint(const UElgEditorBP_UBlueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_UBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_UBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_UBlueprint)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_PRIVATE_PROPERTY_OFFSET
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_112_PROLOG
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_PRIVATE_PROPERTY_OFFSET \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_SPARSE_DATA \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_RPC_WRAPPERS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_INCLASS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_PRIVATE_PROPERTY_OFFSET \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_SPARSE_DATA \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_INCLASS_NO_PURE_DECLS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorBP_UBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
