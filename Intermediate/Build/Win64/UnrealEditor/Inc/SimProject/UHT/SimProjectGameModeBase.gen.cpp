// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimProject/SimProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimProjectGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SIMPROJECT_API UClass* Z_Construct_UClass_ASimProjectGameModeBase();
	SIMPROJECT_API UClass* Z_Construct_UClass_ASimProjectGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimProject();
// End Cross Module References
	void ASimProjectGameModeBase::StaticRegisterNativesASimProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASimProjectGameModeBase);
	UClass* Z_Construct_UClass_ASimProjectGameModeBase_NoRegister()
	{
		return ASimProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASimProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASimProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimProjectGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimProjectGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SimProjectGameModeBase.h" },
		{ "ModuleRelativePath", "SimProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASimProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimProjectGameModeBase_Statics::ClassParams = {
		&ASimProjectGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASimProjectGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASimProjectGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASimProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASimProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimProjectGameModeBase.OuterSingleton, Z_Construct_UClass_ASimProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASimProjectGameModeBase.OuterSingleton;
	}
	template<> SIMPROJECT_API UClass* StaticClass<ASimProjectGameModeBase>()
	{
		return ASimProjectGameModeBase::StaticClass();
	}
	ASimProjectGameModeBase::ASimProjectGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimProjectGameModeBase);
	ASimProjectGameModeBase::~ASimProjectGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_rfarl_OneDrive_Documents_Unreal_Projects_SimProject_Source_SimProject_SimProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rfarl_OneDrive_Documents_Unreal_Projects_SimProject_Source_SimProject_SimProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASimProjectGameModeBase, ASimProjectGameModeBase::StaticClass, TEXT("ASimProjectGameModeBase"), &Z_Registration_Info_UClass_ASimProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimProjectGameModeBase), 3699540099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rfarl_OneDrive_Documents_Unreal_Projects_SimProject_Source_SimProject_SimProjectGameModeBase_h_812312803(TEXT("/Script/SimProject"),
		Z_CompiledInDeferFile_FID_Users_rfarl_OneDrive_Documents_Unreal_Projects_SimProject_Source_SimProject_SimProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rfarl_OneDrive_Documents_Unreal_Projects_SimProject_Source_SimProject_SimProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
