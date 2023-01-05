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
	MYPROJECT_API UClass* Z_Construct_UClass_UNavigation_HUD_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UNavigation_HUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigation_HUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_isCompassEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_areWaypointsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigation_HUD_Statics::NewProp_isMinimapEnabled,
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
	IMPLEMENT_CLASS(UNavigation_HUD, 529729256);
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
