// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEditorUtilityWidgetBlueprint;
enum class EBPEditorOutputValidBranch : uint8;
class UEditorUtilityWidget;
enum class EBPEditorOutputBranch : uint8;
#ifdef ELGEDITORSCRIPTING_ElgEditorBP_EditorWidget_generated_h
#error "ElgEditorBP_EditorWidget.generated.h already included, missing '#pragma once' in ElgEditorBP_EditorWidget.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorBP_EditorWidget_generated_h

#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_SPARSE_DATA
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEditorWidgetDrawAttention); \
	DECLARE_FUNCTION(execSetEditorWidgetToolTip); \
	DECLARE_FUNCTION(execGetEditorWidgetLabel); \
	DECLARE_FUNCTION(execSetEditorWidgetLabel); \
	DECLARE_FUNCTION(execGetEditorWidget); \
	DECLARE_FUNCTION(execReinitializeEditorWidgets); \
	DECLARE_FUNCTION(execAddEditorWidgetsToLoadedScript); \
	DECLARE_FUNCTION(execIsEditorWidgetRegisteredBranch); \
	DECLARE_FUNCTION(execIsEditorWidgetRegistered); \
	DECLARE_FUNCTION(execIsEditorWidgetOpenBranch); \
	DECLARE_FUNCTION(execIsEditorWidgetOpen); \
	DECLARE_FUNCTION(execToggleEditorWidget); \
	DECLARE_FUNCTION(execCloseEditorWidget); \
	DECLARE_FUNCTION(execOpenAndGetEditorWidget); \
	DECLARE_FUNCTION(execOpenEditorWidget);


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEditorWidgetDrawAttention); \
	DECLARE_FUNCTION(execSetEditorWidgetToolTip); \
	DECLARE_FUNCTION(execGetEditorWidgetLabel); \
	DECLARE_FUNCTION(execSetEditorWidgetLabel); \
	DECLARE_FUNCTION(execGetEditorWidget); \
	DECLARE_FUNCTION(execReinitializeEditorWidgets); \
	DECLARE_FUNCTION(execAddEditorWidgetsToLoadedScript); \
	DECLARE_FUNCTION(execIsEditorWidgetRegisteredBranch); \
	DECLARE_FUNCTION(execIsEditorWidgetRegistered); \
	DECLARE_FUNCTION(execIsEditorWidgetOpenBranch); \
	DECLARE_FUNCTION(execIsEditorWidgetOpen); \
	DECLARE_FUNCTION(execToggleEditorWidget); \
	DECLARE_FUNCTION(execCloseEditorWidget); \
	DECLARE_FUNCTION(execOpenAndGetEditorWidget); \
	DECLARE_FUNCTION(execOpenEditorWidget);


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorBP_EditorWidget(); \
	friend struct Z_Construct_UClass_UElgEditorBP_EditorWidget_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_EditorWidget, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_EditorWidget)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorBP_EditorWidget(); \
	friend struct Z_Construct_UClass_UElgEditorBP_EditorWidget_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_EditorWidget, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_EditorWidget)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_EditorWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_EditorWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_EditorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_EditorWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_EditorWidget(UElgEditorBP_EditorWidget&&); \
	NO_API UElgEditorBP_EditorWidget(const UElgEditorBP_EditorWidget&); \
public:


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_EditorWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_EditorWidget(UElgEditorBP_EditorWidget&&); \
	NO_API UElgEditorBP_EditorWidget(const UElgEditorBP_EditorWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_EditorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_EditorWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_EditorWidget)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_PRIVATE_PROPERTY_OFFSET
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_21_PROLOG
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_PRIVATE_PROPERTY_OFFSET \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_SPARSE_DATA \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_RPC_WRAPPERS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_INCLASS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_PRIVATE_PROPERTY_OFFSET \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_SPARSE_DATA \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_INCLASS_NO_PURE_DECLS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorBP_EditorWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
