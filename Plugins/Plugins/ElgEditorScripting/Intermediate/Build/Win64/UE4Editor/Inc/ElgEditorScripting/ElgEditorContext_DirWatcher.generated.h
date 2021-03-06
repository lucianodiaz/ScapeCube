// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELGEDITORSCRIPTING_ElgEditorContext_DirWatcher_generated_h
#error "ElgEditorContext_DirWatcher.generated.h already included, missing '#pragma once' in ElgEditorContext_DirWatcher.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorContext_DirWatcher_generated_h

#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_16_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnDirWatchFilesRemovedSignature_Parms \
{ \
	TArray<FString> FilesRemoved; \
}; \
static inline void FElgEditorEventsOnDirWatchFilesRemovedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnDirWatchFilesRemovedSignature, TArray<FString> const& FilesRemoved) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnDirWatchFilesRemovedSignature_Parms Parms; \
	Parms.FilesRemoved=FilesRemoved; \
	ElgEditorEventsOnDirWatchFilesRemovedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_15_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnDirWatchFilesModifiedSignature_Parms \
{ \
	TArray<FString> FilesModified; \
}; \
static inline void FElgEditorEventsOnDirWatchFilesModifiedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnDirWatchFilesModifiedSignature, TArray<FString> const& FilesModified) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnDirWatchFilesModifiedSignature_Parms Parms; \
	Parms.FilesModified=FilesModified; \
	ElgEditorEventsOnDirWatchFilesModifiedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_14_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnDirWatchFilesAddedSignature_Parms \
{ \
	TArray<FString> FilesAdded; \
}; \
static inline void FElgEditorEventsOnDirWatchFilesAddedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnDirWatchFilesAddedSignature, TArray<FString> const& FilesAdded) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnDirWatchFilesAddedSignature_Parms Parms; \
	Parms.FilesAdded=FilesAdded; \
	ElgEditorEventsOnDirWatchFilesAddedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_13_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnDirWatchSignature_Parms \
{ \
	TArray<FString> FilesAdded; \
	TArray<FString> FilesModified; \
	TArray<FString> FilesRemoved; \
}; \
static inline void FElgEditorEventsOnDirWatchSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnDirWatchSignature, TArray<FString> const& FilesAdded, TArray<FString> const& FilesModified, TArray<FString> const& FilesRemoved) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnDirWatchSignature_Parms Parms; \
	Parms.FilesAdded=FilesAdded; \
	Parms.FilesModified=FilesModified; \
	Parms.FilesRemoved=FilesRemoved; \
	ElgEditorEventsOnDirWatchSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_SPARSE_DATA
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWatchDirectories); \
	DECLARE_FUNCTION(execRemoveWatchDirectories); \
	DECLARE_FUNCTION(execRemoveWatchDirectory); \
	DECLARE_FUNCTION(execAddWatchDirectories); \
	DECLARE_FUNCTION(execAddWatchDirectory);


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWatchDirectories); \
	DECLARE_FUNCTION(execRemoveWatchDirectories); \
	DECLARE_FUNCTION(execRemoveWatchDirectory); \
	DECLARE_FUNCTION(execAddWatchDirectories); \
	DECLARE_FUNCTION(execAddWatchDirectory);


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorContext_DirWatcher(); \
	friend struct Z_Construct_UClass_UElgEditorContext_DirWatcher_Statics; \
public: \
	DECLARE_CLASS(UElgEditorContext_DirWatcher, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorContext_DirWatcher)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorContext_DirWatcher(); \
	friend struct Z_Construct_UClass_UElgEditorContext_DirWatcher_Statics; \
public: \
	DECLARE_CLASS(UElgEditorContext_DirWatcher, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorContext_DirWatcher)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorContext_DirWatcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorContext_DirWatcher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorContext_DirWatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorContext_DirWatcher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorContext_DirWatcher(UElgEditorContext_DirWatcher&&); \
	NO_API UElgEditorContext_DirWatcher(const UElgEditorContext_DirWatcher&); \
public:


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorContext_DirWatcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorContext_DirWatcher(UElgEditorContext_DirWatcher&&); \
	NO_API UElgEditorContext_DirWatcher(const UElgEditorContext_DirWatcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorContext_DirWatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorContext_DirWatcher); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorContext_DirWatcher)


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnDirectoryWatcher() { return STRUCT_OFFSET(UElgEditorContext_DirWatcher, OnDirectoryWatcher); } \
	FORCEINLINE static uint32 __PPO__OnDirectoryWatcherFilesAdded() { return STRUCT_OFFSET(UElgEditorContext_DirWatcher, OnDirectoryWatcherFilesAdded); } \
	FORCEINLINE static uint32 __PPO__OnDirectoryWatcherFilesModified() { return STRUCT_OFFSET(UElgEditorContext_DirWatcher, OnDirectoryWatcherFilesModified); } \
	FORCEINLINE static uint32 __PPO__OnDirectoryWatcherFilesRemoved() { return STRUCT_OFFSET(UElgEditorContext_DirWatcher, OnDirectoryWatcherFilesRemoved); }


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_21_PROLOG
#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_PRIVATE_PROPERTY_OFFSET \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_SPARSE_DATA \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_RPC_WRAPPERS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_INCLASS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_PRIVATE_PROPERTY_OFFSET \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_SPARSE_DATA \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_INCLASS_NO_PURE_DECLS \
	ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorContext_DirWatcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScapeCube_Plugins_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_DirWatcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
