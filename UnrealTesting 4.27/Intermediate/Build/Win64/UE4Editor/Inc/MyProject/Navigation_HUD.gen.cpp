// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Navigation_HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigation_HUD() {}
// Cross Module References
	MYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FWaypoint();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	MYPROJECT_API UClass* Z_Construct_UClass_UNavigation_HUD_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UNavigation_HUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	MYPROJECT_API UClass* Z_Construct_UClass_UCompass_HUD_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FWaypoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MYPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FWaypoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaypoint, Z_Construct_UPackage__Script_MyProject(), TEXT("Waypoint"), sizeof(FWaypoint), Get_Z_Construct_UScriptStruct_FWaypoint_Hash());
	}
	return Singleton;
}
template<> MYPROJECT_API UScriptStruct* StaticStruct<FWaypoint>()
{
	return FWaypoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWaypoint(FWaypoint::StaticStruct, TEXT("/Script/MyProject"), TEXT("Waypoint"), false, nullptr, nullptr);
static struct FScriptStruct_MyProject_StaticRegisterNativesFWaypoint
{
	FScriptStruct_MyProject_StaticRegisterNativesFWaypoint()
	{
		UScriptStruct::DeferCppStructOps<FWaypoint>(FName(TEXT("Waypoint")));
	}
} ScriptStruct_MyProject_StaticRegisterNativesFWaypoint;
	struct Z_Construct_UScriptStruct_FWaypoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MarkerColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaypoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Navigation_HUD.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaypoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaypoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaypoint_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Waypoint" },
		{ "ModuleRelativePath", "Navigation_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaypoint_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaypoint, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaypoint_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaypoint_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaypoint_Statics::NewProp_MarkerColor_MetaData[] = {
		{ "Category", "Waypoint" },
		{ "ModuleRelativePath", "Navigation_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaypoint_Statics::NewProp_MarkerColor = { "MarkerColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaypoint, MarkerColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaypoint_Statics::NewProp_MarkerColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaypoint_Statics::NewProp_MarkerColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaypoint_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaypoint_Statics::NewProp_MarkerColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaypoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
		nullptr,
		&NewStructOps,
		"Waypoint",
		sizeof(FWaypoint),
		alignof(FWaypoint),
		Z_Construct_UScriptStruct_FWaypoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaypoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaypoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaypoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaypoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWaypoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MyProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Waypoint"), sizeof(FWaypoint), Get_Z_Construct_UScriptStruct_FWaypoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWaypoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWaypoint_Hash() { return 1668294726U; }
	DEFINE_FUNCTION(UNavigation_HUD::execsetCompassWidget)
	{
		P_GET_OBJECT(UCompass_HUD,Z_Param_compassWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setCompassWidget(Z_Param_compassWidget);
		P_NATIVE_END;
	}
	void UNavigation_HUD::StaticRegisterNativesUNavigation_HUD()
	{
		UClass* Class = UNavigation_HUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "setCompassWidget", &UNavigation_HUD::execsetCompassWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNavigation_HUD_setCompassWidget_Statics
	{
		struct Navigation_HUD_eventsetCompassWidget_Parms
		{
			UCompass_HUD* compassWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_compassWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_compassWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigation_HUD_setCompassWidget_Statics::NewProp_compassWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigation_HUD_setCompassWidget_Statics::NewProp_compassWidget = { "compassWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Navigation_HUD_eventsetCompassWidget_Parms, compassWidget), Z_Construct_UClass_UCompass_HUD_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNavigation_HUD_setCompassWidget_Statics::NewProp_compassWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigation_HUD_setCompassWidget_Statics::NewProp_compassWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigation_HUD_setCompassWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigation_HUD_setCompassWidget_Statics::NewProp_compassWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigation_HUD_setCompassWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Navigation_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigation_HUD_setCompassWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigation_HUD, nullptr, "setCompassWidget", nullptr, nullptr, sizeof(Navigation_HUD_eventsetCompassWidget_Parms), Z_Construct_UFunction_UNavigation_HUD_setCompassWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigation_HUD_setCompassWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigation_HUD_setCompassWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigation_HUD_setCompassWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigation_HUD_setCompassWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigation_HUD_setCompassWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNavigation_HUD_NoRegister()
	{
		return UNavigation_HUD::StaticClass();
	}
	struct Z_Construct_UClass_UNavigation_HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isCompassEnabled_MetaData[];
#endif
		static void NewProp_isCompassEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCompassEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_areWaypointsEnabled_MetaData[];
#endif
		static void NewProp_areWaypointsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_areWaypointsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isMinimapEnabled_MetaData[];
#endif
		static void NewProp_isMinimapEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isMinimapEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_g_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_g_FollowCamera;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_g_Waypoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_g_Waypoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_g_Waypoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigation_HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNavigation_HUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavigation_HUD_setCompassWidget, "setCompassWidget" }, // 2184575455
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigation_HUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A wrapper widget for the compass, waypoints, and minimap widgets.\n */" },
		{ "IncludePath", "Navigation_HUD.h" },
		{ "ModuleRelativePath", "Navigation_HUD.h" },
		{ "ToolTip", "A wrapper widget for the compass, waypoints, and minimap widgets." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_isCompassEnabled_MetaData[] = {
		{ "Category", "Navigation_HUD" },
		{ "ModuleRelativePath", "Navigation_HUD.h" },
	};
#endif
	void Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_isCompassEnabled_SetBit(void* Obj)
	{
		((UNavigation_HUD*)Obj)->isCompassEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_isCompassEnabled = { "isCompassEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNavigation_HUD), &Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_isCompassEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_isCompassEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_isCompassEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_areWaypointsEnabled_MetaData[] = {
		{ "Category", "Navigation_HUD" },
		{ "ModuleRelativePath", "Navigation_HUD.h" },
	};
#endif
	void Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_areWaypointsEnabled_SetBit(void* Obj)
	{
		((UNavigation_HUD*)Obj)->areWaypointsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_areWaypointsEnabled = { "areWaypointsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNavigation_HUD), &Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_areWaypointsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_areWaypointsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_areWaypointsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_isMinimapEnabled_MetaData[] = {
		{ "Category", "Navigation_HUD" },
		{ "ModuleRelativePath", "Navigation_HUD.h" },
	};
#endif
	void Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_isMinimapEnabled_SetBit(void* Obj)
	{
		((UNavigation_HUD*)Obj)->isMinimapEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_isMinimapEnabled = { "isMinimapEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNavigation_HUD), &Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_isMinimapEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_isMinimapEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_isMinimapEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_g_FollowCamera_MetaData[] = {
		{ "Category", "Navigation_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Navigation_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_g_FollowCamera = { "g_FollowCamera", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigation_HUD, g_FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_g_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_g_FollowCamera_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_g_Waypoints_Inner = { "g_Waypoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWaypoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_g_Waypoints_MetaData[] = {
		{ "Category", "Navigation_HUD" },
		{ "ModuleRelativePath", "Navigation_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_g_Waypoints = { "g_Waypoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigation_HUD, g_Waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_g_Waypoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_g_Waypoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigation_HUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_isCompassEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_areWaypointsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_isMinimapEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_g_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_g_Waypoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_g_Waypoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigation_HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigation_HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigation_HUD_Statics::ClassParams = {
		&UNavigation_HUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNavigation_HUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNavigation_HUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigation_HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigation_HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigation_HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigation_HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigation_HUD, 519666240);
	template<> MYPROJECT_API UClass* StaticClass<UNavigation_HUD>()
	{
		return UNavigation_HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigation_HUD(Z_Construct_UClass_UNavigation_HUD, &UNavigation_HUD::StaticClass, TEXT("/Script/MyProject"), TEXT("UNavigation_HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigation_HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
