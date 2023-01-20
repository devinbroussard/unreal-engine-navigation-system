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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	MYPROJECT_API UClass* Z_Construct_UClass_UNavigation_HUD_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UNavigation_HUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UCompass_HUD_NoRegister();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaypoint_Statics::NewProp_OwningActor_MetaData[] = {
		{ "Category", "Waypoint" },
		{ "ModuleRelativePath", "Navigation_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWaypoint_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaypoint, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaypoint_Statics::NewProp_OwningActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaypoint_Statics::NewProp_OwningActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaypoint_Statics::NewProp_MarkerColor_MetaData[] = {
		{ "Category", "Waypoint" },
		{ "ModuleRelativePath", "Navigation_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaypoint_Statics::NewProp_MarkerColor = { "MarkerColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaypoint, MarkerColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaypoint_Statics::NewProp_MarkerColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaypoint_Statics::NewProp_MarkerColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaypoint_Statics::NewProp_OwningActor,
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
	uint32 Get_Z_Construct_UScriptStruct_FWaypoint_Hash() { return 1211136602U; }
	void UNavigation_HUD::StaticRegisterNativesUNavigation_HUD()
	{
	}
	UClass* Z_Construct_UClass_UNavigation_HUD_NoRegister()
	{
		return UNavigation_HUD::StaticClass();
	}
	struct Z_Construct_UClass_UNavigation_HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCompassEnabled_MetaData[];
#endif
		static void NewProp_IsCompassEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCompassEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Waypoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Waypoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompassWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompassWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigation_HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_IsCompassEnabled_MetaData[] = {
		{ "Category", "Navigation_HUD" },
		{ "ModuleRelativePath", "Navigation_HUD.h" },
	};
#endif
	void Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_IsCompassEnabled_SetBit(void* Obj)
	{
		((UNavigation_HUD*)Obj)->IsCompassEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_IsCompassEnabled = { "IsCompassEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNavigation_HUD), &Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_IsCompassEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_IsCompassEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_IsCompassEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Navigation_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Navigation_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigation_HUD, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_FollowCamera_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_Waypoints_Inner = { "Waypoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWaypoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_Waypoints_MetaData[] = {
		{ "Category", "Navigation_HUD" },
		{ "ModuleRelativePath", "Navigation_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_Waypoints = { "Waypoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigation_HUD, Waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_Waypoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_Waypoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_CompassWidget_MetaData[] = {
		{ "Category", "Navigation_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Navigation_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_CompassWidget = { "CompassWidget", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigation_HUD, CompassWidget), Z_Construct_UClass_UCompass_HUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_CompassWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_CompassWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigation_HUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_IsCompassEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_Waypoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_Waypoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_CompassWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigation_HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigation_HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigation_HUD_Statics::ClassParams = {
		&UNavigation_HUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavigation_HUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(UNavigation_HUD, 282350929);
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
