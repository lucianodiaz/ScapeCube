// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgEditorScripting/Public/Blueprints/ElgEditorBP_Editor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgEditorBP_Editor() {}
// Cross Module References
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_Editor_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_Editor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ElgEditorScripting();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch();
// End Cross Module References
	DEFINE_FUNCTION(UElgEditorBP_Editor::execReceivedUserCancelBranch)
	{
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Editor::ReceivedUserCancelBranch((EBPEditorOutputBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Editor::execReceivedUserCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UElgEditorBP_Editor::ReceivedUserCancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Editor::execUpdateProgress)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Numerator);
		P_GET_PROPERTY(FIntProperty,Z_Param_Denominator);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Editor::UpdateProgress(Z_Param_Numerator,Z_Param_Denominator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Editor::execStatusUpdate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Numerator);
		P_GET_PROPERTY(FIntProperty,Z_Param_Denominator);
		P_GET_PROPERTY(FTextProperty,Z_Param_StatusText);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Editor::StatusUpdate(Z_Param_Numerator,Z_Param_Denominator,Z_Param_StatusText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Editor::execEndSlowTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Editor::EndSlowTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Editor::execBeginSlowTask)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Task);
		P_GET_UBOOL(Z_Param_ShowProgressDialog);
		P_GET_UBOOL(Z_Param_bShowCancelButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Editor::BeginSlowTask(Z_Param_Task,Z_Param_ShowProgressDialog,Z_Param_bShowCancelButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Editor::execReadTextFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToFile);
		P_GET_TARRAY_REF(FString,Z_Param_Out_FileData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Editor::ReadTextFile(Z_Param_PathToFile,Z_Param_Out_FileData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Editor::execCreateProc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToProgram);
		P_GET_PROPERTY(FStrProperty,Z_Param_Parameters);
		P_GET_UBOOL(Z_Param_Detach);
		P_GET_UBOOL(Z_Param_Hidden);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_GET_PROPERTY(FStrProperty,Z_Param_OptionalWorkingDirectory);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ProcessId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Editor::CreateProc(Z_Param_PathToProgram,Z_Param_Parameters,Z_Param_Detach,Z_Param_Hidden,Z_Param_Priority,Z_Param_OptionalWorkingDirectory,Z_Param_Out_ProcessId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Editor::execIsProcessRunningBranch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ProcessId);
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Editor::IsProcessRunningBranch(Z_Param_ProcessId,(EBPEditorOutputBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Editor::execIsProcessRunning)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ProcessId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UElgEditorBP_Editor::IsProcessRunning(Z_Param_ProcessId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Editor::execSwitchProject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameOrProjectFileName);
		P_GET_UBOOL(Z_Param_bShowWarning);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Editor::SwitchProject(Z_Param_GameOrProjectFileName,Z_Param_bShowWarning);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Editor::execRestartEditor)
	{
		P_GET_UBOOL(Z_Param_bShowWarning);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Editor::RestartEditor(Z_Param_bShowWarning);
		P_NATIVE_END;
	}
	void UElgEditorBP_Editor::StaticRegisterNativesUElgEditorBP_Editor()
	{
		UClass* Class = UElgEditorBP_Editor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginSlowTask", &UElgEditorBP_Editor::execBeginSlowTask },
			{ "CreateProc", &UElgEditorBP_Editor::execCreateProc },
			{ "EndSlowTask", &UElgEditorBP_Editor::execEndSlowTask },
			{ "IsProcessRunning", &UElgEditorBP_Editor::execIsProcessRunning },
			{ "IsProcessRunningBranch", &UElgEditorBP_Editor::execIsProcessRunningBranch },
			{ "ReadTextFile", &UElgEditorBP_Editor::execReadTextFile },
			{ "ReceivedUserCancel", &UElgEditorBP_Editor::execReceivedUserCancel },
			{ "ReceivedUserCancelBranch", &UElgEditorBP_Editor::execReceivedUserCancelBranch },
			{ "RestartEditor", &UElgEditorBP_Editor::execRestartEditor },
			{ "StatusUpdate", &UElgEditorBP_Editor::execStatusUpdate },
			{ "SwitchProject", &UElgEditorBP_Editor::execSwitchProject },
			{ "UpdateProgress", &UElgEditorBP_Editor::execUpdateProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics
	{
		struct ElgEditorBP_Editor_eventBeginSlowTask_Parms
		{
			FText Task;
			bool ShowProgressDialog;
			bool bShowCancelButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Task;
		static void NewProp_ShowProgressDialog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowProgressDialog;
		static void NewProp_bShowCancelButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowCancelButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventBeginSlowTask_Parms, Task), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_Task_MetaData)) };
	void Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_ShowProgressDialog_SetBit(void* Obj)
	{
		((ElgEditorBP_Editor_eventBeginSlowTask_Parms*)Obj)->ShowProgressDialog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_ShowProgressDialog = { "ShowProgressDialog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Editor_eventBeginSlowTask_Parms), &Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_ShowProgressDialog_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_bShowCancelButton_SetBit(void* Obj)
	{
		((ElgEditorBP_Editor_eventBeginSlowTask_Parms*)Obj)->bShowCancelButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_bShowCancelButton = { "bShowCancelButton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Editor_eventBeginSlowTask_Parms), &Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_bShowCancelButton_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_ShowProgressDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::NewProp_bShowCancelButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor|SlowTask" },
		{ "Comment", "/* Begin a SlowTask */" },
		{ "CPP_Default_bShowCancelButton", "false" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "Begin a SlowTask" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "BeginSlowTask", nullptr, nullptr, sizeof(ElgEditorBP_Editor_eventBeginSlowTask_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics
	{
		struct ElgEditorBP_Editor_eventCreateProc_Parms
		{
			FString PathToProgram;
			FString Parameters;
			bool Detach;
			bool Hidden;
			int32 Priority;
			FString OptionalWorkingDirectory;
			int32 ProcessId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathToProgram_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathToProgram;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Detach_MetaData[];
#endif
		static void NewProp_Detach_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Detach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hidden_MetaData[];
#endif
		static void NewProp_Hidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Hidden;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalWorkingDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OptionalWorkingDirectory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProcessId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_PathToProgram_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_PathToProgram = { "PathToProgram", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventCreateProc_Parms, PathToProgram), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_PathToProgram_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_PathToProgram_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventCreateProc_Parms, Parameters), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Parameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Detach_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Detach_SetBit(void* Obj)
	{
		((ElgEditorBP_Editor_eventCreateProc_Parms*)Obj)->Detach = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Detach = { "Detach", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Editor_eventCreateProc_Parms), &Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Detach_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Detach_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Detach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Hidden_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Hidden_SetBit(void* Obj)
	{
		((ElgEditorBP_Editor_eventCreateProc_Parms*)Obj)->Hidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Hidden = { "Hidden", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Editor_eventCreateProc_Parms), &Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Hidden_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Hidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Hidden_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Priority_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventCreateProc_Parms, Priority), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_OptionalWorkingDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_OptionalWorkingDirectory = { "OptionalWorkingDirectory", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventCreateProc_Parms, OptionalWorkingDirectory), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_OptionalWorkingDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_OptionalWorkingDirectory_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_ProcessId = { "ProcessId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventCreateProc_Parms, ProcessId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_PathToProgram,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Detach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Hidden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_OptionalWorkingDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::NewProp_ProcessId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|App" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "CreateProc", nullptr, nullptr, sizeof(ElgEditorBP_Editor_eventCreateProc_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_EndSlowTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_EndSlowTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor|SlowTask" },
		{ "Comment", "/* End a SlowTask */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "End a SlowTask" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_EndSlowTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "EndSlowTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_EndSlowTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_EndSlowTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_EndSlowTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_EndSlowTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics
	{
		struct ElgEditorBP_Editor_eventIsProcessRunning_Parms
		{
			int32 ProcessId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProcessId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::NewProp_ProcessId = { "ProcessId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventIsProcessRunning_Parms, ProcessId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_Editor_eventIsProcessRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Editor_eventIsProcessRunning_Parms), &Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::NewProp_ProcessId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor" },
		{ "Comment", "/* Return if the the Process is running or not */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "Return if the the Process is running or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "IsProcessRunning", nullptr, nullptr, sizeof(ElgEditorBP_Editor_eventIsProcessRunning_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics
	{
		struct ElgEditorBP_Editor_eventIsProcessRunningBranch_Parms
		{
			int32 ProcessId;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProcessId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::NewProp_ProcessId = { "ProcessId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventIsProcessRunningBranch_Parms, ProcessId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventIsProcessRunningBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::NewProp_ProcessId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor" },
		{ "Comment", "/* Return if the the Process is running or not branch*/" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "Return if the the Process is running or not branch" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "IsProcessRunningBranch", nullptr, nullptr, sizeof(ElgEditorBP_Editor_eventIsProcessRunningBranch_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile_Statics
	{
		struct ElgEditorBP_Editor_eventReadTextFile_Parms
		{
			FString PathToFile;
			TArray<FString> FileData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathToFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathToFile;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FileData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile_Statics::NewProp_PathToFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile_Statics::NewProp_PathToFile = { "PathToFile", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventReadTextFile_Parms, PathToFile), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile_Statics::NewProp_PathToFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile_Statics::NewProp_PathToFile_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile_Statics::NewProp_FileData_Inner = { "FileData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile_Statics::NewProp_FileData = { "FileData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventReadTextFile_Parms, FileData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile_Statics::NewProp_PathToFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile_Statics::NewProp_FileData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile_Statics::NewProp_FileData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|File" },
		{ "Comment", "/* Read the text file into an String array */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "Read the text file into an String array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "ReadTextFile", nullptr, nullptr, sizeof(ElgEditorBP_Editor_eventReadTextFile_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics
	{
		struct ElgEditorBP_Editor_eventReceivedUserCancel_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_Editor_eventReceivedUserCancel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Editor_eventReceivedUserCancel_Parms), &Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor|SlowTask" },
		{ "Comment", "/* Return if the SlowTask has been cancel by the user */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "Return if the SlowTask has been cancel by the user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "ReceivedUserCancel", nullptr, nullptr, sizeof(ElgEditorBP_Editor_eventReceivedUserCancel_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics
	{
		struct ElgEditorBP_Editor_eventReceivedUserCancelBranch_Parms
		{
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventReceivedUserCancelBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor|SlowTask" },
		{ "Comment", "/* Return if the SlowTask has been cancel by the user */" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "Return if the SlowTask has been cancel by the user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "ReceivedUserCancelBranch", nullptr, nullptr, sizeof(ElgEditorBP_Editor_eventReceivedUserCancelBranch_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics
	{
		struct ElgEditorBP_Editor_eventRestartEditor_Parms
		{
			bool bShowWarning;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowWarning_MetaData[];
#endif
		static void NewProp_bShowWarning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowWarning;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::NewProp_bShowWarning_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::NewProp_bShowWarning_SetBit(void* Obj)
	{
		((ElgEditorBP_Editor_eventRestartEditor_Parms*)Obj)->bShowWarning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::NewProp_bShowWarning = { "bShowWarning", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Editor_eventRestartEditor_Parms), &Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::NewProp_bShowWarning_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::NewProp_bShowWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::NewProp_bShowWarning_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::NewProp_bShowWarning,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor" },
		{ "Comment", "/* Restart the current project and the editor */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "Restart the current project and the editor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "RestartEditor", nullptr, nullptr, sizeof(ElgEditorBP_Editor_eventRestartEditor_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics
	{
		struct ElgEditorBP_Editor_eventStatusUpdate_Parms
		{
			int32 Numerator;
			int32 Denominator;
			FText StatusText;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Numerator;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Denominator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_StatusText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::NewProp_Numerator = { "Numerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventStatusUpdate_Parms, Numerator), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::NewProp_Denominator = { "Denominator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventStatusUpdate_Parms, Denominator), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::NewProp_StatusText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::NewProp_StatusText = { "StatusText", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventStatusUpdate_Parms, StatusText), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::NewProp_StatusText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::NewProp_StatusText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::NewProp_Numerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::NewProp_Denominator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::NewProp_StatusText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor|SlowTask" },
		{ "Comment", "/* Update the status of the SlowTask */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "Update the status of the SlowTask" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "StatusUpdate", nullptr, nullptr, sizeof(ElgEditorBP_Editor_eventStatusUpdate_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics
	{
		struct ElgEditorBP_Editor_eventSwitchProject_Parms
		{
			FString GameOrProjectFileName;
			bool bShowWarning;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameOrProjectFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameOrProjectFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowWarning_MetaData[];
#endif
		static void NewProp_bShowWarning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowWarning;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_GameOrProjectFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_GameOrProjectFileName = { "GameOrProjectFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventSwitchProject_Parms, GameOrProjectFileName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_GameOrProjectFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_GameOrProjectFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_bShowWarning_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_bShowWarning_SetBit(void* Obj)
	{
		((ElgEditorBP_Editor_eventSwitchProject_Parms*)Obj)->bShowWarning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_bShowWarning = { "bShowWarning", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Editor_eventSwitchProject_Parms), &Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_bShowWarning_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_bShowWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_bShowWarning_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_GameOrProjectFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::NewProp_bShowWarning,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor" },
		{ "Comment", "/* Switch project to GameOrProjectFileName */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "Switch project to GameOrProjectFileName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "SwitchProject", nullptr, nullptr, sizeof(ElgEditorBP_Editor_eventSwitchProject_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics
	{
		struct ElgEditorBP_Editor_eventUpdateProgress_Parms
		{
			int32 Numerator;
			int32 Denominator;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Numerator;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Denominator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::NewProp_Numerator = { "Numerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventUpdateProgress_Parms, Numerator), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::NewProp_Denominator = { "Denominator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Editor_eventUpdateProgress_Parms, Denominator), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::NewProp_Numerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::NewProp_Denominator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor|SlowTask" },
		{ "Comment", "/* Update the status of the SlowTask */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
		{ "ToolTip", "Update the status of the SlowTask" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Editor, nullptr, "UpdateProgress", nullptr, nullptr, sizeof(ElgEditorBP_Editor_eventUpdateProgress_Parms), Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElgEditorBP_Editor_NoRegister()
	{
		return UElgEditorBP_Editor::StaticClass();
	}
	struct Z_Construct_UClass_UElgEditorBP_Editor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgEditorBP_Editor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElgEditorBP_Editor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_BeginSlowTask, "BeginSlowTask" }, // 2899599783
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_CreateProc, "CreateProc" }, // 1636621883
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_EndSlowTask, "EndSlowTask" }, // 1195401862
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunning, "IsProcessRunning" }, // 2396132287
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_IsProcessRunningBranch, "IsProcessRunningBranch" }, // 1238765829
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_ReadTextFile, "ReadTextFile" }, // 1641770625
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancel, "ReceivedUserCancel" }, // 1171761858
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_ReceivedUserCancelBranch, "ReceivedUserCancelBranch" }, // 2416809210
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_RestartEditor, "RestartEditor" }, // 2437034150
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_StatusUpdate, "StatusUpdate" }, // 2153184628
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_SwitchProject, "SwitchProject" }, // 2230147344
		{ &Z_Construct_UFunction_UElgEditorBP_Editor_UpdateProgress, "UpdateProgress" }, // 4164419887
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorBP_Editor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Blueprints/ElgEditorBP_Editor.h" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Editor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgEditorBP_Editor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgEditorBP_Editor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgEditorBP_Editor_Statics::ClassParams = {
		&UElgEditorBP_Editor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UElgEditorBP_Editor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UElgEditorBP_Editor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgEditorBP_Editor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgEditorBP_Editor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgEditorBP_Editor, 631862096);
	template<> ELGEDITORSCRIPTING_API UClass* StaticClass<UElgEditorBP_Editor>()
	{
		return UElgEditorBP_Editor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgEditorBP_Editor(Z_Construct_UClass_UElgEditorBP_Editor, &UElgEditorBP_Editor::StaticClass, TEXT("/Script/ElgEditorScripting"), TEXT("UElgEditorBP_Editor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgEditorBP_Editor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
