// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FS_ElgNotificationButtonInfo;
enum class EBPNotificationCompletionState : uint8;
#ifdef ELGEDITORSCRIPTING_ElgEditorContext_Notification_generated_h
#error "ElgEditorContext_Notification.generated.h already included, missing '#pragma once' in ElgEditorContext_Notification.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorContext_Notification_generated_h

#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics; \
	ELGEDITORSCRIPTING_API static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgNotificationInfo>();

#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Statics; \
	ELGEDITORSCRIPTING_API static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgNotificationButtons>();

#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics; \
	ELGEDITORSCRIPTING_API static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgNotificationButtonInfo>();

#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics; \
	ELGEDITORSCRIPTING_API static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgNotificationIcon>();

#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_SPARSE_DATA
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOnButtonClicked); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execIsNotificationValid); \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execSetCompleteStateSuccess); \
	DECLARE_FUNCTION(execSetCompleteStateFail); \
	DECLARE_FUNCTION(execSetStateAsPending); \
	DECLARE_FUNCTION(execSetCompletionState); \
	DECLARE_FUNCTION(execFadeout); \
	DECLARE_FUNCTION(execExpireAndFadeout); \
	DECLARE_FUNCTION(execCloseAsFail); \
	DECLARE_FUNCTION(execCloseAsSuccess); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execShow);


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOnButtonClicked); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execIsNotificationValid); \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execSetCompleteStateSuccess); \
	DECLARE_FUNCTION(execSetCompleteStateFail); \
	DECLARE_FUNCTION(execSetStateAsPending); \
	DECLARE_FUNCTION(execSetCompletionState); \
	DECLARE_FUNCTION(execFadeout); \
	DECLARE_FUNCTION(execExpireAndFadeout); \
	DECLARE_FUNCTION(execCloseAsFail); \
	DECLARE_FUNCTION(execCloseAsSuccess); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execShow);


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorContext_Notification(); \
	friend struct Z_Construct_UClass_UElgEditorContext_Notification_Statics; \
public: \
	DECLARE_CLASS(UElgEditorContext_Notification, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorContext_Notification)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorContext_Notification(); \
	friend struct Z_Construct_UClass_UElgEditorContext_Notification_Statics; \
public: \
	DECLARE_CLASS(UElgEditorContext_Notification, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorContext_Notification)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorContext_Notification(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorContext_Notification) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorContext_Notification); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorContext_Notification); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorContext_Notification(UElgEditorContext_Notification&&); \
	NO_API UElgEditorContext_Notification(const UElgEditorContext_Notification&); \
public:


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorContext_Notification(UElgEditorContext_Notification&&); \
	NO_API UElgEditorContext_Notification(const UElgEditorContext_Notification&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorContext_Notification); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorContext_Notification); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UElgEditorContext_Notification)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_PRIVATE_PROPERTY_OFFSET
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_210_PROLOG
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_PRIVATE_PROPERTY_OFFSET \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_SPARSE_DATA \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_RPC_WRAPPERS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_INCLASS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_PRIVATE_PROPERTY_OFFSET \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_SPARSE_DATA \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_RPC_WRAPPERS_NO_PURE_DECLS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_INCLASS_NO_PURE_DECLS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorContext_Notification>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h


#define FOREACH_ENUM_EBPNOTIFICATIONCOMPLETIONSTATE(op) \
	op(EBPNotificationCompletionState::None) \
	op(EBPNotificationCompletionState::Pending) \
	op(EBPNotificationCompletionState::Success) \
	op(EBPNotificationCompletionState::Fail) 

enum class EBPNotificationCompletionState : uint8;
template<> ELGEDITORSCRIPTING_API UEnum* StaticEnum<EBPNotificationCompletionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
