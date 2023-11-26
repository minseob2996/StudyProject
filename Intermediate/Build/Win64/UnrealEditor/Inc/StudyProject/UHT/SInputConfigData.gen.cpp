// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StudyProject/Public/Inputs/SInputConfigData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSInputConfigData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	STUDYPROJECT_API UClass* Z_Construct_UClass_USInputConfigData();
	STUDYPROJECT_API UClass* Z_Construct_UClass_USInputConfigData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StudyProject();
// End Cross Module References
	void USInputConfigData::StaticRegisterNativesUSInputConfigData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USInputConfigData);
	UClass* Z_Construct_UClass_USInputConfigData_NoRegister()
	{
		return USInputConfigData::StaticClass();
	}
	struct Z_Construct_UClass_USInputConfigData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LookAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USInputConfigData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_StudyProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInputConfigData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Inputs/SInputConfigData.h" },
		{ "ModuleRelativePath", "Public/Inputs/SInputConfigData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInputConfigData_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "SInputConfigData" },
		{ "ModuleRelativePath", "Public/Inputs/SInputConfigData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USInputConfigData_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USInputConfigData, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USInputConfigData_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USInputConfigData_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInputConfigData_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "SInputConfigData" },
		{ "ModuleRelativePath", "Public/Inputs/SInputConfigData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USInputConfigData_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USInputConfigData, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USInputConfigData_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USInputConfigData_Statics::NewProp_LookAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USInputConfigData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USInputConfigData_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USInputConfigData_Statics::NewProp_LookAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USInputConfigData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USInputConfigData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USInputConfigData_Statics::ClassParams = {
		&USInputConfigData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USInputConfigData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USInputConfigData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USInputConfigData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USInputConfigData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USInputConfigData()
	{
		if (!Z_Registration_Info_UClass_USInputConfigData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USInputConfigData.OuterSingleton, Z_Construct_UClass_USInputConfigData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USInputConfigData.OuterSingleton;
	}
	template<> STUDYPROJECT_API UClass* StaticClass<USInputConfigData>()
	{
		return USInputConfigData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USInputConfigData);
	USInputConfigData::~USInputConfigData() {}
	struct Z_CompiledInDeferFile_FID_StudyProject_Source_StudyProject_Public_Inputs_SInputConfigData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StudyProject_Source_StudyProject_Public_Inputs_SInputConfigData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USInputConfigData, USInputConfigData::StaticClass, TEXT("USInputConfigData"), &Z_Registration_Info_UClass_USInputConfigData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USInputConfigData), 4276696097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StudyProject_Source_StudyProject_Public_Inputs_SInputConfigData_h_3849583059(TEXT("/Script/StudyProject"),
		Z_CompiledInDeferFile_FID_StudyProject_Source_StudyProject_Public_Inputs_SInputConfigData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StudyProject_Source_StudyProject_Public_Inputs_SInputConfigData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
