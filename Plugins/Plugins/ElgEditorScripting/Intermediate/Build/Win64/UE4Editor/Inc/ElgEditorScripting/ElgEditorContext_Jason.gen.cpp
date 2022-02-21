// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgEditorScripting/Public/EditorContexts/ElgEditorContext_Jason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgEditorContext_Jason() {}
// Cross Module References
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_Jason_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_Jason();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ElgEditorScripting();
// End Cross Module References
	DEFINE_FUNCTION(UElgEditorContext_Jason::execSaveToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_UBOOL(Z_Param_bPrettyPolicy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveToFile(Z_Param_FilePath,Z_Param_bPrettyPolicy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Jason::execToString)
	{
		P_GET_UBOOL(Z_Param_bPrettyPolicy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToString(Z_Param_bPrettyPolicy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Jason::execSetBoolField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolField(Z_Param_FieldName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Jason::execSetNumberField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumberField(Z_Param_FieldName,Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Jason::execSetStringField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FStrProperty,Z_Param_StringValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStringField(Z_Param_FieldName,Z_Param_StringValue);
		P_NATIVE_END;
	}
	void UElgEditorContext_Jason::StaticRegisterNativesUElgEditorContext_Jason()
	{
		UClass* Class = UElgEditorContext_Jason::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveToFile", &UElgEditorContext_Jason::execSaveToFile },
			{ "SetBoolField", &UElgEditorContext_Jason::execSetBoolField },
			{ "SetNumberField", &UElgEditorContext_Jason::execSetNumberField },
			{ "SetStringField", &UElgEditorContext_Jason::execSetStringField },
			{ "ToString", &UElgEditorContext_Jason::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile_Statics
	{
		struct ElgEditorContext_Jason_eventSaveToFile_Parms
		{
			FString FilePath;
			bool bPrettyPolicy;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_bPrettyPolicy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrettyPolicy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Jason_eventSaveToFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile_Statics::NewProp_FilePath_MetaData)) };
	void Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile_Statics::NewProp_bPrettyPolicy_SetBit(void* Obj)
	{
		((ElgEditorContext_Jason_eventSaveToFile_Parms*)Obj)->bPrettyPolicy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile_Statics::NewProp_bPrettyPolicy = { "bPrettyPolicy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Jason_eventSaveToFile_Parms), &Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile_Statics::NewProp_bPrettyPolicy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile_Statics::NewProp_bPrettyPolicy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Jason" },
		{ "CPP_Default_bPrettyPolicy", "true" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Jason.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Jason, nullptr, "SaveToFile", nullptr, nullptr, sizeof(ElgEditorContext_Jason_eventSaveToFile_Parms), Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField_Statics
	{
		struct ElgEditorContext_Jason_eventSetBoolField_Parms
		{
			FString FieldName;
			bool InValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static void NewProp_InValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Jason_eventSetBoolField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField_Statics::NewProp_FieldName_MetaData)) };
	void Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Jason_eventSetBoolField_Parms*)Obj)->InValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Jason_eventSetBoolField_Parms), &Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Jason" },
		{ "Comment", "/** Set a boolean field named FieldName and value of InValue */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Jason.h" },
		{ "ToolTip", "Set a boolean field named FieldName and value of InValue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Jason, nullptr, "SetBoolField", nullptr, nullptr, sizeof(ElgEditorContext_Jason_eventSetBoolField_Parms), Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Jason_SetNumberField_Statics
	{
		struct ElgEditorContext_Jason_eventSetNumberField_Parms
		{
			FString FieldName;
			float Number;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Number;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Jason_SetNumberField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Jason_SetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Jason_eventSetNumberField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Jason_SetNumberField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Jason_SetNumberField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UElgEditorContext_Jason_SetNumberField_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Jason_eventSetNumberField_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Jason_SetNumberField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Jason_SetNumberField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Jason_SetNumberField_Statics::NewProp_Number,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Jason_SetNumberField_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Jason" },
		{ "Comment", "/** Add a field named FieldName with Number as value */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Jason.h" },
		{ "ToolTip", "Add a field named FieldName with Number as value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Jason_SetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Jason, nullptr, "SetNumberField", nullptr, nullptr, sizeof(ElgEditorContext_Jason_eventSetNumberField_Parms), Z_Construct_UFunction_UElgEditorContext_Jason_SetNumberField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Jason_SetNumberField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Jason_SetNumberField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Jason_SetNumberField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Jason_SetNumberField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Jason_SetNumberField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField_Statics
	{
		struct ElgEditorContext_Jason_eventSetStringField_Parms
		{
			FString FieldName;
			FString StringValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Jason_eventSetStringField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField_Statics::NewProp_StringValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Jason_eventSetStringField_Parms, StringValue), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField_Statics::NewProp_StringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField_Statics::NewProp_StringValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField_Statics::NewProp_StringValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Jason" },
		{ "Comment", "/** Add a field named FieldName with value of StringValue */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Jason.h" },
		{ "ToolTip", "Add a field named FieldName with value of StringValue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Jason, nullptr, "SetStringField", nullptr, nullptr, sizeof(ElgEditorContext_Jason_eventSetStringField_Parms), Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Jason_ToString_Statics
	{
		struct ElgEditorContext_Jason_eventToString_Parms
		{
			bool bPrettyPolicy;
			FString ReturnValue;
		};
		static void NewProp_bPrettyPolicy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrettyPolicy;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_Jason_ToString_Statics::NewProp_bPrettyPolicy_SetBit(void* Obj)
	{
		((ElgEditorContext_Jason_eventToString_Parms*)Obj)->bPrettyPolicy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Jason_ToString_Statics::NewProp_bPrettyPolicy = { "bPrettyPolicy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Jason_eventToString_Parms), &Z_Construct_UFunction_UElgEditorContext_Jason_ToString_Statics::NewProp_bPrettyPolicy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Jason_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Jason_eventToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Jason_ToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Jason_ToString_Statics::NewProp_bPrettyPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Jason_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Jason_ToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Jason" },
		{ "CPP_Default_bPrettyPolicy", "true" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Jason.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Jason_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Jason, nullptr, "ToString", nullptr, nullptr, sizeof(ElgEditorContext_Jason_eventToString_Parms), Z_Construct_UFunction_UElgEditorContext_Jason_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Jason_ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Jason_ToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Jason_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Jason_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Jason_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElgEditorContext_Jason_NoRegister()
	{
		return UElgEditorContext_Jason::StaticClass();
	}
	struct Z_Construct_UClass_UElgEditorContext_Jason_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgEditorContext_Jason_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElgEditorContext_Jason_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElgEditorContext_Jason_SaveToFile, "SaveToFile" }, // 1159169311
		{ &Z_Construct_UFunction_UElgEditorContext_Jason_SetBoolField, "SetBoolField" }, // 3372088315
		{ &Z_Construct_UFunction_UElgEditorContext_Jason_SetNumberField, "SetNumberField" }, // 764342342
		{ &Z_Construct_UFunction_UElgEditorContext_Jason_SetStringField, "SetStringField" }, // 1377719730
		{ &Z_Construct_UFunction_UElgEditorContext_Jason_ToString, "ToString" }, // 786939956
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_Jason_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EditorContexts/ElgEditorContext_Jason.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Jason.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_Jason_Statics::NewProp_OutputString_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Jason.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UElgEditorContext_Jason_Statics::NewProp_OutputString = { "OutputString", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgEditorContext_Jason, OutputString), METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_Jason_Statics::NewProp_OutputString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Jason_Statics::NewProp_OutputString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElgEditorContext_Jason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgEditorContext_Jason_Statics::NewProp_OutputString,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgEditorContext_Jason_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgEditorContext_Jason>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgEditorContext_Jason_Statics::ClassParams = {
		&UElgEditorContext_Jason::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UElgEditorContext_Jason_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Jason_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_Jason_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Jason_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgEditorContext_Jason()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgEditorContext_Jason_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgEditorContext_Jason, 1763027641);
	template<> ELGEDITORSCRIPTING_API UClass* StaticClass<UElgEditorContext_Jason>()
	{
		return UElgEditorContext_Jason::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgEditorContext_Jason(Z_Construct_UClass_UElgEditorContext_Jason, &UElgEditorContext_Jason::StaticClass, TEXT("/Script/ElgEditorScripting"), TEXT("UElgEditorContext_Jason"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgEditorContext_Jason);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
