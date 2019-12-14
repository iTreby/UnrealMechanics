// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamMechanics/TeamMechanicsHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamMechanicsHUD() {}
// Cross Module References
	TEAMMECHANICS_API UClass* Z_Construct_UClass_ATeamMechanicsHUD_NoRegister();
	TEAMMECHANICS_API UClass* Z_Construct_UClass_ATeamMechanicsHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TeamMechanics();
// End Cross Module References
	void ATeamMechanicsHUD::StaticRegisterNativesATeamMechanicsHUD()
	{
	}
	UClass* Z_Construct_UClass_ATeamMechanicsHUD_NoRegister()
	{
		return ATeamMechanicsHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATeamMechanicsHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeamMechanicsHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TeamMechanics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeamMechanicsHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TeamMechanicsHUD.h" },
		{ "ModuleRelativePath", "TeamMechanicsHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeamMechanicsHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeamMechanicsHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeamMechanicsHUD_Statics::ClassParams = {
		&ATeamMechanicsHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATeamMechanicsHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATeamMechanicsHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeamMechanicsHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeamMechanicsHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeamMechanicsHUD, 2028039950);
	template<> TEAMMECHANICS_API UClass* StaticClass<ATeamMechanicsHUD>()
	{
		return ATeamMechanicsHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeamMechanicsHUD(Z_Construct_UClass_ATeamMechanicsHUD, &ATeamMechanicsHUD::StaticClass, TEXT("/Script/TeamMechanics"), TEXT("ATeamMechanicsHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeamMechanicsHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
