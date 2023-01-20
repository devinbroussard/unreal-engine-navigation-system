// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Compass_HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompass_HUD() {}
// Cross Module References
	MYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FWaypointMarker();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FWaypoint();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UCompass_HUD_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UCompass_HUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FWaypointMarker::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MYPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FWaypointMarker_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaypointMarker, Z_Construct_UPackage__Script_MyProject(), TEXT("WaypointMarker"), sizeof(FWaypointMarker), Get_Z_Construct_UScriptStruct_FWaypointMarker_Hash());
	}
	return Singleton;
}
template<> MYPROJECT_API UScriptStruct* StaticStruct<FWaypointMarker>()
{
	return FWaypointMarker::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWaypointMarker(FWaypointMarker::StaticStruct, TEXT("/Script/MyProject"), TEXT("WaypointMarker"), false, nullptr, nullptr);
static struct FScriptStruct_MyProject_StaticRegisterNativesFWaypointMarker
{
	FScriptStruct_MyProject_StaticRegisterNativesFWaypointMarker()
	{
		UScriptStruct::DeferCppStructOps<FWaypointMarker>(FName(TEXT("WaypointMarker")));
	}
} ScriptStruct_MyProject_StaticRegisterNativesFWaypointMarker;
	struct Z_Construct_UScriptStruct_FWaypointMarker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Waypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Waypoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CanvasSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaypointMarker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Compass_HUD.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaypointMarker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaypointMarker>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaypointMarker_Statics::NewProp_Waypoint_MetaData[] = {
		{ "Category", "WaypointMarker" },
		{ "ModuleRelativePath", "Compass_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaypointMarker_Statics::NewProp_Waypoint = { "Waypoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaypointMarker, Waypoint), Z_Construct_UScriptStruct_FWaypoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaypointMarker_Statics::NewProp_Waypoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaypointMarker_Statics::NewProp_Waypoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaypointMarker_Statics::NewProp_CanvasSlot_MetaData[] = {
		{ "Category", "WaypointMarker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Compass_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWaypointMarker_Statics::NewProp_CanvasSlot = { "CanvasSlot", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaypointMarker, CanvasSlot), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaypointMarker_Statics::NewProp_CanvasSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaypointMarker_Statics::NewProp_CanvasSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaypointMarker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaypointMarker_Statics::NewProp_Waypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaypointMarker_Statics::NewProp_CanvasSlot,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaypointMarker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
		nullptr,
		&NewStructOps,
		"WaypointMarker",
		sizeof(FWaypointMarker),
		alignof(FWaypointMarker),
		Z_Construct_UScriptStruct_FWaypointMarker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaypointMarker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaypointMarker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaypointMarker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaypointMarker()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWaypointMarker_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MyProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WaypointMarker"), sizeof(FWaypointMarker), Get_Z_Construct_UScriptStruct_FWaypointMarker_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWaypointMarker_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWaypointMarker_Hash() { return 656613625U; }
	DEFINE_FUNCTION(UCompass_HUD::execRemoveWaypoint)
	{
		P_GET_STRUCT(FWaypoint,Z_Param_waypoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveWaypoint(Z_Param_waypoint);
		P_NATIVE_END;
	}
	void UCompass_HUD::StaticRegisterNativesUCompass_HUD()
	{
		UClass* Class = UCompass_HUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveWaypoint", &UCompass_HUD::execRemoveWaypoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCompass_HUD_RemoveWaypoint_Statics
	{
		struct Compass_HUD_eventRemoveWaypoint_Parms
		{
			FWaypoint waypoint;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_waypoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompass_HUD_RemoveWaypoint_Statics::NewProp_waypoint = { "waypoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Compass_HUD_eventRemoveWaypoint_Parms, waypoint), Z_Construct_UScriptStruct_FWaypoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompass_HUD_RemoveWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompass_HUD_RemoveWaypoint_Statics::NewProp_waypoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompass_HUD_RemoveWaypoint_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Removes a waypoint marker from the WaypointMarkers array.\n/// </summary>\n" },
		{ "ModuleRelativePath", "Compass_HUD.h" },
		{ "ToolTip", "<summary>\nRemoves a waypoint marker from the WaypointMarkers array.\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompass_HUD_RemoveWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompass_HUD, nullptr, "RemoveWaypoint", nullptr, nullptr, sizeof(Compass_HUD_eventRemoveWaypoint_Parms), Z_Construct_UFunction_UCompass_HUD_RemoveWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompass_HUD_RemoveWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompass_HUD_RemoveWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompass_HUD_RemoveWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompass_HUD_RemoveWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCompass_HUD_RemoveWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCompass_HUD_NoRegister()
	{
		return UCompass_HUD::StaticClass();
	}
	struct Z_Construct_UClass_UCompass_HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalMarker;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaypointMarkers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaypointMarkers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WaypointMarkers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompass_HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCompass_HUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCompass_HUD_RemoveWaypoint, "RemoveWaypoint" }, // 4113789649
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompass_HUD_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Compass blueprint.\n */" },
		{ "IncludePath", "Compass_HUD.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Compass_HUD.h" },
		{ "ToolTip", "Compass blueprint." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompass_HUD_Statics::NewProp_OriginalMarker_MetaData[] = {
		{ "Category", "Compass_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Compass_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompass_HUD_Statics::NewProp_OriginalMarker = { "OriginalMarker", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCompass_HUD, OriginalMarker), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompass_HUD_Statics::NewProp_OriginalMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompass_HUD_Statics::NewProp_OriginalMarker_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCompass_HUD_Statics::NewProp_WaypointMarkers_Inner = { "WaypointMarkers", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWaypointMarker, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompass_HUD_Statics::NewProp_WaypointMarkers_MetaData[] = {
		{ "Category", "Compass_HUD" },
		{ "ModuleRelativePath", "Compass_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompass_HUD_Statics::NewProp_WaypointMarkers = { "WaypointMarkers", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCompass_HUD, WaypointMarkers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCompass_HUD_Statics::NewProp_WaypointMarkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompass_HUD_Statics::NewProp_WaypointMarkers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompass_HUD_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Compass_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Compass_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompass_HUD_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCompass_HUD, Points), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompass_HUD_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompass_HUD_Statics::NewProp_Points_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompass_HUD_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Compass_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Compass_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompass_HUD_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCompass_HUD, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompass_HUD_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompass_HUD_Statics::NewProp_FollowCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompass_HUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompass_HUD_Statics::NewProp_OriginalMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompass_HUD_Statics::NewProp_WaypointMarkers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompass_HUD_Statics::NewProp_WaypointMarkers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompass_HUD_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompass_HUD_Statics::NewProp_FollowCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompass_HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompass_HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCompass_HUD_Statics::ClassParams = {
		&UCompass_HUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCompass_HUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompass_HUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompass_HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompass_HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompass_HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCompass_HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCompass_HUD, 604523046);
	template<> MYPROJECT_API UClass* StaticClass<UCompass_HUD>()
	{
		return UCompass_HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCompass_HUD(Z_Construct_UClass_UCompass_HUD, &UCompass_HUD::StaticClass, TEXT("/Script/MyProject"), TEXT("UCompass_HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompass_HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
