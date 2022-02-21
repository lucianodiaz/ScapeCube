// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgEditorScripting/Public/EditorContexts/ElgEditorContext_Config.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgEditorContext_Config() {}
// Cross Module References
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_Config_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_Config();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ElgEditorScripting();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
// End Cross Module References
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadTextBranch)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Value);
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadTextBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadRotatorBranch)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value);
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadRotatorBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadVector4Branch)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value);
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadVector4Branch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadVectorBranch)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadVectorBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadVector2dBranch)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Value);
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadVector2dBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadColorBranch)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_Value);
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadColorBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadArrayBranch)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Value);
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadArrayBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadBoolBranch)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_UBOOL_REF(Z_Param_Out_Value);
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadBoolBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadFloatBranch)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadFloatBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadIntBranch)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadIntBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadStringBranch)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadStringBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadText(Z_Param_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadRotator)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadRotator(Z_Param_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadVector4)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadVector4(Z_Param_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadVector)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadVector(Z_Param_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadVector2d)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadVector2d(Z_Param_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadColor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadColor(Z_Param_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadArray(Z_Param_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_UBOOL_REF(Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadBool(Z_Param_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadFloat(Z_Param_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadInt(Z_Param_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execReadString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadString(Z_Param_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execWriteText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FTextProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteText(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execWriteRotator)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT(FRotator,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteRotator(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execWriteVector4)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT(FVector4,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteVector4(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execWriteVector)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteVector(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execWriteVector2d)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT(FVector2D,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteVector2d(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execWriteColor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT(FColor,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteColor(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execWriteArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteArray(Z_Param_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execWriteBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteBool(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execWriteFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteFloat(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execWriteInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteInt(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execWriteString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteString(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execHasKeyBranch)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HasKeyBranch(Z_Param_Key,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execHasKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasKey(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execRemoveKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveKey(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execGetKeys)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Keys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetKeys(Z_Param_Out_Keys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execGetKeyValuesAsStrings)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_ConfigData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetKeyValuesAsStrings(Z_Param_Out_ConfigData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execDoesExistBranch)
	{
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoesExistBranch((EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorContext_Config::execDoesExist)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesExist();
		P_NATIVE_END;
	}
	void UElgEditorContext_Config::StaticRegisterNativesUElgEditorContext_Config()
	{
		UClass* Class = UElgEditorContext_Config::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UElgEditorContext_Config::execClear },
			{ "DoesExist", &UElgEditorContext_Config::execDoesExist },
			{ "DoesExistBranch", &UElgEditorContext_Config::execDoesExistBranch },
			{ "GetKeys", &UElgEditorContext_Config::execGetKeys },
			{ "GetKeyValuesAsStrings", &UElgEditorContext_Config::execGetKeyValuesAsStrings },
			{ "HasKey", &UElgEditorContext_Config::execHasKey },
			{ "HasKeyBranch", &UElgEditorContext_Config::execHasKeyBranch },
			{ "ReadArray", &UElgEditorContext_Config::execReadArray },
			{ "ReadArrayBranch", &UElgEditorContext_Config::execReadArrayBranch },
			{ "ReadBool", &UElgEditorContext_Config::execReadBool },
			{ "ReadBoolBranch", &UElgEditorContext_Config::execReadBoolBranch },
			{ "ReadColor", &UElgEditorContext_Config::execReadColor },
			{ "ReadColorBranch", &UElgEditorContext_Config::execReadColorBranch },
			{ "ReadFloat", &UElgEditorContext_Config::execReadFloat },
			{ "ReadFloatBranch", &UElgEditorContext_Config::execReadFloatBranch },
			{ "ReadInt", &UElgEditorContext_Config::execReadInt },
			{ "ReadIntBranch", &UElgEditorContext_Config::execReadIntBranch },
			{ "ReadRotator", &UElgEditorContext_Config::execReadRotator },
			{ "ReadRotatorBranch", &UElgEditorContext_Config::execReadRotatorBranch },
			{ "ReadString", &UElgEditorContext_Config::execReadString },
			{ "ReadStringBranch", &UElgEditorContext_Config::execReadStringBranch },
			{ "ReadText", &UElgEditorContext_Config::execReadText },
			{ "ReadTextBranch", &UElgEditorContext_Config::execReadTextBranch },
			{ "ReadVector", &UElgEditorContext_Config::execReadVector },
			{ "ReadVector2d", &UElgEditorContext_Config::execReadVector2d },
			{ "ReadVector2dBranch", &UElgEditorContext_Config::execReadVector2dBranch },
			{ "ReadVector4", &UElgEditorContext_Config::execReadVector4 },
			{ "ReadVector4Branch", &UElgEditorContext_Config::execReadVector4Branch },
			{ "ReadVectorBranch", &UElgEditorContext_Config::execReadVectorBranch },
			{ "RemoveKey", &UElgEditorContext_Config::execRemoveKey },
			{ "WriteArray", &UElgEditorContext_Config::execWriteArray },
			{ "WriteBool", &UElgEditorContext_Config::execWriteBool },
			{ "WriteColor", &UElgEditorContext_Config::execWriteColor },
			{ "WriteFloat", &UElgEditorContext_Config::execWriteFloat },
			{ "WriteInt", &UElgEditorContext_Config::execWriteInt },
			{ "WriteRotator", &UElgEditorContext_Config::execWriteRotator },
			{ "WriteString", &UElgEditorContext_Config::execWriteString },
			{ "WriteText", &UElgEditorContext_Config::execWriteText },
			{ "WriteVector", &UElgEditorContext_Config::execWriteVector },
			{ "WriteVector2d", &UElgEditorContext_Config::execWriteVector2d },
			{ "WriteVector4", &UElgEditorContext_Config::execWriteVector4 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics
	{
		struct ElgEditorContext_Config_eventClear_Parms
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
	void Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventClear_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventClear_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config" },
		{ "Comment", "/* Clear the config section of all the data. */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Clear the config section of all the data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "Clear", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventClear_Parms), Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics
	{
		struct ElgEditorContext_Config_eventDoesExist_Parms
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
	void Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventDoesExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventDoesExist_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config" },
		{ "Comment", "/* Return if the config section exist or not */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Return if the config section exist or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "DoesExist", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventDoesExist_Parms), Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_DoesExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics
	{
		struct ElgEditorContext_Config_eventDoesExistBranch_Parms
		{
			EBPEditorOutputValidBranch Branches;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventDoesExistBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config" },
		{ "Comment", "/* Return if the config section exist or not with a branches */" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Return if the config section exist or not with a branches" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "DoesExistBranch", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventDoesExistBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics
	{
		struct ElgEditorContext_Config_eventGetKeys_Parms
		{
			TArray<FString> Keys;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keys_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventGetKeys_Parms, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::NewProp_Keys,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config" },
		{ "Comment", "/* Get an array with all the keys and value in the config */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Get an array with all the keys and value in the config" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "GetKeys", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventGetKeys_Parms), Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_GetKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics
	{
		struct ElgEditorContext_Config_eventGetKeyValuesAsStrings_Parms
		{
			TArray<FString> ConfigData;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConfigData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::NewProp_ConfigData_Inner = { "ConfigData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::NewProp_ConfigData = { "ConfigData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventGetKeyValuesAsStrings_Parms, ConfigData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::NewProp_ConfigData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::NewProp_ConfigData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config" },
		{ "Comment", "/* Get an array with all the keys and value in the config */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Get an array with all the keys and value in the config" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "GetKeyValuesAsStrings", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventGetKeyValuesAsStrings_Parms), Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics
	{
		struct ElgEditorContext_Config_eventHasKey_Parms
		{
			FString Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventHasKey_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventHasKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventHasKey_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config" },
		{ "Comment", "/* Return if the key exist or not */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Return if the key exist or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "HasKey", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventHasKey_Parms), Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_HasKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics
	{
		struct ElgEditorContext_Config_eventHasKeyBranch_Parms
		{
			FString Key;
			EBPEditorOutputValidBranch Branches;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventHasKeyBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventHasKeyBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config" },
		{ "Comment", "/* Return if the key exist with a branch pins */" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Return if the key exist with a branch pins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "HasKeyBranch", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventHasKeyBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics
	{
		struct ElgEditorContext_Config_eventReadArray_Parms
		{
			FString Key;
			TArray<FString> Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadArray_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_Value_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a string array from a config file.\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a string array from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadArray", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadArray_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadArrayBranch_Parms
		{
			FString Key;
			TArray<FString> Value;
			EBPEditorOutputValidBranch Branches;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadArrayBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadArrayBranch_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadArrayBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Value_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a string array from a config file with Branch pins\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a string array from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadArrayBranch", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadArrayBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics
	{
		struct ElgEditorContext_Config_eventReadBool_Parms
		{
			FString Key;
			bool Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadBool_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadBool_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadBool_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadBool_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a bool from a config file.\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a bool from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadBool", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadBool_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadBoolBranch_Parms
		{
			FString Key;
			bool Value;
			EBPEditorOutputValidBranch Branches;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadBoolBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadBoolBranch_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadBoolBranch_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadBoolBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a bool from a config file with Branch pins\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a bool from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadBoolBranch", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadBoolBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics
	{
		struct ElgEditorContext_Config_eventReadColor_Parms
		{
			FString Key;
			FColor Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadColor_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadColor_Parms, Value), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadColor_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a FColor from a config file.\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FColor from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadColor", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadColor_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadColorBranch_Parms
		{
			FString Key;
			FColor Value;
			EBPEditorOutputValidBranch Branches;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadColorBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadColorBranch_Parms, Value), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadColorBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a FColor from a config file with Branch pins\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FColor from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadColorBranch", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadColorBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics
	{
		struct ElgEditorContext_Config_eventReadFloat_Parms
		{
			FString Key;
			float Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadFloat_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadFloat_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a float from a config file.\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a float from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadFloat", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadFloat_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadFloatBranch_Parms
		{
			FString Key;
			float Value;
			EBPEditorOutputValidBranch Branches;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadFloatBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadFloatBranch_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadFloatBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a float from a config file with Branch pins\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a float from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadFloatBranch", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadFloatBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics
	{
		struct ElgEditorContext_Config_eventReadInt_Parms
		{
			FString Key;
			int32 Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadInt_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadInt_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a int from a config file.\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a int from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadInt", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadInt_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadIntBranch_Parms
		{
			FString Key;
			int32 Value;
			EBPEditorOutputValidBranch Branches;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadIntBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadIntBranch_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadIntBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a int from a config file with Branch pins\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a int from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadIntBranch", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadIntBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics
	{
		struct ElgEditorContext_Config_eventReadRotator_Parms
		{
			FString Key;
			FRotator Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadRotator_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadRotator_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadRotator_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadRotator_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a FRotator from a config file.\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FRotator from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadRotator", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadRotator_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadRotatorBranch_Parms
		{
			FString Key;
			FRotator Value;
			EBPEditorOutputValidBranch Branches;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadRotatorBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadRotatorBranch_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadRotatorBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a FRotator from a config file with Branch pins\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FRotator from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadRotatorBranch", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadRotatorBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics
	{
		struct ElgEditorContext_Config_eventReadString_Parms
		{
			FString Key;
			FString Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadString_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadString_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/*\n\x09\x09Read a string from a config file.\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a string from a config file.\n@param Key Name of the key to read.\n@param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadString", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadString_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadStringBranch_Parms
		{
			FString Key;
			FString Value;
			EBPEditorOutputValidBranch Branches;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadStringBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadStringBranch_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadStringBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/*\n\x09\x09Read a string from a config file with Branch pins\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a string from a config file with Branch pins\n@param Key Name of the key to read.\n@param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadStringBranch", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadStringBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics
	{
		struct ElgEditorContext_Config_eventReadText_Parms
		{
			FString Key;
			FText Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadText_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadText_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadText_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a FText from a config file.\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FText from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadText", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadText_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadTextBranch_Parms
		{
			FString Key;
			FText Value;
			EBPEditorOutputValidBranch Branches;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadTextBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadTextBranch_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadTextBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a FText from a config file with Branch pins\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FText from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadTextBranch", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadTextBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics
	{
		struct ElgEditorContext_Config_eventReadVector_Parms
		{
			FString Key;
			FVector Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadVector_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadVector_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a FVector from a config file.\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FVector from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadVector", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadVector_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics
	{
		struct ElgEditorContext_Config_eventReadVector2d_Parms
		{
			FString Key;
			FVector2D Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector2d_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector2d_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadVector2d_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadVector2d_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a FVector2D from a config file.\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FVector2D from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadVector2d", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadVector2d_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadVector2dBranch_Parms
		{
			FString Key;
			FVector2D Value;
			EBPEditorOutputValidBranch Branches;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector2dBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector2dBranch_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector2dBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a FVector2D from a config file with Branch pins\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FVector2D from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadVector2dBranch", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadVector2dBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics
	{
		struct ElgEditorContext_Config_eventReadVector4_Parms
		{
			FString Key;
			FVector4 Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector4_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector4_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadVector4_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadVector4_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a FVector4 from a config file.\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FVector4 from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadVector4", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadVector4_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics
	{
		struct ElgEditorContext_Config_eventReadVector4Branch_Parms
		{
			FString Key;
			FVector4 Value;
			EBPEditorOutputValidBranch Branches;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector4Branch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector4Branch_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector4Branch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a FVector4 from a config file with Branch pins\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FVector4 from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadVector4Branch", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadVector4Branch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadVectorBranch_Parms
		{
			FString Key;
			FVector Value;
			EBPEditorOutputValidBranch Branches;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVectorBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVectorBranch_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVectorBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "Comment", "/* Read a FVector from a config file with Branch pins\n\x09\x09@param Key Name of the key to read.\n\x09\x09@param Value The value of the config key.\n\x09*/" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FVector from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadVectorBranch", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventReadVectorBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics
	{
		struct ElgEditorContext_Config_eventRemoveKey_Parms
		{
			FString Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventRemoveKey_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventRemoveKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventRemoveKey_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config" },
		{ "Comment", "/* Remove a key from the config */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Remove a key from the config" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "RemoveKey", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventRemoveKey_Parms), Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics
	{
		struct ElgEditorContext_Config_eventWriteArray_Parms
		{
			FString Key;
			TArray<FString> Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Value_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "Comment", "/* Write a string array to a config file */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a string array to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteArray", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventWriteArray_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics
	{
		struct ElgEditorContext_Config_eventWriteBool_Parms
		{
			FString Key;
			bool Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteBool_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventWriteBool_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventWriteBool_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "Comment", "/* Write a bool to a config file */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a bool to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteBool", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventWriteBool_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics
	{
		struct ElgEditorContext_Config_eventWriteColor_Parms
		{
			FString Key;
			FColor Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteColor_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteColor_Parms, Value), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "Comment", "/* Write a FColor to a config file */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a FColor to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteColor", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventWriteColor_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics
	{
		struct ElgEditorContext_Config_eventWriteFloat_Parms
		{
			FString Key;
			float Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteFloat_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteFloat_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "Comment", "/* Write a float to a config file */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a float to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteFloat", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventWriteFloat_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics
	{
		struct ElgEditorContext_Config_eventWriteInt_Parms
		{
			FString Key;
			int32 Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteInt_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteInt_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "Comment", "/* Write a string to a config file */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a string to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteInt", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventWriteInt_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics
	{
		struct ElgEditorContext_Config_eventWriteRotator_Parms
		{
			FString Key;
			FRotator Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteRotator_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteRotator_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "Comment", "/* Write a FRotator to a config file */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a FRotator to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteRotator", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventWriteRotator_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics
	{
		struct ElgEditorContext_Config_eventWriteString_Parms
		{
			FString Key;
			FString Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteString_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteString_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "Comment", "/* Write a string to a config file */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a string to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteString", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventWriteString_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics
	{
		struct ElgEditorContext_Config_eventWriteText_Parms
		{
			FString Key;
			FText Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteText_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteText_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "Comment", "/* Write a FText to a config file */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a FText to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteText", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventWriteText_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics
	{
		struct ElgEditorContext_Config_eventWriteVector_Parms
		{
			FString Key;
			FVector Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteVector_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "Comment", "/* Write a FVector to a config file */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a FVector to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteVector", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventWriteVector_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics
	{
		struct ElgEditorContext_Config_eventWriteVector2d_Parms
		{
			FString Key;
			FVector2D Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteVector2d_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteVector2d_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "Comment", "/* Write a FVector2D to a config file */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a FVector2D to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteVector2d", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventWriteVector2d_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics
	{
		struct ElgEditorContext_Config_eventWriteVector4_Parms
		{
			FString Key;
			FVector4 Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteVector4_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteVector4_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "Comment", "/* Write a FVector4 to a config file */" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a FVector4 to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteVector4", nullptr, nullptr, sizeof(ElgEditorContext_Config_eventWriteVector4_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElgEditorContext_Config_NoRegister()
	{
		return UElgEditorContext_Config::StaticClass();
	}
	struct Z_Construct_UClass_UElgEditorContext_Config_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Section;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgEditorContext_Config_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElgEditorContext_Config_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElgEditorContext_Config_Clear, "Clear" }, // 3335201200
		{ &Z_Construct_UFunction_UElgEditorContext_Config_DoesExist, "DoesExist" }, // 1283548381
		{ &Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch, "DoesExistBranch" }, // 2594277874
		{ &Z_Construct_UFunction_UElgEditorContext_Config_GetKeys, "GetKeys" }, // 389846348
		{ &Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings, "GetKeyValuesAsStrings" }, // 4228402399
		{ &Z_Construct_UFunction_UElgEditorContext_Config_HasKey, "HasKey" }, // 1892672315
		{ &Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch, "HasKeyBranch" }, // 1978652362
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadArray, "ReadArray" }, // 2967915251
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch, "ReadArrayBranch" }, // 3195896804
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadBool, "ReadBool" }, // 3819238647
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch, "ReadBoolBranch" }, // 3861261929
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadColor, "ReadColor" }, // 25478196
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch, "ReadColorBranch" }, // 3157202042
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat, "ReadFloat" }, // 4195356472
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch, "ReadFloatBranch" }, // 2465337101
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadInt, "ReadInt" }, // 1456087059
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch, "ReadIntBranch" }, // 2348070114
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator, "ReadRotator" }, // 3054548768
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch, "ReadRotatorBranch" }, // 4073423514
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadString, "ReadString" }, // 3666331803
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch, "ReadStringBranch" }, // 2468052483
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadText, "ReadText" }, // 3165905012
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch, "ReadTextBranch" }, // 4148481795
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadVector, "ReadVector" }, // 3998902320
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d, "ReadVector2d" }, // 2750168153
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch, "ReadVector2dBranch" }, // 4062525337
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4, "ReadVector4" }, // 4176264938
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch, "ReadVector4Branch" }, // 1685959433
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch, "ReadVectorBranch" }, // 427891210
		{ &Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey, "RemoveKey" }, // 520722932
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteArray, "WriteArray" }, // 2954753432
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteBool, "WriteBool" }, // 2154129828
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteColor, "WriteColor" }, // 2488905158
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat, "WriteFloat" }, // 1665720665
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteInt, "WriteInt" }, // 469847614
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator, "WriteRotator" }, // 2050514573
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteString, "WriteString" }, // 1535511813
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteText, "WriteText" }, // 1841395341
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteVector, "WriteVector" }, // 2912492678
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d, "WriteVector2d" }, // 1729059853
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4, "WriteVector4" }, // 2019899260
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_Config_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  \n */" },
		{ "IncludePath", "EditorContexts/ElgEditorContext_Config.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ElgEditorContext_Config" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgEditorContext_Config, Name), METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Section_MetaData[] = {
		{ "Category", "ElgEditorContext_Config" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgEditorContext_Config, Section), METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Section_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "ElgEditorContext_Config" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgEditorContext_Config, Path), METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElgEditorContext_Config_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Section,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Path,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgEditorContext_Config_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgEditorContext_Config>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgEditorContext_Config_Statics::ClassParams = {
		&UElgEditorContext_Config::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UElgEditorContext_Config_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Config_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_Config_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Config_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgEditorContext_Config()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgEditorContext_Config_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgEditorContext_Config, 2289505892);
	template<> ELGEDITORSCRIPTING_API UClass* StaticClass<UElgEditorContext_Config>()
	{
		return UElgEditorContext_Config::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgEditorContext_Config(Z_Construct_UClass_UElgEditorContext_Config, &UElgEditorContext_Config::StaticClass, TEXT("/Script/ElgEditorScripting"), TEXT("UElgEditorContext_Config"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgEditorContext_Config);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
