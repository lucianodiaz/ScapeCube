// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgEditorScripting/Public/Blueprints/ElgEditorBP_Assets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgEditorBP_Assets() {}
// Cross Module References
	ELGEDITORSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FS_ElgAssetMetaData();
	UPackage* Z_Construct_UPackage__Script_ElgEditorScripting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_Assets_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_Assets();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
// End Cross Module References
class UScriptStruct* FS_ElgAssetMetaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELGEDITORSCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_ElgAssetMetaData, Z_Construct_UPackage__Script_ElgEditorScripting(), TEXT("S_ElgAssetMetaData"), sizeof(FS_ElgAssetMetaData), Get_Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Hash());
	}
	return Singleton;
}
template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<FS_ElgAssetMetaData>()
{
	return FS_ElgAssetMetaData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FS_ElgAssetMetaData(FS_ElgAssetMetaData::StaticStruct, TEXT("/Script/ElgEditorScripting"), TEXT("S_ElgAssetMetaData"), false, nullptr, nullptr);
static struct FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgAssetMetaData
{
	FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgAssetMetaData()
	{
		UScriptStruct::DeferCppStructOps<FS_ElgAssetMetaData>(FName(TEXT("S_ElgAssetMetaData")));
	}
} ScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgAssetMetaData;
	struct Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MetaData_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MetaData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_ElgAssetMetaData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "AssetMetaData" },
		{ "Comment", "/* The owner object of the meta data */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "The owner object of the meta data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgAssetMetaData, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "AssetMetaData" },
		{ "Comment", "/* Sorted Meta Data keys */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Sorted Meta Data keys" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgAssetMetaData, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Keys_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_MetaData_ValueProp = { "MetaData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_MetaData_Key_KeyProp = { "MetaData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_MetaData_MetaData[] = {
		{ "Category", "AssetMetaData" },
		{ "Comment", "/* The real Meta Data map */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "The real Meta Data map" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgAssetMetaData, MetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_MetaData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_MetaData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_MetaData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_MetaData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
		nullptr,
		&NewStructOps,
		"S_ElgAssetMetaData",
		sizeof(FS_ElgAssetMetaData),
		alignof(FS_ElgAssetMetaData),
		Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_ElgAssetMetaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ElgEditorScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("S_ElgAssetMetaData"), sizeof(FS_ElgAssetMetaData), Get_Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Hash() { return 2673304706U; }
	DEFINE_FUNCTION(UElgEditorBP_Assets::execDiffAssetWithExternalAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_NewAsset);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExternalAssetFilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExternalAssetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::DiffAssetWithExternalAsset(Z_Param_NewAsset,Z_Param_ExternalAssetFilePath,Z_Param_ExternalAssetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execDiffAssetPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OldAssetPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewAssetPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_OldAssetRevisionString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::DiffAssetPath(Z_Param_OldAssetPath,Z_Param_NewAssetPath,Z_Param_OldAssetRevisionString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execDiffAssetData)
	{
		P_GET_STRUCT(FAssetData,Z_Param_OldAsset);
		P_GET_STRUCT(FAssetData,Z_Param_NewAsset);
		P_GET_PROPERTY(FStrProperty,Z_Param_OldAssetRevisionString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::DiffAssetData(Z_Param_OldAsset,Z_Param_NewAsset,Z_Param_OldAssetRevisionString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execDiffAssets)
	{
		P_GET_OBJECT(UObject,Z_Param_OldAsset);
		P_GET_OBJECT(UObject,Z_Param_NewAsset);
		P_GET_PROPERTY(FStrProperty,Z_Param_OldAssetRevisionString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::DiffAssets(Z_Param_OldAsset,Z_Param_NewAsset,Z_Param_OldAssetRevisionString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execNewAssetPathToDiskPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InAssetPath);
		P_GET_UBOOL_REF(Z_Param_Out_bIsWorldAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UElgEditorBP_Assets::NewAssetPathToDiskPath(Z_Param_InAssetPath,Z_Param_Out_bIsWorldAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execAssetPathsToDiskPaths)
	{
		P_GET_TARRAY(FString,Z_Param_InAssetPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UElgEditorBP_Assets::AssetPathsToDiskPaths(Z_Param_InAssetPaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execAssetPathToDiskPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InAssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UElgEditorBP_Assets::AssetPathToDiskPath(Z_Param_InAssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetSelectedPaths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UElgEditorBP_Assets::GetSelectedPaths();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execHasAssetRefs)
	{
		P_GET_STRUCT(FAssetData,Z_Param_AssetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UElgEditorBP_Assets::HasAssetRefs(Z_Param_AssetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetDependenciesByObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Dependencies);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::GetAssetDependenciesByObject(Z_Param_Object,Z_Param_Out_Dependencies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetDependenciesByPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Dependencies);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::GetAssetDependenciesByPath(Z_Param_AssetPath,Z_Param_Out_Dependencies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetDependencies)
	{
		P_GET_STRUCT(FAssetData,Z_Param_AssetData);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Dependencies);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::GetAssetDependencies(Z_Param_AssetData,Z_Param_Out_Dependencies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetReferencersByObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Referencers);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::GetAssetReferencersByObject(Z_Param_Object,Z_Param_Out_Referencers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetReferencersByPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Referencers);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::GetAssetReferencersByPath(Z_Param_AssetPath,Z_Param_Out_Referencers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetReferencers)
	{
		P_GET_STRUCT(FAssetData,Z_Param_AssetData);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Referencers);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::GetAssetReferencers(Z_Param_AssetData,Z_Param_Out_Referencers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetObjectMetaDataBranch)
	{
		P_GET_OBJECT(UObject,Z_Param_AssetObject);
		P_GET_STRUCT_REF(FS_ElgAssetMetaData,Z_Param_Out_MetaData);
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::GetAssetObjectMetaDataBranch(Z_Param_AssetObject,Z_Param_Out_MetaData,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetObjectMetaData)
	{
		P_GET_OBJECT(UObject,Z_Param_AssetObject);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_GET_STRUCT_REF(FS_ElgAssetMetaData,Z_Param_Out_MetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::GetAssetObjectMetaData(Z_Param_AssetObject,Z_Param_Out_Success,Z_Param_Out_MetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetMetaDataKeyBranch)
	{
		P_GET_OBJECT(UObject,Z_Param_AssetObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UElgEditorBP_Assets::GetMetaDataKeyBranch(Z_Param_AssetObject,Z_Param_Key,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetObjectsWithMetaDataKey)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetObjects);
		P_GET_PROPERTY(FNameProperty,Z_Param_MetaDataKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<UObject*,FS_ElgAssetMetaData>*)Z_Param__Result=UElgEditorBP_Assets::GetAssetObjectsWithMetaDataKey(Z_Param_Out_AssetObjects,Z_Param_MetaDataKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetObjectsMetaData)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetObjects);
		P_GET_UBOOL(Z_Param_SkipWithoutMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<UObject*,FS_ElgAssetMetaData>*)Z_Param__Result=UElgEditorBP_Assets::GetAssetObjectsMetaData(Z_Param_Out_AssetObjects,Z_Param_SkipWithoutMetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetObjectsByPath)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_AssetPaths);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::GetAssetObjectsByPath(Z_Param_Out_AssetPaths,Z_Param_Out_AssetObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetObjects)
	{
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetDataStructs);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::GetAssetObjects(Z_Param_Out_AssetDataStructs,Z_Param_Out_AssetObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetObjectByPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InAssetPath);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_AssetObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::GetAssetObjectByPath(Z_Param_InAssetPath,Z_Param_Out_AssetObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetPackage)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPackage**)Z_Param__Result=UElgEditorBP_Assets::GetPackage(Z_Param_Out_AssetDataStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execIsAssetUWorldType)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UElgEditorBP_Assets::IsAssetUWorldType(Z_Param_Out_AssetDataStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetPath)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UElgEditorBP_Assets::GetAssetPath(Z_Param_Out_AssetDataStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetName)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UElgEditorBP_Assets::GetAssetName(Z_Param_Out_AssetDataStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetDatasByPath)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_AssetPaths);
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetDatas);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::GetAssetDatasByPath(Z_Param_Out_AssetPaths,Z_Param_Out_AssetDatas);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetPathFromObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UElgEditorBP_Assets::GetAssetPathFromObject(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetDataFromObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAssetData*)Z_Param__Result=UElgEditorBP_Assets::GetAssetDataFromObject(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetDataFromPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAssetData*)Z_Param__Result=UElgEditorBP_Assets::GetAssetDataFromPath(Z_Param_AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetMetaDataBranch)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct);
		P_GET_STRUCT_REF(FS_ElgAssetMetaData,Z_Param_Out_MetaData);
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::GetAssetMetaDataBranch(Z_Param_Out_AssetDataStruct,Z_Param_Out_MetaData,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetMetaData)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_GET_STRUCT_REF(FS_ElgAssetMetaData,Z_Param_Out_MetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::GetAssetMetaData(Z_Param_Out_AssetDataStruct,Z_Param_Out_Success,Z_Param_Out_MetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetDiskPath)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UElgEditorBP_Assets::GetAssetDiskPath(Z_Param_Out_AssetDataStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetDateModifiedAsString)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AssetDateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::GetAssetDateModifiedAsString(Z_Param_Out_AssetDataStruct,Z_Param_Out_AssetDateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetDateModified)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct);
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_AssetDateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::GetAssetDateModified(Z_Param_Out_AssetDataStruct,Z_Param_Out_AssetDateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execGetAssetTags)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct);
		P_GET_TMAP_REF(FName,FString,Z_Param_Out_Tags);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::GetAssetTags(Z_Param_Out_AssetDataStruct,Z_Param_Out_Tags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execFixRedirectorsByPath)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Path);
		P_GET_UBOOL(Z_Param_RecursivePaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::FixRedirectorsByPath(Z_Param_Path,Z_Param_RecursivePaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_Assets::execFixRedirectors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_Assets::FixRedirectors();
		P_NATIVE_END;
	}
	void UElgEditorBP_Assets::StaticRegisterNativesUElgEditorBP_Assets()
	{
		UClass* Class = UElgEditorBP_Assets::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssetPathsToDiskPaths", &UElgEditorBP_Assets::execAssetPathsToDiskPaths },
			{ "AssetPathToDiskPath", &UElgEditorBP_Assets::execAssetPathToDiskPath },
			{ "DiffAssetData", &UElgEditorBP_Assets::execDiffAssetData },
			{ "DiffAssetPath", &UElgEditorBP_Assets::execDiffAssetPath },
			{ "DiffAssets", &UElgEditorBP_Assets::execDiffAssets },
			{ "DiffAssetWithExternalAsset", &UElgEditorBP_Assets::execDiffAssetWithExternalAsset },
			{ "FixRedirectors", &UElgEditorBP_Assets::execFixRedirectors },
			{ "FixRedirectorsByPath", &UElgEditorBP_Assets::execFixRedirectorsByPath },
			{ "GetAssetDataFromObject", &UElgEditorBP_Assets::execGetAssetDataFromObject },
			{ "GetAssetDataFromPath", &UElgEditorBP_Assets::execGetAssetDataFromPath },
			{ "GetAssetDatasByPath", &UElgEditorBP_Assets::execGetAssetDatasByPath },
			{ "GetAssetDateModified", &UElgEditorBP_Assets::execGetAssetDateModified },
			{ "GetAssetDateModifiedAsString", &UElgEditorBP_Assets::execGetAssetDateModifiedAsString },
			{ "GetAssetDependencies", &UElgEditorBP_Assets::execGetAssetDependencies },
			{ "GetAssetDependenciesByObject", &UElgEditorBP_Assets::execGetAssetDependenciesByObject },
			{ "GetAssetDependenciesByPath", &UElgEditorBP_Assets::execGetAssetDependenciesByPath },
			{ "GetAssetDiskPath", &UElgEditorBP_Assets::execGetAssetDiskPath },
			{ "GetAssetMetaData", &UElgEditorBP_Assets::execGetAssetMetaData },
			{ "GetAssetMetaDataBranch", &UElgEditorBP_Assets::execGetAssetMetaDataBranch },
			{ "GetAssetName", &UElgEditorBP_Assets::execGetAssetName },
			{ "GetAssetObjectByPath", &UElgEditorBP_Assets::execGetAssetObjectByPath },
			{ "GetAssetObjectMetaData", &UElgEditorBP_Assets::execGetAssetObjectMetaData },
			{ "GetAssetObjectMetaDataBranch", &UElgEditorBP_Assets::execGetAssetObjectMetaDataBranch },
			{ "GetAssetObjects", &UElgEditorBP_Assets::execGetAssetObjects },
			{ "GetAssetObjectsByPath", &UElgEditorBP_Assets::execGetAssetObjectsByPath },
			{ "GetAssetObjectsMetaData", &UElgEditorBP_Assets::execGetAssetObjectsMetaData },
			{ "GetAssetObjectsWithMetaDataKey", &UElgEditorBP_Assets::execGetAssetObjectsWithMetaDataKey },
			{ "GetAssetPath", &UElgEditorBP_Assets::execGetAssetPath },
			{ "GetAssetPathFromObject", &UElgEditorBP_Assets::execGetAssetPathFromObject },
			{ "GetAssetReferencers", &UElgEditorBP_Assets::execGetAssetReferencers },
			{ "GetAssetReferencersByObject", &UElgEditorBP_Assets::execGetAssetReferencersByObject },
			{ "GetAssetReferencersByPath", &UElgEditorBP_Assets::execGetAssetReferencersByPath },
			{ "GetAssetTags", &UElgEditorBP_Assets::execGetAssetTags },
			{ "GetMetaDataKeyBranch", &UElgEditorBP_Assets::execGetMetaDataKeyBranch },
			{ "GetPackage", &UElgEditorBP_Assets::execGetPackage },
			{ "GetSelectedPaths", &UElgEditorBP_Assets::execGetSelectedPaths },
			{ "HasAssetRefs", &UElgEditorBP_Assets::execHasAssetRefs },
			{ "IsAssetUWorldType", &UElgEditorBP_Assets::execIsAssetUWorldType },
			{ "NewAssetPathToDiskPath", &UElgEditorBP_Assets::execNewAssetPathToDiskPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathsToDiskPaths_Statics
	{
		struct ElgEditorBP_Assets_eventAssetPathsToDiskPaths_Parms
		{
			TArray<FString> InAssetPaths;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InAssetPaths_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InAssetPaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathsToDiskPaths_Statics::NewProp_InAssetPaths_Inner = { "InAssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathsToDiskPaths_Statics::NewProp_InAssetPaths = { "InAssetPaths", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventAssetPathsToDiskPaths_Parms, InAssetPaths), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathsToDiskPaths_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathsToDiskPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventAssetPathsToDiskPaths_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathsToDiskPaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathsToDiskPaths_Statics::NewProp_InAssetPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathsToDiskPaths_Statics::NewProp_InAssetPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathsToDiskPaths_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathsToDiskPaths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathsToDiskPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathsToDiskPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "AssetPathsToDiskPaths", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventAssetPathsToDiskPaths_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathsToDiskPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathsToDiskPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathsToDiskPaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathsToDiskPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathsToDiskPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathsToDiskPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathToDiskPath_Statics
	{
		struct ElgEditorBP_Assets_eventAssetPathToDiskPath_Parms
		{
			FString InAssetPath;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InAssetPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathToDiskPath_Statics::NewProp_InAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathToDiskPath_Statics::NewProp_InAssetPath = { "InAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventAssetPathToDiskPath_Parms, InAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathToDiskPath_Statics::NewProp_InAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathToDiskPath_Statics::NewProp_InAssetPath_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathToDiskPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventAssetPathToDiskPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathToDiskPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathToDiskPath_Statics::NewProp_InAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathToDiskPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathToDiskPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Convert the asset path to it's disk path  */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Convert the asset path to it's disk path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathToDiskPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "AssetPathToDiskPath", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventAssetPathToDiskPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathToDiskPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathToDiskPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathToDiskPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathToDiskPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathToDiskPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathToDiskPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics
	{
		struct ElgEditorBP_Assets_eventDiffAssetData_Parms
		{
			FAssetData OldAsset;
			FAssetData NewAsset;
			FString OldAssetRevisionString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldAssetRevisionString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OldAssetRevisionString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::NewProp_OldAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::NewProp_OldAsset = { "OldAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventDiffAssetData_Parms, OldAsset), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::NewProp_OldAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::NewProp_OldAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::NewProp_NewAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventDiffAssetData_Parms, NewAsset), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::NewProp_NewAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::NewProp_NewAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::NewProp_OldAssetRevisionString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::NewProp_OldAssetRevisionString = { "OldAssetRevisionString", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventDiffAssetData_Parms, OldAssetRevisionString), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::NewProp_OldAssetRevisionString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::NewProp_OldAssetRevisionString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::NewProp_OldAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::NewProp_NewAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::NewProp_OldAssetRevisionString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset|Diff" },
		{ "Comment", "/**\n\x09\x09Try and diff two assets using class-specific tool. Will do nothing if either asset is NULL, or they are not the same class.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Try and diff two assets using class-specific tool. Will do nothing if either asset is NULL, or they are not the same class." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "DiffAssetData", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventDiffAssetData_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04842401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics
	{
		struct ElgEditorBP_Assets_eventDiffAssetPath_Parms
		{
			FString OldAssetPath;
			FString NewAssetPath;
			FString OldAssetRevisionString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OldAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldAssetRevisionString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OldAssetRevisionString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::NewProp_OldAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::NewProp_OldAssetPath = { "OldAssetPath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventDiffAssetPath_Parms, OldAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::NewProp_OldAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::NewProp_OldAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::NewProp_NewAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::NewProp_NewAssetPath = { "NewAssetPath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventDiffAssetPath_Parms, NewAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::NewProp_NewAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::NewProp_NewAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::NewProp_OldAssetRevisionString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::NewProp_OldAssetRevisionString = { "OldAssetRevisionString", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventDiffAssetPath_Parms, OldAssetRevisionString), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::NewProp_OldAssetRevisionString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::NewProp_OldAssetRevisionString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::NewProp_OldAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::NewProp_NewAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::NewProp_OldAssetRevisionString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset|Diff" },
		{ "Comment", "/**\n\x09\x09Try and diff two assets using class-specific tool. Will do nothing if either asset is NULL, or they are not the same class.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Try and diff two assets using class-specific tool. Will do nothing if either asset is NULL, or they are not the same class." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "DiffAssetPath", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventDiffAssetPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets_Statics
	{
		struct ElgEditorBP_Assets_eventDiffAssets_Parms
		{
			UObject* OldAsset;
			UObject* NewAsset;
			FString OldAssetRevisionString;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldAssetRevisionString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OldAssetRevisionString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets_Statics::NewProp_OldAsset = { "OldAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventDiffAssets_Parms, OldAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventDiffAssets_Parms, NewAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets_Statics::NewProp_OldAssetRevisionString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets_Statics::NewProp_OldAssetRevisionString = { "OldAssetRevisionString", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventDiffAssets_Parms, OldAssetRevisionString), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets_Statics::NewProp_OldAssetRevisionString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets_Statics::NewProp_OldAssetRevisionString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets_Statics::NewProp_OldAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets_Statics::NewProp_NewAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets_Statics::NewProp_OldAssetRevisionString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset|Diff" },
		{ "Comment", "/** \n\x09\x09Try and diff two assets using class-specific tool. Will do nothing if either asset is NULL, or they are not the same class. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Try and diff two assets using class-specific tool. Will do nothing if either asset is NULL, or they are not the same class." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "DiffAssets", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventDiffAssets_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics
	{
		struct ElgEditorBP_Assets_eventDiffAssetWithExternalAsset_Parms
		{
			UObject* NewAsset;
			FString ExternalAssetFilePath;
			FString ExternalAssetName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalAssetFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExternalAssetFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalAssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExternalAssetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventDiffAssetWithExternalAsset_Parms, NewAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::NewProp_ExternalAssetFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::NewProp_ExternalAssetFilePath = { "ExternalAssetFilePath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventDiffAssetWithExternalAsset_Parms, ExternalAssetFilePath), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::NewProp_ExternalAssetFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::NewProp_ExternalAssetFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::NewProp_ExternalAssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::NewProp_ExternalAssetName = { "ExternalAssetName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventDiffAssetWithExternalAsset_Parms, ExternalAssetName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::NewProp_ExternalAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::NewProp_ExternalAssetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::NewProp_NewAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::NewProp_ExternalAssetFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::NewProp_ExternalAssetName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset|Diff" },
		{ "Comment", "/**\n\x09Try and diff two assets using class-specific tool. Will do nothing if either asset is NULL, or they are not the same class.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Try and diff two assets using class-specific tool. Will do nothing if either asset is NULL, or they are not the same class." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "DiffAssetWithExternalAsset", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventDiffAssetWithExternalAsset_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectors_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Fix all redirectors in the Content folder /Game/...  */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Fix all redirectors in the Content folder /Game/..." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "FixRedirectors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics
	{
		struct ElgEditorBP_Assets_eventFixRedirectorsByPath_Parms
		{
			FName Path;
			bool RecursivePaths;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecursivePaths_MetaData[];
#endif
		static void NewProp_RecursivePaths_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RecursivePaths;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventFixRedirectorsByPath_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_RecursivePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_RecursivePaths_SetBit(void* Obj)
	{
		((ElgEditorBP_Assets_eventFixRedirectorsByPath_Parms*)Obj)->RecursivePaths = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_RecursivePaths = { "RecursivePaths", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Assets_eventFixRedirectorsByPath_Parms), &Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_RecursivePaths_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_RecursivePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_RecursivePaths_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_RecursivePaths,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Fix all redirectors in the specified path and its sub folders  */" },
		{ "CPP_Default_RecursivePaths", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Fix all redirectors in the specified path and its sub folders" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "FixRedirectorsByPath", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventFixRedirectorsByPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetDataFromObject_Parms
		{
			const UObject* Object;
			FAssetData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDataFromObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDataFromObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get the AssetData by UObject */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the AssetData by UObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetDataFromObject", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetDataFromObject_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14842401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetDataFromPath_Parms
		{
			FString AssetPath;
			FAssetData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDataFromPath_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::NewProp_AssetPath_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDataFromPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::NewProp_AssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get the AssetData by its path */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the AssetData by its path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetDataFromPath", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetDataFromPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14842401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetDatasByPath_Parms
		{
			TArray<FString> AssetPaths;
			TArray<FAssetData> AssetDatas;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetPaths;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDatas_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetDatas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetPaths_Inner = { "AssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetPaths = { "AssetPaths", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDatasByPath_Parms, AssetPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetPaths_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetDatas_Inner = { "AssetDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetDatas = { "AssetDatas", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDatasByPath_Parms, AssetDatas), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetDatas,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get the asset data array*/" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the asset data array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetDatasByPath", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetDatasByPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetDateModified_Parms
		{
			FAssetData AssetDataStruct;
			FDateTime AssetDateTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStruct;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDateModified_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::NewProp_AssetDataStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::NewProp_AssetDataStruct_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::NewProp_AssetDateTime = { "AssetDateTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDateModified_Parms, AssetDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::NewProp_AssetDataStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::NewProp_AssetDateTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get the DateTime object for the asset */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the DateTime object for the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetDateModified", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetDateModified_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetDateModifiedAsString_Parms
		{
			FAssetData AssetDataStruct;
			FString AssetDateTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStruct;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetDateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDateModifiedAsString_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::NewProp_AssetDataStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::NewProp_AssetDataStruct_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::NewProp_AssetDateTime = { "AssetDateTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDateModifiedAsString_Parms, AssetDateTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::NewProp_AssetDataStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::NewProp_AssetDateTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get the DateTime as a string for the asset */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the DateTime as a string for the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetDateModifiedAsString", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetDateModifiedAsString_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetDependencies_Parms
		{
			FAssetData AssetData;
			TArray<FString> Dependencies;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dependencies_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Dependencies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDependencies_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::NewProp_AssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::NewProp_AssetData_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::NewProp_Dependencies_Inner = { "Dependencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDependencies_Parms, Dependencies), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::NewProp_AssetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::NewProp_Dependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::NewProp_Dependencies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get all dependencies, hard and soft, to the asset */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get all dependencies, hard and soft, to the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetDependencies", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetDependencies_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetDependenciesByObject_Parms
		{
			const UObject* Object;
			TArray<FString> Dependencies;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dependencies_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Dependencies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDependenciesByObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::NewProp_Dependencies_Inner = { "Dependencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDependenciesByObject_Parms, Dependencies), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::NewProp_Dependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::NewProp_Dependencies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get all reference, hard and soft, to the asset */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get all reference, hard and soft, to the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetDependenciesByObject", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetDependenciesByObject_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetDependenciesByPath_Parms
		{
			FString AssetPath;
			TArray<FString> Dependencies;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dependencies_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Dependencies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDependenciesByPath_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::NewProp_AssetPath_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::NewProp_Dependencies_Inner = { "Dependencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDependenciesByPath_Parms, Dependencies), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::NewProp_AssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::NewProp_Dependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::NewProp_Dependencies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get all dependencies, hard and soft, to the asset */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get all dependencies, hard and soft, to the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetDependenciesByPath", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetDependenciesByPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetDiskPath_Parms
		{
			FAssetData AssetDataStruct;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStruct;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDiskPath_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::NewProp_AssetDataStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::NewProp_AssetDataStruct_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDiskPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::NewProp_AssetDataStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get the full disk path for the asset */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the full disk path for the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetDiskPath", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetDiskPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetMetaData_Parms
		{
			FAssetData AssetDataStruct;
			bool Success;
			FS_ElgAssetMetaData MetaData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStruct;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetMetaData_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_AssetDataStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_AssetDataStruct_MetaData)) };
	void Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((ElgEditorBP_Assets_eventGetAssetMetaData_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Assets_eventGetAssetMetaData_Parms), &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetMetaData_Parms, MetaData), Z_Construct_UScriptStruct_FS_ElgAssetMetaData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_AssetDataStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_MetaData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get the assets meta data struct, Success is true if it has meta data. */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the assets meta data struct, Success is true if it has meta data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetMetaData", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetMetaData_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetMetaDataBranch_Parms
		{
			FAssetData AssetDataStruct;
			FS_ElgAssetMetaData MetaData;
			EBPEditorOutputValidBranch Branches;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStruct;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetMetaDataBranch_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_AssetDataStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_AssetDataStruct_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetMetaDataBranch_Parms, MetaData), Z_Construct_UScriptStruct_FS_ElgAssetMetaData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetMetaDataBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_AssetDataStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get the assets meta data struct branch */" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the assets meta data struct branch" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetMetaDataBranch", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetMetaDataBranch_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetName_Parms
		{
			FAssetData AssetDataStruct;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStruct;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetName_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::NewProp_AssetDataStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::NewProp_AssetDataStruct_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::NewProp_AssetDataStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Return the name of the asset */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Return the name of the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetName", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetName_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectByPath_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetObjectByPath_Parms
		{
			FString InAssetPath;
			UObject* AssetObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InAssetPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectByPath_Statics::NewProp_InAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectByPath_Statics::NewProp_InAssetPath = { "InAssetPath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectByPath_Parms, InAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectByPath_Statics::NewProp_InAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectByPath_Statics::NewProp_InAssetPath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectByPath_Statics::NewProp_AssetObject = { "AssetObject", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectByPath_Parms, AssetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectByPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectByPath_Statics::NewProp_InAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectByPath_Statics::NewProp_AssetObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectByPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get the asset object from the asset path */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the asset object from the asset path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetObjectByPath", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetObjectByPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectByPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectByPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectByPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectByPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetObjectMetaData_Parms
		{
			UObject* AssetObject;
			bool Success;
			FS_ElgAssetMetaData MetaData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetObject;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::NewProp_AssetObject = { "AssetObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectMetaData_Parms, AssetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((ElgEditorBP_Assets_eventGetAssetObjectMetaData_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Assets_eventGetAssetObjectMetaData_Parms), &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectMetaData_Parms, MetaData), Z_Construct_UScriptStruct_FS_ElgAssetMetaData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::NewProp_AssetObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::NewProp_MetaData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get the asset objects meta data struct, Success is true if it has meta data. */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the asset objects meta data struct, Success is true if it has meta data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetObjectMetaData", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetObjectMetaData_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetObjectMetaDataBranch_Parms
		{
			UObject* AssetObject;
			FS_ElgAssetMetaData MetaData;
			EBPEditorOutputValidBranch Branches;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::NewProp_AssetObject = { "AssetObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectMetaDataBranch_Parms, AssetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectMetaDataBranch_Parms, MetaData), Z_Construct_UScriptStruct_FS_ElgAssetMetaData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectMetaDataBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::NewProp_AssetObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get the asset objects meta data struct branch */" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the asset objects meta data struct branch" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetObjectMetaDataBranch", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetObjectMetaDataBranch_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetObjects_Parms
		{
			TArray<FAssetData> AssetDataStructs;
			TArray<UObject*> AssetObjects;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStructs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStructs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetDataStructs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetObjects_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetObjects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetDataStructs_Inner = { "AssetDataStructs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetDataStructs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetDataStructs = { "AssetDataStructs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjects_Parms, AssetDataStructs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetDataStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetDataStructs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetObjects_Inner = { "AssetObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetObjects = { "AssetObjects", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjects_Parms, AssetObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetDataStructs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetDataStructs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get the asset data as asset objects array*/" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the asset data as asset objects array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetObjects", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetObjects_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetObjectsByPath_Parms
		{
			TArray<FString> AssetPaths;
			TArray<UObject*> AssetObjects;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetPaths;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetObjects_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetObjects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetPaths_Inner = { "AssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetPaths = { "AssetPaths", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectsByPath_Parms, AssetPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetPaths_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetObjects_Inner = { "AssetObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetObjects = { "AssetObjects", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectsByPath_Parms, AssetObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get the asset data as asset objects array*/" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the asset data as asset objects array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetObjectsByPath", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetObjectsByPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetObjectsMetaData_Parms
		{
			TArray<UObject*> AssetObjects;
			bool SkipWithoutMetaData;
			TMap<UObject*,FS_ElgAssetMetaData> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipWithoutMetaData_MetaData[];
#endif
		static void NewProp_SkipWithoutMetaData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipWithoutMetaData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_AssetObjects_Inner = { "AssetObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_AssetObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_AssetObjects = { "AssetObjects", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectsMetaData_Parms, AssetObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_AssetObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_AssetObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_SkipWithoutMetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_SkipWithoutMetaData_SetBit(void* Obj)
	{
		((ElgEditorBP_Assets_eventGetAssetObjectsMetaData_Parms*)Obj)->SkipWithoutMetaData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_SkipWithoutMetaData = { "SkipWithoutMetaData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Assets_eventGetAssetObjectsMetaData_Parms), &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_SkipWithoutMetaData_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_SkipWithoutMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_SkipWithoutMetaData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FS_ElgAssetMetaData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectsMetaData_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_AssetObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_AssetObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_SkipWithoutMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get all MetaData for the AssetObjects in a struct with an sorted Keys array */" },
		{ "CPP_Default_SkipWithoutMetaData", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get all MetaData for the AssetObjects in a struct with an sorted Keys array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetObjectsMetaData", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetObjectsMetaData_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetObjectsWithMetaDataKey_Parms
		{
			TArray<UObject*> AssetObjects;
			FName MetaDataKey;
			TMap<UObject*,FS_ElgAssetMetaData> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaDataKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MetaDataKey;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_AssetObjects_Inner = { "AssetObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_AssetObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_AssetObjects = { "AssetObjects", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectsWithMetaDataKey_Parms, AssetObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_AssetObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_AssetObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_MetaDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_MetaDataKey = { "MetaDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectsWithMetaDataKey_Parms, MetaDataKey), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_MetaDataKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_MetaDataKey_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FS_ElgAssetMetaData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectsWithMetaDataKey_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_AssetObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_AssetObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_MetaDataKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get all AssetObjects that has a Meta Data Key */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get all AssetObjects that has a Meta Data Key" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetObjectsWithMetaDataKey", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetObjectsWithMetaDataKey_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetPath_Parms
		{
			FAssetData AssetDataStruct;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStruct;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetPath_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::NewProp_AssetDataStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::NewProp_AssetDataStruct_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::NewProp_AssetDataStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Return the asset path name of the asset */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Return the asset path name of the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetPath", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetPathFromObject_Parms
		{
			const UObject* Object;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetPathFromObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetPathFromObject_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get the AssetPath from a UObject */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the AssetPath from a UObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetPathFromObject", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetPathFromObject_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetReferencers_Parms
		{
			FAssetData AssetData;
			TArray<FString> Referencers;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Referencers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Referencers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetReferencers_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::NewProp_AssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::NewProp_AssetData_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::NewProp_Referencers_Inner = { "Referencers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::NewProp_Referencers = { "Referencers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetReferencers_Parms, Referencers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::NewProp_AssetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::NewProp_Referencers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::NewProp_Referencers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get all reference, hard and soft, to the asset */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get all reference, hard and soft, to the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetReferencers", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetReferencers_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetReferencersByObject_Parms
		{
			const UObject* Object;
			TArray<FString> Referencers;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Referencers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Referencers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetReferencersByObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::NewProp_Referencers_Inner = { "Referencers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::NewProp_Referencers = { "Referencers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetReferencersByObject_Parms, Referencers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::NewProp_Referencers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::NewProp_Referencers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get all reference, hard and soft, to the asset */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get all reference, hard and soft, to the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetReferencersByObject", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetReferencersByObject_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetReferencersByPath_Parms
		{
			FString AssetPath;
			TArray<FString> Referencers;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Referencers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Referencers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetReferencersByPath_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::NewProp_AssetPath_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::NewProp_Referencers_Inner = { "Referencers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::NewProp_Referencers = { "Referencers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetReferencersByPath_Parms, Referencers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::NewProp_AssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::NewProp_Referencers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::NewProp_Referencers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Get all reference, hard and soft, to the asset */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get all reference, hard and soft, to the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetReferencersByPath", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetReferencersByPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetTags_Parms
		{
			FAssetData AssetDataStruct;
			TMap<FName,FString> Tags;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStruct;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tags_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tags_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetTags_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_AssetDataStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_AssetDataStruct_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_Tags_ValueProp = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_Tags_Key_KeyProp = { "Tags_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetTags_Parms, Tags), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_AssetDataStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_Tags_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_Tags_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_Tags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Return all the TagsAndValues the asset has. */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Return all the TagsAndValues the asset has." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetTags", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetAssetTags_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics
	{
		struct ElgEditorBP_Assets_eventGetMetaDataKeyBranch_Parms
		{
			UObject* AssetObject;
			FName Key;
			EBPEditorOutputValidBranch Branches;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_AssetObject = { "AssetObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetMetaDataKeyBranch_Parms, AssetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetMetaDataKeyBranch_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetMetaDataKeyBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetMetaDataKeyBranch_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_AssetObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Return the meta data for the key with branch output pins */" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Return the meta data for the key with branch output pins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetMetaDataKeyBranch", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetMetaDataKeyBranch_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetPackage_Statics
	{
		struct ElgEditorBP_Assets_eventGetPackage_Parms
		{
			FAssetData AssetDataStruct;
			UPackage* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStruct;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetPackage_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetPackage_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetPackage_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetPackage_Statics::NewProp_AssetDataStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetPackage_Statics::NewProp_AssetDataStruct_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetPackage_Parms, ReturnValue), Z_Construct_UClass_UPackage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetPackage_Statics::NewProp_AssetDataStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetPackage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetPackage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Return UPackage object */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Return UPackage object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetPackage", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetPackage_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics
	{
		struct ElgEditorBP_Assets_eventGetSelectedPaths_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetSelectedPaths_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Return the current selected Folder paths */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Return the current selected Folder paths" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetSelectedPaths", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventGetSelectedPaths_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics
	{
		struct ElgEditorBP_Assets_eventHasAssetRefs_Parms
		{
			FAssetData AssetData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventHasAssetRefs_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::NewProp_AssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::NewProp_AssetData_MetaData)) };
	void Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_Assets_eventHasAssetRefs_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Assets_eventHasAssetRefs_Parms), &Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::NewProp_AssetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Check if the Asset has any ref/dep, if its a new asset it might not have anything for a while... */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Check if the Asset has any ref/dep, if its a new asset it might not have anything for a while..." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "HasAssetRefs", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventHasAssetRefs_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14842401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType_Statics
	{
		struct ElgEditorBP_Assets_eventIsAssetUWorldType_Parms
		{
			FAssetData AssetDataStruct;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStruct;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventIsAssetUWorldType_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType_Statics::NewProp_AssetDataStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType_Statics::NewProp_AssetDataStruct_MetaData)) };
	void Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_Assets_eventIsAssetUWorldType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Assets_eventIsAssetUWorldType_Parms), &Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType_Statics::NewProp_AssetDataStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* Return the if the asset is a World asset or not */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Return the if the asset is a World asset or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "IsAssetUWorldType", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventIsAssetUWorldType_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics
	{
		struct ElgEditorBP_Assets_eventNewAssetPathToDiskPath_Parms
		{
			FString InAssetPath;
			bool bIsWorldAsset;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWorldAsset_MetaData[];
#endif
		static void NewProp_bIsWorldAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWorldAsset;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::NewProp_InAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::NewProp_InAssetPath = { "InAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventNewAssetPathToDiskPath_Parms, InAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::NewProp_InAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::NewProp_InAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::NewProp_bIsWorldAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::NewProp_bIsWorldAsset_SetBit(void* Obj)
	{
		((ElgEditorBP_Assets_eventNewAssetPathToDiskPath_Parms*)Obj)->bIsWorldAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::NewProp_bIsWorldAsset = { "bIsWorldAsset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Assets_eventNewAssetPathToDiskPath_Parms), &Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::NewProp_bIsWorldAsset_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::NewProp_bIsWorldAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::NewProp_bIsWorldAsset_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventNewAssetPathToDiskPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::NewProp_InAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::NewProp_bIsWorldAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "Comment", "/* If the asset don't exist yet but you want to get the disk path they would have use this */" },
		{ "CPP_Default_bIsWorldAsset", "false" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "If the asset don't exist yet but you want to get the disk path they would have use this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "NewAssetPathToDiskPath", nullptr, nullptr, sizeof(ElgEditorBP_Assets_eventNewAssetPathToDiskPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElgEditorBP_Assets_NoRegister()
	{
		return UElgEditorBP_Assets::StaticClass();
	}
	struct Z_Construct_UClass_UElgEditorBP_Assets_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgEditorBP_Assets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElgEditorBP_Assets_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathsToDiskPaths, "AssetPathsToDiskPaths" }, // 3778988976
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_AssetPathToDiskPath, "AssetPathToDiskPath" }, // 2780031111
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetData, "DiffAssetData" }, // 4283550469
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetPath, "DiffAssetPath" }, // 2034784437
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssets, "DiffAssets" }, // 2457036730
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_DiffAssetWithExternalAsset, "DiffAssetWithExternalAsset" }, // 1323837821
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectors, "FixRedirectors" }, // 1883123597
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath, "FixRedirectorsByPath" }, // 679504189
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject, "GetAssetDataFromObject" }, // 1260142470
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath, "GetAssetDataFromPath" }, // 3596061048
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath, "GetAssetDatasByPath" }, // 3873682296
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified, "GetAssetDateModified" }, // 1494131328
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString, "GetAssetDateModifiedAsString" }, // 3611969105
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies, "GetAssetDependencies" }, // 2670061337
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject, "GetAssetDependenciesByObject" }, // 3986860749
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath, "GetAssetDependenciesByPath" }, // 381476071
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath, "GetAssetDiskPath" }, // 1899159670
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData, "GetAssetMetaData" }, // 3822350687
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch, "GetAssetMetaDataBranch" }, // 2524726840
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName, "GetAssetName" }, // 2592046996
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectByPath, "GetAssetObjectByPath" }, // 280072817
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData, "GetAssetObjectMetaData" }, // 1500490564
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch, "GetAssetObjectMetaDataBranch" }, // 1791569889
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects, "GetAssetObjects" }, // 3029539871
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath, "GetAssetObjectsByPath" }, // 3715978818
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData, "GetAssetObjectsMetaData" }, // 1452144582
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey, "GetAssetObjectsWithMetaDataKey" }, // 2190162800
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath, "GetAssetPath" }, // 3068872326
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject, "GetAssetPathFromObject" }, // 1051647670
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers, "GetAssetReferencers" }, // 3836838339
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject, "GetAssetReferencersByObject" }, // 935634380
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath, "GetAssetReferencersByPath" }, // 81627134
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags, "GetAssetTags" }, // 698639062
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch, "GetMetaDataKeyBranch" }, // 2224119393
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetPackage, "GetPackage" }, // 1660537884
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths, "GetSelectedPaths" }, // 2236280506
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs, "HasAssetRefs" }, // 1319421529
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_IsAssetUWorldType, "IsAssetUWorldType" }, // 1362891820
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_NewAssetPathToDiskPath, "NewAssetPathToDiskPath" }, // 694056082
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorBP_Assets_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Blueprints/ElgEditorBP_Assets.h" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgEditorBP_Assets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgEditorBP_Assets>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgEditorBP_Assets_Statics::ClassParams = {
		&UElgEditorBP_Assets::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UElgEditorBP_Assets_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UElgEditorBP_Assets_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgEditorBP_Assets()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgEditorBP_Assets_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgEditorBP_Assets, 4205811763);
	template<> ELGEDITORSCRIPTING_API UClass* StaticClass<UElgEditorBP_Assets>()
	{
		return UElgEditorBP_Assets::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgEditorBP_Assets(Z_Construct_UClass_UElgEditorBP_Assets, &UElgEditorBP_Assets::StaticClass, TEXT("/Script/ElgEditorScripting"), TEXT("UElgEditorBP_Assets"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgEditorBP_Assets);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
