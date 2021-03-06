// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgEditorScripting/Public/Blueprints/ElgEditorBP_UBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgEditorBP_UBlueprint() {}
// Cross Module References
	ELGEDITORSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats();
	UPackage* Z_Construct_UPackage__Script_ElgEditorScripting();
	ELGEDITORSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_UBlueprint_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_UBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FS_ElgBlueprintsNodeStats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELGEDITORSCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats, Z_Construct_UPackage__Script_ElgEditorScripting(), TEXT("S_ElgBlueprintsNodeStats"), sizeof(FS_ElgBlueprintsNodeStats), Get_Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Hash());
	}
	return Singleton;
}
template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<FS_ElgBlueprintsNodeStats>()
{
	return FS_ElgBlueprintsNodeStats::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FS_ElgBlueprintsNodeStats(FS_ElgBlueprintsNodeStats::StaticStruct, TEXT("/Script/ElgEditorScripting"), TEXT("S_ElgBlueprintsNodeStats"), false, nullptr, nullptr);
static struct FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgBlueprintsNodeStats
{
	FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgBlueprintsNodeStats()
	{
		UScriptStruct::DeferCppStructOps<FS_ElgBlueprintsNodeStats>(FName(TEXT("S_ElgBlueprintsNodeStats")));
	}
} ScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgBlueprintsNodeStats;
	struct Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlueprintCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeCount;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeTypeSorted_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeTypeSorted_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NodeTypeSorted;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeCountSorted_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeCountSorted_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NodeCountSorted;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeTypeCountMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeTypeCountMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeTypeCountMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NodeTypeCountMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Stats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_ElgBlueprintsNodeStats>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_BlueprintCount_MetaData[] = {
		{ "Category", "NodeStats" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_BlueprintCount = { "BlueprintCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgBlueprintsNodeStats, BlueprintCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_BlueprintCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_BlueprintCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeCount_MetaData[] = {
		{ "Category", "NodeStats" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeCount = { "NodeCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgBlueprintsNodeStats, NodeCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeCount_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeTypeSorted_Inner = { "NodeTypeSorted", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeTypeSorted_MetaData[] = {
		{ "Category", "NodeStats" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeTypeSorted = { "NodeTypeSorted", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgBlueprintsNodeStats, NodeTypeSorted), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeTypeSorted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeTypeSorted_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeCountSorted_Inner = { "NodeCountSorted", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeCountSorted_MetaData[] = {
		{ "Category", "NodeStats" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeCountSorted = { "NodeCountSorted", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgBlueprintsNodeStats, NodeCountSorted), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeCountSorted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeCountSorted_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeTypeCountMap_ValueProp = { "NodeTypeCountMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeTypeCountMap_Key_KeyProp = { "NodeTypeCountMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeTypeCountMap_MetaData[] = {
		{ "Category", "NodeStats" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeTypeCountMap = { "NodeTypeCountMap", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgBlueprintsNodeStats, NodeTypeCountMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeTypeCountMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeTypeCountMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_Stats_Inner = { "Stats", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_Stats_MetaData[] = {
		{ "Category", "NodeStats" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgBlueprintsNodeStats, Stats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_Stats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_Stats_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_BlueprintCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeTypeSorted_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeTypeSorted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeCountSorted_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeCountSorted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeTypeCountMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeTypeCountMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_NodeTypeCountMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_Stats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::NewProp_Stats,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
		nullptr,
		&NewStructOps,
		"S_ElgBlueprintsNodeStats",
		sizeof(FS_ElgBlueprintsNodeStats),
		alignof(FS_ElgBlueprintsNodeStats),
		Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ElgEditorScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("S_ElgBlueprintsNodeStats"), sizeof(FS_ElgBlueprintsNodeStats), Get_Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Hash() { return 3494712817U; }
class UScriptStruct* FS_ElgBlueprintNodeStats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELGEDITORSCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats, Z_Construct_UPackage__Script_ElgEditorScripting(), TEXT("S_ElgBlueprintNodeStats"), sizeof(FS_ElgBlueprintNodeStats), Get_Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Hash());
	}
	return Singleton;
}
template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<FS_ElgBlueprintNodeStats>()
{
	return FS_ElgBlueprintNodeStats::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FS_ElgBlueprintNodeStats(FS_ElgBlueprintNodeStats::StaticStruct, TEXT("/Script/ElgEditorScripting"), TEXT("S_ElgBlueprintNodeStats"), false, nullptr, nullptr);
static struct FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgBlueprintNodeStats
{
	FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgBlueprintNodeStats()
	{
		UScriptStruct::DeferCppStructOps<FS_ElgBlueprintNodeStats>(FName(TEXT("S_ElgBlueprintNodeStats")));
	}
} ScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgBlueprintNodeStats;
	struct Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BlueprintName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayNamesSorted_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayNamesSorted_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisplayNamesSorted;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayNamesCountSorted_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayNamesCountSorted_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisplayNamesCountSorted;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeTypeSorted_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeTypeSorted_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NodeTypeSorted;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeTypeCountSorted_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeTypeCountSorted_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NodeTypeCountSorted;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisplayNameCountMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayNameCountMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayNameCountMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DisplayNameCountMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeTypeCountMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeTypeCountMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeTypeCountMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NodeTypeCountMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayTypeMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayTypeMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTypeMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DisplayTypeMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_ElgBlueprintNodeStats>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_Blueprint_MetaData[] = {
		{ "Category", "NodeStats" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgBlueprintNodeStats, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_Blueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_Blueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_BlueprintName_MetaData[] = {
		{ "Category", "NodeStats" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_BlueprintName = { "BlueprintName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgBlueprintNodeStats, BlueprintName), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_BlueprintName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_BlueprintName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNamesSorted_Inner = { "DisplayNamesSorted", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNamesSorted_MetaData[] = {
		{ "Category", "NodeStats" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNamesSorted = { "DisplayNamesSorted", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgBlueprintNodeStats, DisplayNamesSorted), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNamesSorted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNamesSorted_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNamesCountSorted_Inner = { "DisplayNamesCountSorted", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNamesCountSorted_MetaData[] = {
		{ "Category", "NodeStats" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNamesCountSorted = { "DisplayNamesCountSorted", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgBlueprintNodeStats, DisplayNamesCountSorted), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNamesCountSorted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNamesCountSorted_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeSorted_Inner = { "NodeTypeSorted", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeSorted_MetaData[] = {
		{ "Category", "NodeStats" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeSorted = { "NodeTypeSorted", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgBlueprintNodeStats, NodeTypeSorted), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeSorted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeSorted_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeCountSorted_Inner = { "NodeTypeCountSorted", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeCountSorted_MetaData[] = {
		{ "Category", "NodeStats" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeCountSorted = { "NodeTypeCountSorted", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgBlueprintNodeStats, NodeTypeCountSorted), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeCountSorted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeCountSorted_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNameCountMap_ValueProp = { "DisplayNameCountMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNameCountMap_Key_KeyProp = { "DisplayNameCountMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNameCountMap_MetaData[] = {
		{ "Category", "NodeStats" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNameCountMap = { "DisplayNameCountMap", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgBlueprintNodeStats, DisplayNameCountMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNameCountMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNameCountMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeCountMap_ValueProp = { "NodeTypeCountMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeCountMap_Key_KeyProp = { "NodeTypeCountMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeCountMap_MetaData[] = {
		{ "Category", "NodeStats" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeCountMap = { "NodeTypeCountMap", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgBlueprintNodeStats, NodeTypeCountMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeCountMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeCountMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayTypeMap_ValueProp = { "DisplayTypeMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayTypeMap_Key_KeyProp = { "DisplayTypeMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayTypeMap_MetaData[] = {
		{ "Category", "NodeStats" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayTypeMap = { "DisplayTypeMap", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgBlueprintNodeStats, DisplayTypeMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayTypeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayTypeMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeCount_MetaData[] = {
		{ "Category", "NodeStats" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeCount = { "NodeCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgBlueprintNodeStats, NodeCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_BlueprintName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNamesSorted_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNamesSorted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNamesCountSorted_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNamesCountSorted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeSorted_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeSorted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeCountSorted_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeCountSorted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNameCountMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNameCountMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayNameCountMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeCountMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeCountMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeTypeCountMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayTypeMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayTypeMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_DisplayTypeMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::NewProp_NodeCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
		nullptr,
		&NewStructOps,
		"S_ElgBlueprintNodeStats",
		sizeof(FS_ElgBlueprintNodeStats),
		alignof(FS_ElgBlueprintNodeStats),
		Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ElgEditorScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("S_ElgBlueprintNodeStats"), sizeof(FS_ElgBlueprintNodeStats), Get_Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Hash() { return 1760407263U; }
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execRemoveLocalVariable)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::RemoveLocalVariable(Z_Param_Blueprint,Z_Param_FunctionName,Z_Param_VariableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execRenameLocalVariable)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_OldVariableName);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewVariableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::RenameLocalVariable(Z_Param_Blueprint,Z_Param_FunctionName,Z_Param_OldVariableName,Z_Param_NewVariableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execRemoveUnusedLocalVariables)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::RemoveUnusedLocalVariables(Z_Param_Blueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execGetUnusedLocalVariableNames)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_TARRAY_REF(FString,Z_Param_Out_VariableNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::GetUnusedLocalVariableNames(Z_Param_Blueprint,Z_Param_Out_VariableNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execGetLocalVariableNames)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_TARRAY_REF(FString,Z_Param_Out_VariableNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::GetLocalVariableNames(Z_Param_Blueprint,Z_Param_Out_VariableNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execGetVariableNames)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_TARRAY_REF(FString,Z_Param_Out_VariableNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::GetVariableNames(Z_Param_Blueprint,Z_Param_Out_VariableNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execHasNodeCommentWith)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_PROPERTY(FStrProperty,Z_Param_InComment);
		P_GET_UBOOL(Z_Param_Contains);
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::HasNodeCommentWith(Z_Param_Blueprint,Z_Param_InComment,Z_Param_Contains,(EBPEditorOutputBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execHasCommentWith)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_PROPERTY(FStrProperty,Z_Param_InComment);
		P_GET_UBOOL(Z_Param_Contains);
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::HasCommentWith(Z_Param_Blueprint,Z_Param_InComment,Z_Param_Contains,(EBPEditorOutputBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execHasCompilerErrorBranch)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::HasCompilerErrorBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execHasCompilerError)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::HasCompilerError(Z_Param_Blueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execDeleteNodesByName)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::DeleteNodesByName(Z_Param_Blueprint,Z_Param_NodeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execGetNodeStatsByPath)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FS_ElgBlueprintsNodeStats*)Z_Param__Result=UElgEditorBP_UBlueprint::GetNodeStatsByPath(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execGetBlueprintsNodeStat)
	{
		P_GET_TARRAY(UBlueprint*,Z_Param_Blueprints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FS_ElgBlueprintsNodeStats*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintsNodeStat(Z_Param_Blueprints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execGetBlueprintNodeStat)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FS_ElgBlueprintNodeStats*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintNodeStat(Z_Param_Blueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execGetNodeUsage)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_TMAP_REF(FString,int32,Z_Param_Out_NodeUsageMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::GetNodeUsage(Z_Param_Blueprint,Z_Param_Out_NodeUsageMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execIsNodePinConnectedBranch)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeName);
		P_GET_PROPERTY(FStrProperty,Z_Param_PinName);
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::IsNodePinConnectedBranch(Z_Param_Blueprint,Z_Param_NodeName,Z_Param_PinName,(EBPEditorOutputBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execIsNodePinConnected)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeName);
		P_GET_PROPERTY(FStrProperty,Z_Param_PinName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::IsNodePinConnected(Z_Param_Blueprint,Z_Param_NodeName,Z_Param_PinName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execHasNodeBranch)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeName);
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::HasNodeBranch(Z_Param_Blueprint,Z_Param_NodeName,(EBPEditorOutputBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execHasNode)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::HasNode(Z_Param_Blueprint,Z_Param_NodeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execIsConstructionScriptConnectedBranch)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::IsConstructionScriptConnectedBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execIsConstructionScriptConnected)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::IsConstructionScriptConnected(Z_Param_Blueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execSetRunConstructionScriptOnDrag)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::SetRunConstructionScriptOnDrag(Z_Param_Blueprint,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execIsRunConstructionScriptOnDragBranch)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::IsRunConstructionScriptOnDragBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execIsRunConstructionScriptOnDrag)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::IsRunConstructionScriptOnDrag(Z_Param_Blueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execSetCanEverTick)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::SetCanEverTick(Z_Param_Blueprint,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execCanEverTickBranch)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::CanEverTickBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execCanEverTick)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::CanEverTick(Z_Param_Blueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execSetStartingWithTick)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::SetStartingWithTick(Z_Param_Blueprint,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execIsStartingWithTickBranch)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::IsStartingWithTickBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execIsStartingWithTick)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::IsStartingWithTick(Z_Param_Blueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execCompileBlueprint)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::CompileBlueprint(Z_Param_Blueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execIsChildOfClassBranch)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_OBJECT(UClass,Z_Param_ChildClass);
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::IsChildOfClassBranch(Z_Param_Blueprint,Z_Param_ChildClass,(EBPEditorOutputBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execIsChildOfClass)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_OBJECT(UClass,Z_Param_ChildClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::IsChildOfClass(Z_Param_Blueprint,Z_Param_ChildClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execGetNativeClass)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UObject> *)Z_Param__Result=UElgEditorBP_UBlueprint::GetNativeClass(Z_Param_Blueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execGetParentClass)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UObject> *)Z_Param__Result=UElgEditorBP_UBlueprint::GetParentClass(Z_Param_Blueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execBlueprintSupportInterfaceBranch)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::BlueprintSupportInterfaceBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execBlueprintSupportInterface)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::BlueprintSupportInterface(Z_Param_Blueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execBlueprintRemoveInterface)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_OBJECT(UClass,Z_Param_InterfaceClass);
		P_GET_UBOOL(Z_Param_bPreserveFunctions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::BlueprintRemoveInterface(Z_Param_Blueprint,Z_Param_InterfaceClass,Z_Param_bPreserveFunctions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execBlueprintAddInterface)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_OBJECT(UClass,Z_Param_InterfaceClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::BlueprintAddInterface(Z_Param_Blueprint,Z_Param_InterfaceClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execBlueprintImplementInterface)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_OBJECT(UClass,Z_Param_InterfaceClass);
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::BlueprintImplementInterface(Z_Param_Blueprint,Z_Param_InterfaceClass,(EBPEditorOutputBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execGetBlueprintInterfaces)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_UBOOL(Z_Param_ExcludeInherited);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TSubclassOf<UInterface> >*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintInterfaces(Z_Param_Blueprint,Z_Param_ExcludeInherited);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execBlueprintSupportComponentBranch)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::BlueprintSupportComponentBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execBlueprintSupportComponent)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::BlueprintSupportComponent(Z_Param_Blueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execBlueprintRemoveComponent)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_OBJECT(UClass,Z_Param_ComponentClass);
		P_GET_UBOOL(Z_Param_bOnlyFirst);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::BlueprintRemoveComponent(Z_Param_Blueprint,Z_Param_ComponentClass,Z_Param_bOnlyFirst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execBlueprintAddComponent)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_OBJECT(UClass,Z_Param_ComponentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElgEditorBP_UBlueprint::BlueprintAddComponent(Z_Param_Blueprint,Z_Param_ComponentClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execGetBlueprintComponentsOfClassBranch)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_OBJECT(UClass,Z_Param_ComponentClass);
		P_GET_UBOOL(Z_Param_ExcludeInherited);
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UActorComponent*>*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintComponentsOfClassBranch(Z_Param_Blueprint,Z_Param_ComponentClass,Z_Param_ExcludeInherited,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execGetBlueprintComponentsOfClass)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_OBJECT(UClass,Z_Param_ComponentClass);
		P_GET_UBOOL(Z_Param_ExcludeInherited);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UActorComponent*>*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintComponentsOfClass(Z_Param_Blueprint,Z_Param_ComponentClass,Z_Param_ExcludeInherited);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execGetBlueprintComponentOfClassBranch)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_OBJECT(UClass,Z_Param_ComponentClass);
		P_GET_UBOOL(Z_Param_ExcludeInherited);
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActorComponent**)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintComponentOfClassBranch(Z_Param_Blueprint,Z_Param_ComponentClass,Z_Param_ExcludeInherited,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execGetBlueprintComponentOfClass)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_OBJECT(UClass,Z_Param_ComponentClass);
		P_GET_UBOOL(Z_Param_ExcludeInherited);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActorComponent**)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintComponentOfClass(Z_Param_Blueprint,Z_Param_ComponentClass,Z_Param_ExcludeInherited);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execGetBlueprintComponents)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_UBOOL(Z_Param_ExcludeInherited);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UActorComponent*>*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintComponents(Z_Param_Blueprint,Z_Param_ExcludeInherited);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execGetBlueprintsByPath)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Path);
		P_GET_UBOOL(Z_Param_RecursivePaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UBlueprint*>*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintsByPath(Z_Param_Path,Z_Param_RecursivePaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execGetBlueprintsFromObjects)
	{
		P_GET_TARRAY(UObject*,Z_Param_Objects);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UBlueprint*>*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintsFromObjects(Z_Param_Objects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execGetBlueprintFromObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlueprint**)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintFromObject(Z_Param_Object,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgEditorBP_UBlueprint::execGetBlueprintFromAssetData)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct);
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlueprint**)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintFromAssetData(Z_Param_Out_AssetDataStruct,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	void UElgEditorBP_UBlueprint::StaticRegisterNativesUElgEditorBP_UBlueprint()
	{
		UClass* Class = UElgEditorBP_UBlueprint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlueprintAddComponent", &UElgEditorBP_UBlueprint::execBlueprintAddComponent },
			{ "BlueprintAddInterface", &UElgEditorBP_UBlueprint::execBlueprintAddInterface },
			{ "BlueprintImplementInterface", &UElgEditorBP_UBlueprint::execBlueprintImplementInterface },
			{ "BlueprintRemoveComponent", &UElgEditorBP_UBlueprint::execBlueprintRemoveComponent },
			{ "BlueprintRemoveInterface", &UElgEditorBP_UBlueprint::execBlueprintRemoveInterface },
			{ "BlueprintSupportComponent", &UElgEditorBP_UBlueprint::execBlueprintSupportComponent },
			{ "BlueprintSupportComponentBranch", &UElgEditorBP_UBlueprint::execBlueprintSupportComponentBranch },
			{ "BlueprintSupportInterface", &UElgEditorBP_UBlueprint::execBlueprintSupportInterface },
			{ "BlueprintSupportInterfaceBranch", &UElgEditorBP_UBlueprint::execBlueprintSupportInterfaceBranch },
			{ "CanEverTick", &UElgEditorBP_UBlueprint::execCanEverTick },
			{ "CanEverTickBranch", &UElgEditorBP_UBlueprint::execCanEverTickBranch },
			{ "CompileBlueprint", &UElgEditorBP_UBlueprint::execCompileBlueprint },
			{ "DeleteNodesByName", &UElgEditorBP_UBlueprint::execDeleteNodesByName },
			{ "GetBlueprintComponentOfClass", &UElgEditorBP_UBlueprint::execGetBlueprintComponentOfClass },
			{ "GetBlueprintComponentOfClassBranch", &UElgEditorBP_UBlueprint::execGetBlueprintComponentOfClassBranch },
			{ "GetBlueprintComponents", &UElgEditorBP_UBlueprint::execGetBlueprintComponents },
			{ "GetBlueprintComponentsOfClass", &UElgEditorBP_UBlueprint::execGetBlueprintComponentsOfClass },
			{ "GetBlueprintComponentsOfClassBranch", &UElgEditorBP_UBlueprint::execGetBlueprintComponentsOfClassBranch },
			{ "GetBlueprintFromAssetData", &UElgEditorBP_UBlueprint::execGetBlueprintFromAssetData },
			{ "GetBlueprintFromObject", &UElgEditorBP_UBlueprint::execGetBlueprintFromObject },
			{ "GetBlueprintInterfaces", &UElgEditorBP_UBlueprint::execGetBlueprintInterfaces },
			{ "GetBlueprintNodeStat", &UElgEditorBP_UBlueprint::execGetBlueprintNodeStat },
			{ "GetBlueprintsByPath", &UElgEditorBP_UBlueprint::execGetBlueprintsByPath },
			{ "GetBlueprintsFromObjects", &UElgEditorBP_UBlueprint::execGetBlueprintsFromObjects },
			{ "GetBlueprintsNodeStat", &UElgEditorBP_UBlueprint::execGetBlueprintsNodeStat },
			{ "GetLocalVariableNames", &UElgEditorBP_UBlueprint::execGetLocalVariableNames },
			{ "GetNativeClass", &UElgEditorBP_UBlueprint::execGetNativeClass },
			{ "GetNodeStatsByPath", &UElgEditorBP_UBlueprint::execGetNodeStatsByPath },
			{ "GetNodeUsage", &UElgEditorBP_UBlueprint::execGetNodeUsage },
			{ "GetParentClass", &UElgEditorBP_UBlueprint::execGetParentClass },
			{ "GetUnusedLocalVariableNames", &UElgEditorBP_UBlueprint::execGetUnusedLocalVariableNames },
			{ "GetVariableNames", &UElgEditorBP_UBlueprint::execGetVariableNames },
			{ "HasCommentWith", &UElgEditorBP_UBlueprint::execHasCommentWith },
			{ "HasCompilerError", &UElgEditorBP_UBlueprint::execHasCompilerError },
			{ "HasCompilerErrorBranch", &UElgEditorBP_UBlueprint::execHasCompilerErrorBranch },
			{ "HasNode", &UElgEditorBP_UBlueprint::execHasNode },
			{ "HasNodeBranch", &UElgEditorBP_UBlueprint::execHasNodeBranch },
			{ "HasNodeCommentWith", &UElgEditorBP_UBlueprint::execHasNodeCommentWith },
			{ "IsChildOfClass", &UElgEditorBP_UBlueprint::execIsChildOfClass },
			{ "IsChildOfClassBranch", &UElgEditorBP_UBlueprint::execIsChildOfClassBranch },
			{ "IsConstructionScriptConnected", &UElgEditorBP_UBlueprint::execIsConstructionScriptConnected },
			{ "IsConstructionScriptConnectedBranch", &UElgEditorBP_UBlueprint::execIsConstructionScriptConnectedBranch },
			{ "IsNodePinConnected", &UElgEditorBP_UBlueprint::execIsNodePinConnected },
			{ "IsNodePinConnectedBranch", &UElgEditorBP_UBlueprint::execIsNodePinConnectedBranch },
			{ "IsRunConstructionScriptOnDrag", &UElgEditorBP_UBlueprint::execIsRunConstructionScriptOnDrag },
			{ "IsRunConstructionScriptOnDragBranch", &UElgEditorBP_UBlueprint::execIsRunConstructionScriptOnDragBranch },
			{ "IsStartingWithTick", &UElgEditorBP_UBlueprint::execIsStartingWithTick },
			{ "IsStartingWithTickBranch", &UElgEditorBP_UBlueprint::execIsStartingWithTickBranch },
			{ "RemoveLocalVariable", &UElgEditorBP_UBlueprint::execRemoveLocalVariable },
			{ "RemoveUnusedLocalVariables", &UElgEditorBP_UBlueprint::execRemoveUnusedLocalVariables },
			{ "RenameLocalVariable", &UElgEditorBP_UBlueprint::execRenameLocalVariable },
			{ "SetCanEverTick", &UElgEditorBP_UBlueprint::execSetCanEverTick },
			{ "SetRunConstructionScriptOnDrag", &UElgEditorBP_UBlueprint::execSetRunConstructionScriptOnDrag },
			{ "SetStartingWithTick", &UElgEditorBP_UBlueprint::execSetStartingWithTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics
	{
		struct ElgEditorBP_UBlueprint_eventBlueprintAddComponent_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UActorComponent>  ComponentClass;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintAddComponent_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintAddComponent_Parms, ComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::NewProp_ComponentClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Component" },
		{ "Comment", "/* Add an Component to the Blueprint, if the Blueprint is open you must recompile for it to show up. */" },
		{ "DisplayName", "Add Component" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Add an Component to the Blueprint, if the Blueprint is open you must recompile for it to show up." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "BlueprintAddComponent", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventBlueprintAddComponent_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics
	{
		struct ElgEditorBP_UBlueprint_eventBlueprintAddInterface_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UInterface>  InterfaceClass;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InterfaceClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintAddInterface_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::NewProp_InterfaceClass = { "InterfaceClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintAddInterface_Parms, InterfaceClass), Z_Construct_UClass_UInterface, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::NewProp_InterfaceClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Interface" },
		{ "Comment", "/* Add an Interface to the blueprint */" },
		{ "DisplayName", "Add Interface" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Add an Interface to the blueprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "BlueprintAddInterface", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventBlueprintAddInterface_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics
	{
		struct ElgEditorBP_UBlueprint_eventBlueprintImplementInterface_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UInterface>  InterfaceClass;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InterfaceClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintImplementInterface_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::NewProp_InterfaceClass = { "InterfaceClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintImplementInterface_Parms, InterfaceClass), Z_Construct_UClass_UInterface, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintImplementInterface_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::NewProp_InterfaceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Interface" },
		{ "Comment", "/* Check if the blueprint has the Interfaces of the class */" },
		{ "DeterminesOutputType", "InterfaceClass" },
		{ "DisplayName", "ImplementInterface" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Check if the blueprint has the Interfaces of the class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "BlueprintImplementInterface", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventBlueprintImplementInterface_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics
	{
		struct ElgEditorBP_UBlueprint_eventBlueprintRemoveComponent_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UActorComponent>  ComponentClass;
			bool bOnlyFirst;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyFirst_MetaData[];
#endif
		static void NewProp_bOnlyFirst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyFirst;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintRemoveComponent_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintRemoveComponent_Parms, ComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_bOnlyFirst_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_bOnlyFirst_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventBlueprintRemoveComponent_Parms*)Obj)->bOnlyFirst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_bOnlyFirst = { "bOnlyFirst", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventBlueprintRemoveComponent_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_bOnlyFirst_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_bOnlyFirst_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_bOnlyFirst_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_ComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_bOnlyFirst,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Component" },
		{ "Comment", "/* Remove Component(s) from the Blueprint, if the Blueprint is open you must recompile for it to show up.\n\x09@param  Blueprint\x09\x09The blueprint asset to remove the component from.\n\x09@param  ComponentClass\x09The class of component(s) to remove.\n\x09@param  bOnlyFirst\x09\x09Should it only remove the first or all the instances of the class?\n\x09*/" },
		{ "CPP_Default_bOnlyFirst", "false" },
		{ "DisplayName", "Remove Component" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Remove Component(s) from the Blueprint, if the Blueprint is open you must recompile for it to show up.\n      @param  Blueprint               The blueprint asset to remove the component from.\n      @param  ComponentClass  The class of component(s) to remove.\n      @param  bOnlyFirst              Should it only remove the first or all the instances of the class?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "BlueprintRemoveComponent", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventBlueprintRemoveComponent_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics
	{
		struct ElgEditorBP_UBlueprint_eventBlueprintRemoveInterface_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UInterface>  InterfaceClass;
			bool bPreserveFunctions;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InterfaceClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreserveFunctions_MetaData[];
#endif
		static void NewProp_bPreserveFunctions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreserveFunctions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintRemoveInterface_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_InterfaceClass = { "InterfaceClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintRemoveInterface_Parms, InterfaceClass), Z_Construct_UClass_UInterface, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_bPreserveFunctions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_bPreserveFunctions_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventBlueprintRemoveInterface_Parms*)Obj)->bPreserveFunctions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_bPreserveFunctions = { "bPreserveFunctions", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventBlueprintRemoveInterface_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_bPreserveFunctions_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_bPreserveFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_bPreserveFunctions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_InterfaceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_bPreserveFunctions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Interface" },
		{ "Comment", "/*  \n\x09\x09Remove an interface from the blueprint.\n\x09\x09If bPreserveFunctions is true, then the interface will move its functions to be normal implemented blueprint functions\n\x09*/" },
		{ "CPP_Default_bPreserveFunctions", "false" },
		{ "DisplayName", "Remove Interface" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Remove an interface from the blueprint.\nIf bPreserveFunctions is true, then the interface will move its functions to be normal implemented blueprint functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "BlueprintRemoveInterface", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventBlueprintRemoveInterface_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics
	{
		struct ElgEditorBP_UBlueprint_eventBlueprintSupportComponent_Parms
		{
			UBlueprint* Blueprint;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintSupportComponent_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventBlueprintSupportComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventBlueprintSupportComponent_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Component" },
		{ "Comment", "/* Return if the blueprint supports components or not */" },
		{ "DisplayName", "Support Component" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return if the blueprint supports components or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "BlueprintSupportComponent", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventBlueprintSupportComponent_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics
	{
		struct ElgEditorBP_UBlueprint_eventBlueprintSupportComponentBranch_Parms
		{
			UBlueprint* Blueprint;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintSupportComponentBranch_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintSupportComponentBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Component" },
		{ "Comment", "/* Return if the blueprint supports components or not with a branch pins*/" },
		{ "DisplayName", "Support Component Branch" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return if the blueprint supports components or not with a branch pins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "BlueprintSupportComponentBranch", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventBlueprintSupportComponentBranch_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics
	{
		struct ElgEditorBP_UBlueprint_eventBlueprintSupportInterface_Parms
		{
			UBlueprint* Blueprint;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintSupportInterface_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventBlueprintSupportInterface_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventBlueprintSupportInterface_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Interface" },
		{ "Comment", "/* Return if the blueprint supports Interfaces or not */" },
		{ "DisplayName", "Support Interface" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return if the blueprint supports Interfaces or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "BlueprintSupportInterface", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventBlueprintSupportInterface_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics
	{
		struct ElgEditorBP_UBlueprint_eventBlueprintSupportInterfaceBranch_Parms
		{
			UBlueprint* Blueprint;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintSupportInterfaceBranch_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintSupportInterfaceBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Interface" },
		{ "Comment", "/* Return if the blueprint supports Interfaces or not with a branch pins*/" },
		{ "DisplayName", "Support Interface Branch" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return if the blueprint supports Interfaces or not with a branch pins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "BlueprintSupportInterfaceBranch", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventBlueprintSupportInterfaceBranch_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTick_Statics
	{
		struct ElgEditorBP_UBlueprint_eventCanEverTick_Parms
		{
			UBlueprint* Blueprint;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTick_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventCanEverTick_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventCanEverTick_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventCanEverTick_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTick_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Return the bCanEverTick state */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return the bCanEverTick state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "CanEverTick", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventCanEverTick_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTickBranch_Statics
	{
		struct ElgEditorBP_UBlueprint_eventCanEverTickBranch_Parms
		{
			UBlueprint* Blueprint;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTickBranch_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventCanEverTickBranch_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTickBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTickBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventCanEverTickBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTickBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTickBranch_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTickBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTickBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTickBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Return the bCanEverTick state with branch pins */" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return the bCanEverTick state with branch pins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTickBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "CanEverTickBranch", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventCanEverTickBranch_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTickBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTickBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTickBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTickBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTickBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTickBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics
	{
		struct ElgEditorBP_UBlueprint_eventCompileBlueprint_Parms
		{
			UBlueprint* Blueprint;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventCompileBlueprint_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Compiles the blueprint asset */" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Compiles the blueprint asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "CompileBlueprint", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventCompileBlueprint_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_DeleteNodesByName_Statics
	{
		struct ElgEditorBP_UBlueprint_eventDeleteNodesByName_Parms
		{
			UBlueprint* Blueprint;
			FString NodeName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_DeleteNodesByName_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventDeleteNodesByName_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_DeleteNodesByName_Statics::NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_DeleteNodesByName_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventDeleteNodesByName_Parms, NodeName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_DeleteNodesByName_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_DeleteNodesByName_Statics::NewProp_NodeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_DeleteNodesByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_DeleteNodesByName_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_DeleteNodesByName_Statics::NewProp_NodeName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_DeleteNodesByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Delete any nodes in the blueprint with the NodeName */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Delete any nodes in the blueprint with the NodeName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_DeleteNodesByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "DeleteNodesByName", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventDeleteNodesByName_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_DeleteNodesByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_DeleteNodesByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_DeleteNodesByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_DeleteNodesByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_DeleteNodesByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_DeleteNodesByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClass_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UActorComponent>  ComponentClass;
			bool ExcludeInherited;
			UActorComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeInherited_MetaData[];
#endif
		static void NewProp_ExcludeInherited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExcludeInherited;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClass_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClass_Parms, ComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ExcludeInherited_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ExcludeInherited_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClass_Parms*)Obj)->ExcludeInherited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ExcludeInherited = { "ExcludeInherited", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClass_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ExcludeInherited_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ExcludeInherited_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ExcludeInherited_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClass_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ExcludeInherited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Component" },
		{ "Comment", "/* Returns the first component of the right class */" },
		{ "CPP_Default_ExcludeInherited", "false" },
		{ "DeterminesOutputType", "ComponentClass" },
		{ "DisplayName", "GetComponentOfClass" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Returns the first component of the right class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintComponentOfClass", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClass_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClassBranch_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UActorComponent>  ComponentClass;
			bool ExcludeInherited;
			EBPEditorOutputValidBranch Branches;
			UActorComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeInherited_MetaData[];
#endif
		static void NewProp_ExcludeInherited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExcludeInherited;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClassBranch_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClassBranch_Parms, ComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ExcludeInherited_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ExcludeInherited_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClassBranch_Parms*)Obj)->ExcludeInherited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ExcludeInherited = { "ExcludeInherited", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClassBranch_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ExcludeInherited_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ExcludeInherited_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ExcludeInherited_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClassBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClassBranch_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ExcludeInherited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Component" },
		{ "Comment", "/* Returns the first component of the right class with an branch output pins */" },
		{ "DeterminesOutputType", "ComponentClass" },
		{ "DisplayName", "GetComponentOfClassBranch" },
		{ "ExcludeInherited", "false" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Returns the first component of the right class with an branch output pins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintComponentOfClassBranch", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClassBranch_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintComponents_Parms
		{
			UBlueprint* Blueprint;
			bool ExcludeInherited;
			TArray<UActorComponent*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeInherited_MetaData[];
#endif
		static void NewProp_ExcludeInherited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExcludeInherited;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponents_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ExcludeInherited_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ExcludeInherited_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventGetBlueprintComponents_Parms*)Obj)->ExcludeInherited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ExcludeInherited = { "ExcludeInherited", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponents_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ExcludeInherited_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ExcludeInherited_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ExcludeInherited_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ExcludeInherited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Component" },
		{ "Comment", "/* Returns an array with all the ActorComponents the blueprint has. */" },
		{ "CPP_Default_ExcludeInherited", "false" },
		{ "DisplayName", "GetComponents" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Returns an array with all the ActorComponents the blueprint has." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintComponents", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponents_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClass_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UActorComponent>  ComponentClass;
			bool ExcludeInherited;
			TArray<UActorComponent*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeInherited_MetaData[];
#endif
		static void NewProp_ExcludeInherited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExcludeInherited;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClass_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClass_Parms, ComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ExcludeInherited_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ExcludeInherited_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClass_Parms*)Obj)->ExcludeInherited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ExcludeInherited = { "ExcludeInherited", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClass_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ExcludeInherited_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ExcludeInherited_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ExcludeInherited_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ExcludeInherited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Component" },
		{ "Comment", "/* Returns all the components of the right class */" },
		{ "CPP_Default_ExcludeInherited", "false" },
		{ "DeterminesOutputType", "ComponentClass" },
		{ "DisplayName", "GetComponentsOfClass" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Returns all the components of the right class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintComponentsOfClass", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClass_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClassBranch_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UActorComponent>  ComponentClass;
			bool ExcludeInherited;
			EBPEditorOutputValidBranch Branches;
			TArray<UActorComponent*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeInherited_MetaData[];
#endif
		static void NewProp_ExcludeInherited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExcludeInherited;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClassBranch_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClassBranch_Parms, ComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ExcludeInherited_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ExcludeInherited_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClassBranch_Parms*)Obj)->ExcludeInherited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ExcludeInherited = { "ExcludeInherited", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClassBranch_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ExcludeInherited_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ExcludeInherited_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ExcludeInherited_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClassBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClassBranch_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ExcludeInherited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Component" },
		{ "Comment", "/* Returns all the components of the right class with an branch output pins*/" },
		{ "DeterminesOutputType", "ComponentClass" },
		{ "DisplayName", "GetComponentsOfClassBranch" },
		{ "ExcludeInherited", "false" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Returns all the components of the right class with an branch output pins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintComponentsOfClassBranch", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClassBranch_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintFromAssetData_Parms
		{
			FAssetData AssetDataStruct;
			EBPEditorOutputValidBranch Branches;
			UBlueprint* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStruct;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintFromAssetData_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_AssetDataStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_AssetDataStruct_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintFromAssetData_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintFromAssetData_Parms, ReturnValue), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_AssetDataStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Get the UBlueprint object from the AssetData */" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Get the UBlueprint object from the AssetData" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintFromAssetData", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintFromAssetData_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintFromObject_Parms
		{
			UObject* Object;
			EBPEditorOutputValidBranch Branches;
			UBlueprint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintFromObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintFromObject_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintFromObject_Parms, ReturnValue), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Get the UBlueprint object from an UObject */" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Get the UBlueprint object from an UObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintFromObject", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintFromObject_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintInterfaces_Parms
		{
			UBlueprint* Blueprint;
			bool ExcludeInherited;
			TArray<TSubclassOf<UInterface> > ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeInherited_MetaData[];
#endif
		static void NewProp_ExcludeInherited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExcludeInherited;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintInterfaces_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ExcludeInherited_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ExcludeInherited_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventGetBlueprintInterfaces_Parms*)Obj)->ExcludeInherited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ExcludeInherited = { "ExcludeInherited", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintInterfaces_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ExcludeInherited_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ExcludeInherited_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ExcludeInherited_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInterface, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintInterfaces_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ExcludeInherited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Interface" },
		{ "Comment", "/* Returns an array with all the Interfaces the blueprint has. */" },
		{ "CPP_Default_ExcludeInherited", "false" },
		{ "DisplayName", "GetInterfaces" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Returns an array with all the Interfaces the blueprint has." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintInterfaces", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintInterfaces_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintNodeStat_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintNodeStat_Parms
		{
			UBlueprint* Blueprint;
			FS_ElgBlueprintNodeStats ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintNodeStat_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintNodeStat_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintNodeStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintNodeStat_Parms, ReturnValue), Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintNodeStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintNodeStat_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintNodeStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintNodeStat_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintNodeStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintNodeStat", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintNodeStat_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintNodeStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintNodeStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintNodeStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintNodeStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintNodeStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintNodeStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintsByPath_Parms
		{
			FName Path;
			bool RecursivePaths;
			TArray<UBlueprint*> ReturnValue;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintsByPath_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::NewProp_RecursivePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::NewProp_RecursivePaths_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventGetBlueprintsByPath_Parms*)Obj)->RecursivePaths = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::NewProp_RecursivePaths = { "RecursivePaths", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintsByPath_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::NewProp_RecursivePaths_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::NewProp_RecursivePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::NewProp_RecursivePaths_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintsByPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::NewProp_RecursivePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/*=true*/" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "=true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintsByPath", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintsByPath_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsFromObjects_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintsFromObjects_Parms
		{
			TArray<UObject*> Objects;
			TArray<UBlueprint*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Objects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsFromObjects_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsFromObjects_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintsFromObjects_Parms, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsFromObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsFromObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintsFromObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsFromObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsFromObjects_Statics::NewProp_Objects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsFromObjects_Statics::NewProp_Objects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsFromObjects_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsFromObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsFromObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsFromObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintsFromObjects", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintsFromObjects_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsFromObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsFromObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsFromObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsFromObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsFromObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsFromObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsNodeStat_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintsNodeStat_Parms
		{
			TArray<UBlueprint*> Blueprints;
			FS_ElgBlueprintsNodeStats ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprints_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Blueprints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsNodeStat_Statics::NewProp_Blueprints_Inner = { "Blueprints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsNodeStat_Statics::NewProp_Blueprints = { "Blueprints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintsNodeStat_Parms, Blueprints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsNodeStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintsNodeStat_Parms, ReturnValue), Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsNodeStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsNodeStat_Statics::NewProp_Blueprints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsNodeStat_Statics::NewProp_Blueprints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsNodeStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsNodeStat_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsNodeStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintsNodeStat", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintsNodeStat_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsNodeStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsNodeStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsNodeStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsNodeStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsNodeStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsNodeStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetLocalVariableNames_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetLocalVariableNames_Parms
		{
			UBlueprint* Blueprint;
			TArray<FString> VariableNames;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VariableNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VariableNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetLocalVariableNames_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetLocalVariableNames_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetLocalVariableNames_Statics::NewProp_VariableNames_Inner = { "VariableNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetLocalVariableNames_Statics::NewProp_VariableNames = { "VariableNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetLocalVariableNames_Parms, VariableNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetLocalVariableNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetLocalVariableNames_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetLocalVariableNames_Statics::NewProp_VariableNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetLocalVariableNames_Statics::NewProp_VariableNames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetLocalVariableNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Return an array of local variable names the blueprint has, VariableName @ FunctionName */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return an array of local variable names the blueprint has, VariableName @ FunctionName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetLocalVariableNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetLocalVariableNames", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventGetLocalVariableNames_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetLocalVariableNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetLocalVariableNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetLocalVariableNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetLocalVariableNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetLocalVariableNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetLocalVariableNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNativeClass_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetNativeClass_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UObject>  ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNativeClass_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetNativeClass_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNativeClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetNativeClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNativeClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNativeClass_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNativeClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNativeClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Return the Native class for a blueprint */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return the Native class for a blueprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNativeClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetNativeClass", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventGetNativeClass_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNativeClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNativeClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNativeClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNativeClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNativeClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNativeClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeStatsByPath_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetNodeStatsByPath_Parms
		{
			FName Path;
			FS_ElgBlueprintsNodeStats ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeStatsByPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeStatsByPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetNodeStatsByPath_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeStatsByPath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeStatsByPath_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeStatsByPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetNodeStatsByPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeStatsByPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeStatsByPath_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeStatsByPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeStatsByPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeStatsByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetNodeStatsByPath", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventGetNodeStatsByPath_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeStatsByPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeStatsByPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeStatsByPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeStatsByPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeStatsByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeStatsByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeUsage_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetNodeUsage_Parms
		{
			UBlueprint* Blueprint;
			TMap<FString,int32> NodeUsageMap;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeUsageMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeUsageMap_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NodeUsageMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeUsage_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetNodeUsage_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeUsage_Statics::NewProp_NodeUsageMap_ValueProp = { "NodeUsageMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeUsage_Statics::NewProp_NodeUsageMap_Key_KeyProp = { "NodeUsageMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeUsage_Statics::NewProp_NodeUsageMap = { "NodeUsageMap", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetNodeUsage_Parms, NodeUsageMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeUsage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeUsage_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeUsage_Statics::NewProp_NodeUsageMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeUsage_Statics::NewProp_NodeUsageMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeUsage_Statics::NewProp_NodeUsageMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeUsage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeUsage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetNodeUsage", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventGetNodeUsage_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeUsage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeUsage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeUsage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeUsage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeUsage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeUsage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetParentClass_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UObject>  ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetParentClass_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetParentClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/*  */" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetParentClass", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventGetParentClass_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetUnusedLocalVariableNames_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetUnusedLocalVariableNames_Parms
		{
			UBlueprint* Blueprint;
			TArray<FString> VariableNames;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VariableNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VariableNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetUnusedLocalVariableNames_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetUnusedLocalVariableNames_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetUnusedLocalVariableNames_Statics::NewProp_VariableNames_Inner = { "VariableNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetUnusedLocalVariableNames_Statics::NewProp_VariableNames = { "VariableNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetUnusedLocalVariableNames_Parms, VariableNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetUnusedLocalVariableNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetUnusedLocalVariableNames_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetUnusedLocalVariableNames_Statics::NewProp_VariableNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetUnusedLocalVariableNames_Statics::NewProp_VariableNames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetUnusedLocalVariableNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Return an array of unused local variable names the blueprint has, VariableName @ FunctionName */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return an array of unused local variable names the blueprint has, VariableName @ FunctionName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetUnusedLocalVariableNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetUnusedLocalVariableNames", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventGetUnusedLocalVariableNames_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetUnusedLocalVariableNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetUnusedLocalVariableNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetUnusedLocalVariableNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetUnusedLocalVariableNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetUnusedLocalVariableNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetUnusedLocalVariableNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetVariableNames_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetVariableNames_Parms
		{
			UBlueprint* Blueprint;
			TArray<FString> VariableNames;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VariableNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VariableNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetVariableNames_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetVariableNames_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetVariableNames_Statics::NewProp_VariableNames_Inner = { "VariableNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetVariableNames_Statics::NewProp_VariableNames = { "VariableNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetVariableNames_Parms, VariableNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetVariableNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetVariableNames_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetVariableNames_Statics::NewProp_VariableNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetVariableNames_Statics::NewProp_VariableNames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetVariableNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Return an array of variable names the blueprint has, VariableName */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return an array of variable names the blueprint has, VariableName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetVariableNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetVariableNames", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventGetVariableNames_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetVariableNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetVariableNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetVariableNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetVariableNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetVariableNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetVariableNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics
	{
		struct ElgEditorBP_UBlueprint_eventHasCommentWith_Parms
		{
			UBlueprint* Blueprint;
			FString InComment;
			bool Contains;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contains_MetaData[];
#endif
		static void NewProp_Contains_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Contains;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventHasCommentWith_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::NewProp_InComment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::NewProp_InComment = { "InComment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventHasCommentWith_Parms, InComment), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::NewProp_InComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::NewProp_InComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::NewProp_Contains_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::NewProp_Contains_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventHasCommentWith_Parms*)Obj)->Contains = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::NewProp_Contains = { "Contains", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventHasCommentWith_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::NewProp_Contains_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::NewProp_Contains_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::NewProp_Contains_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventHasCommentWith_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::NewProp_InComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::NewProp_Contains,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Check if a comment has the InComment string */" },
		{ "Contains", "true" },
		{ "DisplayName", "Has Comment Node With String" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Check if a comment has the InComment string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "HasCommentWith", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventHasCommentWith_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerError_Statics
	{
		struct ElgEditorBP_UBlueprint_eventHasCompilerError_Parms
		{
			UBlueprint* Blueprint;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerError_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventHasCompilerError_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventHasCompilerError_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventHasCompilerError_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerError_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerError_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "HasCompilerError", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventHasCompilerError_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerErrorBranch_Statics
	{
		struct ElgEditorBP_UBlueprint_eventHasCompilerErrorBranch_Parms
		{
			UBlueprint* Blueprint;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerErrorBranch_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventHasCompilerErrorBranch_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerErrorBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerErrorBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventHasCompilerErrorBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerErrorBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerErrorBranch_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerErrorBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerErrorBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerErrorBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerErrorBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "HasCompilerErrorBranch", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventHasCompilerErrorBranch_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerErrorBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerErrorBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerErrorBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerErrorBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerErrorBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerErrorBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics
	{
		struct ElgEditorBP_UBlueprint_eventHasNode_Parms
		{
			UBlueprint* Blueprint;
			FString NodeName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventHasNode_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics::NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventHasNode_Parms, NodeName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics::NewProp_NodeName_MetaData)) };
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventHasNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventHasNode_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics::NewProp_NodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Check if the blueprint has a node with NodeName */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Check if the blueprint has a node with NodeName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "HasNode", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventHasNode_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics
	{
		struct ElgEditorBP_UBlueprint_eventHasNodeBranch_Parms
		{
			UBlueprint* Blueprint;
			FString NodeName;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventHasNodeBranch_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics::NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventHasNodeBranch_Parms, NodeName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics::NewProp_NodeName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventHasNodeBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics::NewProp_NodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Check if the blueprint has a node with NodeName */" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Check if the blueprint has a node with NodeName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "HasNodeBranch", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventHasNodeBranch_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics
	{
		struct ElgEditorBP_UBlueprint_eventHasNodeCommentWith_Parms
		{
			UBlueprint* Blueprint;
			FString InComment;
			bool Contains;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contains_MetaData[];
#endif
		static void NewProp_Contains_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Contains;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventHasNodeCommentWith_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::NewProp_InComment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::NewProp_InComment = { "InComment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventHasNodeCommentWith_Parms, InComment), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::NewProp_InComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::NewProp_InComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::NewProp_Contains_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::NewProp_Contains_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventHasNodeCommentWith_Parms*)Obj)->Contains = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::NewProp_Contains = { "Contains", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventHasNodeCommentWith_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::NewProp_Contains_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::NewProp_Contains_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::NewProp_Contains_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventHasNodeCommentWith_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::NewProp_InComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::NewProp_Contains,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Check if any node has a Node Comment, on the node or in a comment */" },
		{ "Contains", "true" },
		{ "DisplayName", "Has Node Comment With String" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Check if any node has a Node Comment, on the node or in a comment" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "HasNodeCommentWith", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventHasNodeCommentWith_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClass_Statics
	{
		struct ElgEditorBP_UBlueprint_eventIsChildOfClass_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UObject>  ChildClass;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ChildClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClass_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsChildOfClass_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClass_Statics::NewProp_ChildClass = { "ChildClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsChildOfClass_Parms, ChildClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventIsChildOfClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventIsChildOfClass_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClass_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClass_Statics::NewProp_ChildClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Test if a blueprint is a child of the ChildClass */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Test if a blueprint is a child of the ChildClass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "IsChildOfClass", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventIsChildOfClass_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClassBranch_Statics
	{
		struct ElgEditorBP_UBlueprint_eventIsChildOfClassBranch_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UObject>  ChildClass;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ChildClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClassBranch_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsChildOfClassBranch_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClassBranch_Statics::NewProp_ChildClass = { "ChildClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsChildOfClassBranch_Parms, ChildClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClassBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClassBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsChildOfClassBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClassBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClassBranch_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClassBranch_Statics::NewProp_ChildClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClassBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClassBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClassBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Test if a blueprint is a child of the ChildClass */" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Test if a blueprint is a child of the ChildClass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClassBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "IsChildOfClassBranch", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventIsChildOfClassBranch_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClassBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClassBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClassBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClassBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClassBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClassBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnected_Statics
	{
		struct ElgEditorBP_UBlueprint_eventIsConstructionScriptConnected_Parms
		{
			UBlueprint* Blueprint;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnected_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsConstructionScriptConnected_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventIsConstructionScriptConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventIsConstructionScriptConnected_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnected_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Return if the ConstructionScript node has anything connected */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return if the ConstructionScript node has anything connected" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "IsConstructionScriptConnected", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventIsConstructionScriptConnected_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnectedBranch_Statics
	{
		struct ElgEditorBP_UBlueprint_eventIsConstructionScriptConnectedBranch_Parms
		{
			UBlueprint* Blueprint;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnectedBranch_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsConstructionScriptConnectedBranch_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnectedBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnectedBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsConstructionScriptConnectedBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnectedBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnectedBranch_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnectedBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnectedBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnectedBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Return if the ConstructionScript node has anything connected */" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return if the ConstructionScript node has anything connected" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnectedBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "IsConstructionScriptConnectedBranch", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventIsConstructionScriptConnectedBranch_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnectedBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnectedBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnectedBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnectedBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnectedBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnectedBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics
	{
		struct ElgEditorBP_UBlueprint_eventIsNodePinConnected_Parms
		{
			UBlueprint* Blueprint;
			FString NodeName;
			FString PinName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PinName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsNodePinConnected_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsNodePinConnected_Parms, NodeName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::NewProp_NodeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::NewProp_PinName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsNodePinConnected_Parms, PinName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::NewProp_PinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::NewProp_PinName_MetaData)) };
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventIsNodePinConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventIsNodePinConnected_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::NewProp_NodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::NewProp_PinName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Check if the blueprint has a node with NodeName with a Pin called PinNamed that is connected to anything */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Check if the blueprint has a node with NodeName with a Pin called PinNamed that is connected to anything" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "IsNodePinConnected", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventIsNodePinConnected_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics
	{
		struct ElgEditorBP_UBlueprint_eventIsNodePinConnectedBranch_Parms
		{
			UBlueprint* Blueprint;
			FString NodeName;
			FString PinName;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PinName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsNodePinConnectedBranch_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsNodePinConnectedBranch_Parms, NodeName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::NewProp_NodeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::NewProp_PinName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsNodePinConnectedBranch_Parms, PinName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::NewProp_PinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::NewProp_PinName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsNodePinConnectedBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::NewProp_NodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::NewProp_PinName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Check if the blueprint has a node with NodeName with a Pin called PinNamed that is connected to anything */" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Check if the blueprint has a node with NodeName with a Pin called PinNamed that is connected to anything" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "IsNodePinConnectedBranch", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventIsNodePinConnectedBranch_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDrag_Statics
	{
		struct ElgEditorBP_UBlueprint_eventIsRunConstructionScriptOnDrag_Parms
		{
			UBlueprint* Blueprint;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDrag_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsRunConstructionScriptOnDrag_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDrag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventIsRunConstructionScriptOnDrag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDrag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventIsRunConstructionScriptOnDrag_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDrag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDrag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDrag_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDrag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDrag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Return the bRunConstructionScriptOnDrag state */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return the bRunConstructionScriptOnDrag state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDrag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "IsRunConstructionScriptOnDrag", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventIsRunConstructionScriptOnDrag_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDrag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDrag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDrag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDrag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDrag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDrag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDragBranch_Statics
	{
		struct ElgEditorBP_UBlueprint_eventIsRunConstructionScriptOnDragBranch_Parms
		{
			UBlueprint* Blueprint;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDragBranch_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsRunConstructionScriptOnDragBranch_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDragBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDragBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsRunConstructionScriptOnDragBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDragBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDragBranch_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDragBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDragBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDragBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Return the bRunConstructionScriptOnDrag state with branch pins */" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return the bRunConstructionScriptOnDrag state with branch pins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDragBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "IsRunConstructionScriptOnDragBranch", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventIsRunConstructionScriptOnDragBranch_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDragBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDragBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDragBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDragBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDragBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDragBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTick_Statics
	{
		struct ElgEditorBP_UBlueprint_eventIsStartingWithTick_Parms
		{
			UBlueprint* Blueprint;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTick_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsStartingWithTick_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventIsStartingWithTick_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventIsStartingWithTick_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTick_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Return the bStartWithTickEnabled state */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return the bStartWithTickEnabled state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "IsStartingWithTick", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventIsStartingWithTick_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTickBranch_Statics
	{
		struct ElgEditorBP_UBlueprint_eventIsStartingWithTickBranch_Parms
		{
			UBlueprint* Blueprint;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTickBranch_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsStartingWithTickBranch_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTickBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTickBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventIsStartingWithTickBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTickBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTickBranch_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTickBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTickBranch_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTickBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Return the bStartWithTickEnabled state with branch pins */" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return the bStartWithTickEnabled state with branch pins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTickBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "IsStartingWithTickBranch", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventIsStartingWithTickBranch_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTickBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTickBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTickBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTickBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTickBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTickBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics
	{
		struct ElgEditorBP_UBlueprint_eventRemoveLocalVariable_Parms
		{
			UBlueprint* Blueprint;
			FString FunctionName;
			FString VariableName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventRemoveLocalVariable_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventRemoveLocalVariable_Parms, FunctionName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::NewProp_VariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventRemoveLocalVariable_Parms, VariableName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::NewProp_VariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::NewProp_VariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::NewProp_VariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Remove a local variable in FunctionName */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Remove a local variable in FunctionName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "RemoveLocalVariable", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventRemoveLocalVariable_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveUnusedLocalVariables_Statics
	{
		struct ElgEditorBP_UBlueprint_eventRemoveUnusedLocalVariables_Parms
		{
			UBlueprint* Blueprint;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveUnusedLocalVariables_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventRemoveUnusedLocalVariables_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveUnusedLocalVariables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveUnusedLocalVariables_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveUnusedLocalVariables_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Remove any unused variables in the blueprint */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Remove any unused variables in the blueprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveUnusedLocalVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "RemoveUnusedLocalVariables", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventRemoveUnusedLocalVariables_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveUnusedLocalVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveUnusedLocalVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveUnusedLocalVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveUnusedLocalVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveUnusedLocalVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveUnusedLocalVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics
	{
		struct ElgEditorBP_UBlueprint_eventRenameLocalVariable_Parms
		{
			UBlueprint* Blueprint;
			FString FunctionName;
			FString OldVariableName;
			FString NewVariableName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OldVariableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventRenameLocalVariable_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventRenameLocalVariable_Parms, FunctionName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::NewProp_OldVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::NewProp_OldVariableName = { "OldVariableName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventRenameLocalVariable_Parms, OldVariableName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::NewProp_OldVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::NewProp_OldVariableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::NewProp_NewVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::NewProp_NewVariableName = { "NewVariableName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventRenameLocalVariable_Parms, NewVariableName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::NewProp_NewVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::NewProp_NewVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::NewProp_OldVariableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::NewProp_NewVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Rename a local variable in FunctionName */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Rename a local variable in FunctionName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "RenameLocalVariable", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventRenameLocalVariable_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick_Statics
	{
		struct ElgEditorBP_UBlueprint_eventSetCanEverTick_Parms
		{
			UBlueprint* Blueprint;
			bool bEnabled;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventSetCanEverTick_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventSetCanEverTick_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventSetCanEverTick_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Set the bCanEverTick state */" },
		{ "CPP_Default_bEnabled", "false" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Set the bCanEverTick state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "SetCanEverTick", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventSetCanEverTick_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag_Statics
	{
		struct ElgEditorBP_UBlueprint_eventSetRunConstructionScriptOnDrag_Parms
		{
			UBlueprint* Blueprint;
			bool bEnabled;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventSetRunConstructionScriptOnDrag_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventSetRunConstructionScriptOnDrag_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventSetRunConstructionScriptOnDrag_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Set the bRunConstructionScriptOnDrag state */" },
		{ "CPP_Default_bEnabled", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Set the bRunConstructionScriptOnDrag state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "SetRunConstructionScriptOnDrag", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventSetRunConstructionScriptOnDrag_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick_Statics
	{
		struct ElgEditorBP_UBlueprint_eventSetStartingWithTick_Parms
		{
			UBlueprint* Blueprint;
			bool bEnabled;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventSetStartingWithTick_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventSetStartingWithTick_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventSetStartingWithTick_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Comment", "/* Set the bStartWithTickEnabled state */" },
		{ "CPP_Default_bEnabled", "false" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Set the bStartWithTickEnabled state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "SetStartingWithTick", nullptr, nullptr, sizeof(ElgEditorBP_UBlueprint_eventSetStartingWithTick_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElgEditorBP_UBlueprint_NoRegister()
	{
		return UElgEditorBP_UBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent, "BlueprintAddComponent" }, // 2876736267
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface, "BlueprintAddInterface" }, // 3353826350
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface, "BlueprintImplementInterface" }, // 2154265919
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent, "BlueprintRemoveComponent" }, // 1662367480
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface, "BlueprintRemoveInterface" }, // 2014397851
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent, "BlueprintSupportComponent" }, // 74283270
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch, "BlueprintSupportComponentBranch" }, // 3964272676
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface, "BlueprintSupportInterface" }, // 3492454280
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch, "BlueprintSupportInterfaceBranch" }, // 1884097417
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTick, "CanEverTick" }, // 3729692493
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_CanEverTickBranch, "CanEverTickBranch" }, // 261877920
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint, "CompileBlueprint" }, // 2831792180
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_DeleteNodesByName, "DeleteNodesByName" }, // 4046172373
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass, "GetBlueprintComponentOfClass" }, // 1760335530
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch, "GetBlueprintComponentOfClassBranch" }, // 1084230499
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents, "GetBlueprintComponents" }, // 1602436663
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass, "GetBlueprintComponentsOfClass" }, // 3446691566
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch, "GetBlueprintComponentsOfClassBranch" }, // 702320616
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData, "GetBlueprintFromAssetData" }, // 3140880064
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject, "GetBlueprintFromObject" }, // 3694917160
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces, "GetBlueprintInterfaces" }, // 425894020
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintNodeStat, "GetBlueprintNodeStat" }, // 2978576771
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsByPath, "GetBlueprintsByPath" }, // 3216174562
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsFromObjects, "GetBlueprintsFromObjects" }, // 2700986294
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintsNodeStat, "GetBlueprintsNodeStat" }, // 942684898
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetLocalVariableNames, "GetLocalVariableNames" }, // 3779022018
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNativeClass, "GetNativeClass" }, // 3598842722
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeStatsByPath, "GetNodeStatsByPath" }, // 2377418131
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetNodeUsage, "GetNodeUsage" }, // 1693646026
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass, "GetParentClass" }, // 294533434
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetUnusedLocalVariableNames, "GetUnusedLocalVariableNames" }, // 2615678453
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetVariableNames, "GetVariableNames" }, // 4234046583
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCommentWith, "HasCommentWith" }, // 2354111281
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerError, "HasCompilerError" }, // 3979731395
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasCompilerErrorBranch, "HasCompilerErrorBranch" }, // 2317492180
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNode, "HasNode" }, // 397073247
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeBranch, "HasNodeBranch" }, // 3207497211
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_HasNodeCommentWith, "HasNodeCommentWith" }, // 1889026331
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClass, "IsChildOfClass" }, // 354851501
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsChildOfClassBranch, "IsChildOfClassBranch" }, // 3233945488
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnected, "IsConstructionScriptConnected" }, // 3618842689
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsConstructionScriptConnectedBranch, "IsConstructionScriptConnectedBranch" }, // 2741595585
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnected, "IsNodePinConnected" }, // 254258687
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsNodePinConnectedBranch, "IsNodePinConnectedBranch" }, // 2225201729
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDrag, "IsRunConstructionScriptOnDrag" }, // 981216116
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsRunConstructionScriptOnDragBranch, "IsRunConstructionScriptOnDragBranch" }, // 2243483354
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTick, "IsStartingWithTick" }, // 3533647125
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_IsStartingWithTickBranch, "IsStartingWithTickBranch" }, // 46988897
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveLocalVariable, "RemoveLocalVariable" }, // 1536247391
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_RemoveUnusedLocalVariables, "RemoveUnusedLocalVariables" }, // 346290633
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_RenameLocalVariable, "RenameLocalVariable" }, // 2214933792
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetCanEverTick, "SetCanEverTick" }, // 3803382659
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetRunConstructionScriptOnDrag, "SetRunConstructionScriptOnDrag" }, // 2277499273
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_SetStartingWithTick, "SetStartingWithTick" }, // 1775943718
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgEditorBP_UBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics::ClassParams = {
		&UElgEditorBP_UBlueprint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgEditorBP_UBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgEditorBP_UBlueprint, 3827625866);
	template<> ELGEDITORSCRIPTING_API UClass* StaticClass<UElgEditorBP_UBlueprint>()
	{
		return UElgEditorBP_UBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgEditorBP_UBlueprint(Z_Construct_UClass_UElgEditorBP_UBlueprint, &UElgEditorBP_UBlueprint::StaticClass, TEXT("/Script/ElgEditorScripting"), TEXT("UElgEditorBP_UBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgEditorBP_UBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
