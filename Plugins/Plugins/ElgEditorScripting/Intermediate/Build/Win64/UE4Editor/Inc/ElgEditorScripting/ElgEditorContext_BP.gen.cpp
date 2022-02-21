// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgEditorScripting/Public/EditorContexts/ElgEditorContext_BP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgEditorContext_BP() {}
// Cross Module References
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_BP_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_BP();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ElgEditorScripting();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_AssetBrowser_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_Config_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_DirWatcher_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_Jason_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_LevelEditor_NoRegister();
	ELGEDITORSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FS_ElgNotificationInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_Notification_NoRegister();
	ELGEDITORSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FS_ElgNotificationIcon();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPNotificationCompletionState();
	ELGEDITORSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FS_ElgNotificationButtons();
// End Cross Module References
	DEFINE_FUNCTION(UElgEditorContext_BP::execIsInPIE)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorContext_BP::IsInPIE(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_BP::execIsInEditor)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorContext_BP::IsInEditor(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_BP::execShowQuickNotification)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Text);
		P_GET_STRUCT(FS_ElgNotificationIcon,Z_Param_Icon);
		P_GET_ENUM(EBPNotificationCompletionState,Z_Param_State);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_STRUCT(FS_ElgNotificationButtons,Z_Param_Buttons);
		P_GET_OBJECT(UObject,Z_Param_InGraphObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorContext_BP::ShowQuickNotification(Z_Param_Text,Z_Param_Icon,EBPNotificationCompletionState(Z_Param_State),Z_Param_Duration,Z_Param_Buttons,Z_Param_InGraphObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_BP::execGetJasonContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UElgEditorContext_Jason**)Z_Param__Result=UElgEditorContext_BP::GetJasonContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_BP::execGetDirectoryWatcherContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UElgEditorContext_DirWatcher**)Z_Param__Result=UElgEditorContext_BP::GetDirectoryWatcherContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_BP::execGetNotificationContext)
	{
		P_GET_STRUCT_REF(FS_ElgNotificationInfo,Z_Param_Out_Info);
		P_GET_UBOOL(Z_Param_ShowNotification);
		P_GET_OBJECT(UObject,Z_Param_InGraphObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UElgEditorContext_Notification**)Z_Param__Result=UElgEditorContext_BP::GetNotificationContext(Z_Param_Out_Info,Z_Param_ShowNotification,Z_Param_InGraphObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_BP::execGetConfigContext)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConfigFilename);
		P_GET_PROPERTY(FStrProperty,Z_Param_ConfigSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UElgEditorContext_Config**)Z_Param__Result=UElgEditorContext_BP::GetConfigContext(Z_Param_ConfigFilename,Z_Param_ConfigSection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_BP::execGetAssetBrowserContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UElgEditorContext_AssetBrowser**)Z_Param__Result=UElgEditorContext_BP::GetAssetBrowserContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_BP::execGetLevelEditorContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UElgEditorContext_LevelEditor**)Z_Param__Result=UElgEditorContext_BP::GetLevelEditorContext();
		P_NATIVE_END;
	}
	void UElgEditorContext_BP::StaticRegisterNativesUElgEditorContext_BP()
	{
		UClass* Class = UElgEditorContext_BP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssetBrowserContext", &UElgEditorContext_BP::execGetAssetBrowserContext },
			{ "GetConfigContext", &UElgEditorContext_BP::execGetConfigContext },
			{ "GetDirectoryWatcherContext", &UElgEditorContext_BP::execGetDirectoryWatcherContext },
			{ "GetJasonContext", &UElgEditorContext_BP::execGetJasonContext },
			{ "GetLevelEditorContext", &UElgEditorContext_BP::execGetLevelEditorContext },
			{ "GetNotificationContext", &UElgEditorContext_BP::execGetNotificationContext },
			{ "IsInEditor", &UElgEditorContext_BP::execIsInEditor },
			{ "IsInPIE", &UElgEditorContext_BP::execIsInPIE },
			{ "ShowQuickNotification", &UElgEditorContext_BP::execShowQuickNotification },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics
	{
		struct ElgEditorContext_BP_eventGetAssetBrowserContext_Parms
		{
			UElgEditorContext_AssetBrowser* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventGetAssetBrowserContext_Parms, ReturnValue), Z_Construct_UClass_UElgEditorContext_AssetBrowser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|AssetBrowser" },
		{ "Comment", "/* \n\x09\x09Return a AssetBrowserContext object so you can bind some useful events,\n\x09\x09""AssetSelectionChanged, AssetCreated, AssetRemoved, AssetRenamed etc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_BP.h" },
		{ "ToolTip", "Return a AssetBrowserContext object so you can bind some useful events,\nAssetSelectionChanged, AssetCreated, AssetRemoved, AssetRenamed etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_BP, nullptr, "GetAssetBrowserContext", nullptr, nullptr, sizeof(ElgEditorContext_BP_eventGetAssetBrowserContext_Parms), Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics
	{
		struct ElgEditorContext_BP_eventGetConfigContext_Parms
		{
			FString ConfigFilename;
			FString ConfigSection;
			UElgEditorContext_Config* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigFilename;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigSection;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::NewProp_ConfigFilename = { "ConfigFilename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventGetConfigContext_Parms, ConfigFilename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::NewProp_ConfigSection = { "ConfigSection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventGetConfigContext_Parms, ConfigSection), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventGetConfigContext_Parms, ReturnValue), Z_Construct_UClass_UElgEditorContext_Config_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::NewProp_ConfigFilename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::NewProp_ConfigSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config" },
		{ "Comment", "/*\n\x09\x09Return a ConfigContext object so you can read/write to a config files section,\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_BP.h" },
		{ "ToolTip", "Return a ConfigContext object so you can read/write to a config files section," },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_BP, nullptr, "GetConfigContext", nullptr, nullptr, sizeof(ElgEditorContext_BP_eventGetConfigContext_Parms), Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_BP_GetDirectoryWatcherContext_Statics
	{
		struct ElgEditorContext_BP_eventGetDirectoryWatcherContext_Parms
		{
			UElgEditorContext_DirWatcher* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_GetDirectoryWatcherContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventGetDirectoryWatcherContext_Parms, ReturnValue), Z_Construct_UClass_UElgEditorContext_DirWatcher_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_BP_GetDirectoryWatcherContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_GetDirectoryWatcherContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_BP_GetDirectoryWatcherContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|DirectoryWatcher" },
		{ "Comment", "/*\n\x09\x09Return a DirectoryWatcherContext object.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_BP.h" },
		{ "ToolTip", "Return a DirectoryWatcherContext object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_BP_GetDirectoryWatcherContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_BP, nullptr, "GetDirectoryWatcherContext", nullptr, nullptr, sizeof(ElgEditorContext_BP_eventGetDirectoryWatcherContext_Parms), Z_Construct_UFunction_UElgEditorContext_BP_GetDirectoryWatcherContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetDirectoryWatcherContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_BP_GetDirectoryWatcherContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetDirectoryWatcherContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_BP_GetDirectoryWatcherContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_BP_GetDirectoryWatcherContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_BP_GetJasonContext_Statics
	{
		struct ElgEditorContext_BP_eventGetJasonContext_Parms
		{
			UElgEditorContext_Jason* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_GetJasonContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventGetJasonContext_Parms, ReturnValue), Z_Construct_UClass_UElgEditorContext_Jason_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_BP_GetJasonContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_GetJasonContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_BP_GetJasonContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Jason" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_BP_GetJasonContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_BP, nullptr, "GetJasonContext", nullptr, nullptr, sizeof(ElgEditorContext_BP_eventGetJasonContext_Parms), Z_Construct_UFunction_UElgEditorContext_BP_GetJasonContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetJasonContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_BP_GetJasonContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetJasonContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_BP_GetJasonContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_BP_GetJasonContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics
	{
		struct ElgEditorContext_BP_eventGetLevelEditorContext_Parms
		{
			UElgEditorContext_LevelEditor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventGetLevelEditorContext_Parms, ReturnValue), Z_Construct_UClass_UElgEditorContext_LevelEditor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|LevelEditor" },
		{ "Comment", "/* \n\x09\x09Returns a LevelEditorContext object that can be used to bind some useful events,\n\x09\x09OnSelectionChanged, ActorAdded, EnterPIE, Change EditorMode etc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_BP.h" },
		{ "ToolTip", "Returns a LevelEditorContext object that can be used to bind some useful events,\nOnSelectionChanged, ActorAdded, EnterPIE, Change EditorMode etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_BP, nullptr, "GetLevelEditorContext", nullptr, nullptr, sizeof(ElgEditorContext_BP_eventGetLevelEditorContext_Parms), Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics
	{
		struct ElgEditorContext_BP_eventGetNotificationContext_Parms
		{
			FS_ElgNotificationInfo Info;
			bool ShowNotification;
			UObject* InGraphObject;
			UElgEditorContext_Notification* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Info;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowNotification_MetaData[];
#endif
		static void NewProp_ShowNotification_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowNotification;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InGraphObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventGetNotificationContext_Parms, Info), Z_Construct_UScriptStruct_FS_ElgNotificationInfo, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::NewProp_Info_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::NewProp_ShowNotification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::NewProp_ShowNotification_SetBit(void* Obj)
	{
		((ElgEditorContext_BP_eventGetNotificationContext_Parms*)Obj)->ShowNotification = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::NewProp_ShowNotification = { "ShowNotification", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_BP_eventGetNotificationContext_Parms), &Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::NewProp_ShowNotification_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::NewProp_ShowNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::NewProp_ShowNotification_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::NewProp_InGraphObject = { "InGraphObject", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventGetNotificationContext_Parms, InGraphObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventGetNotificationContext_Parms, ReturnValue), Z_Construct_UClass_UElgEditorContext_Notification_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::NewProp_ShowNotification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::NewProp_InGraphObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "ElgEditor|Notification" },
		{ "Comment", "/*\n\x09\x09Return a NotificationContext object so you can pop up a notification in the right bottom corner.\n\x09*/" },
		{ "DefaultToSelf", "InGraphObject" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_BP.h" },
		{ "ShowNotification", "true" },
		{ "ToolTip", "Return a NotificationContext object so you can pop up a notification in the right bottom corner." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_BP, nullptr, "GetNotificationContext", nullptr, nullptr, sizeof(ElgEditorContext_BP_eventGetNotificationContext_Parms), Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics
	{
		struct ElgEditorContext_BP_eventIsInEditor_Parms
		{
			bool Result;
		};
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((ElgEditorContext_BP_eventIsInEditor_Parms*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_BP_eventIsInEditor_Parms), &Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor" },
		{ "Comment", "/* Return if we currently are in the Editor and no PIE is running */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_BP.h" },
		{ "ToolTip", "Return if we currently are in the Editor and no PIE is running" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_BP, nullptr, "IsInEditor", nullptr, nullptr, sizeof(ElgEditorContext_BP_eventIsInEditor_Parms), Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics
	{
		struct ElgEditorContext_BP_eventIsInPIE_Parms
		{
			bool Result;
		};
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((ElgEditorContext_BP_eventIsInPIE_Parms*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_BP_eventIsInPIE_Parms), &Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor" },
		{ "Comment", "/* Return if we currently playing in the Editor or not */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_BP.h" },
		{ "ToolTip", "Return if we currently playing in the Editor or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_BP, nullptr, "IsInPIE", nullptr, nullptr, sizeof(ElgEditorContext_BP_eventIsInPIE_Parms), Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics
	{
		struct ElgEditorContext_BP_eventShowQuickNotification_Parms
		{
			FText Text;
			FS_ElgNotificationIcon Icon;
			EBPNotificationCompletionState State;
			float Duration;
			FS_ElgNotificationButtons Buttons;
			UObject* InGraphObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Icon;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Buttons;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InGraphObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventShowQuickNotification_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_Icon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventShowQuickNotification_Parms, Icon), Z_Construct_UScriptStruct_FS_ElgNotificationIcon, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_Icon_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventShowQuickNotification_Parms, State), Z_Construct_UEnum_ElgEditorScripting_EBPNotificationCompletionState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventShowQuickNotification_Parms, Duration), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_Buttons = { "Buttons", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventShowQuickNotification_Parms, Buttons), Z_Construct_UScriptStruct_FS_ElgNotificationButtons, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_InGraphObject = { "InGraphObject", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventShowQuickNotification_Parms, InGraphObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_Buttons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::NewProp_InGraphObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "ElgEditor|Notification" },
		{ "Comment", "/* Show a quick notification message */" },
		{ "DefaultToSelf", "InGraphObject" },
		{ "Duration", "8.0" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_BP.h" },
		{ "ToolTip", "Show a quick notification message" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_BP, nullptr, "ShowQuickNotification", nullptr, nullptr, sizeof(ElgEditorContext_BP_eventShowQuickNotification_Parms), Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElgEditorContext_BP_NoRegister()
	{
		return UElgEditorContext_BP::StaticClass();
	}
	struct Z_Construct_UClass_UElgEditorContext_BP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgEditorContext_BP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElgEditorContext_BP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext, "GetAssetBrowserContext" }, // 3840817241
		{ &Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext, "GetConfigContext" }, // 1328541707
		{ &Z_Construct_UFunction_UElgEditorContext_BP_GetDirectoryWatcherContext, "GetDirectoryWatcherContext" }, // 88582634
		{ &Z_Construct_UFunction_UElgEditorContext_BP_GetJasonContext, "GetJasonContext" }, // 1775920223
		{ &Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext, "GetLevelEditorContext" }, // 600276589
		{ &Z_Construct_UFunction_UElgEditorContext_BP_GetNotificationContext, "GetNotificationContext" }, // 4167876311
		{ &Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor, "IsInEditor" }, // 120147020
		{ &Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE, "IsInPIE" }, // 4083370552
		{ &Z_Construct_UFunction_UElgEditorContext_BP_ShowQuickNotification, "ShowQuickNotification" }, // 3092349369
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_BP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EditorContexts/ElgEditorContext_BP.h" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_BP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgEditorContext_BP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgEditorContext_BP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgEditorContext_BP_Statics::ClassParams = {
		&UElgEditorContext_BP::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_BP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_BP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgEditorContext_BP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgEditorContext_BP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgEditorContext_BP, 3216179769);
	template<> ELGEDITORSCRIPTING_API UClass* StaticClass<UElgEditorContext_BP>()
	{
		return UElgEditorContext_BP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgEditorContext_BP(Z_Construct_UClass_UElgEditorContext_BP, &UElgEditorContext_BP::StaticClass, TEXT("/Script/ElgEditorScripting"), TEXT("UElgEditorContext_BP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgEditorContext_BP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
