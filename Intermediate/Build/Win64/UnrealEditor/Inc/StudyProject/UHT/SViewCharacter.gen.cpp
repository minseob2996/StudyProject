// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StudyProject/Public/Characters/SViewCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSViewCharacter() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	STUDYPROJECT_API UClass* Z_Construct_UClass_ASCharacter();
	STUDYPROJECT_API UClass* Z_Construct_UClass_ASViewCharacter();
	STUDYPROJECT_API UClass* Z_Construct_UClass_ASViewCharacter_NoRegister();
	STUDYPROJECT_API UClass* Z_Construct_UClass_USInputConfigData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StudyProject();
// End Cross Module References
	void ASViewCharacter::StaticRegisterNativesASViewCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASViewCharacter);
	UClass* Z_Construct_UClass_ASViewCharacter_NoRegister()
	{
		return ASViewCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASViewCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacterInputConfigData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerCharacterInputConfigData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacterInputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerCharacterInputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASViewCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_StudyProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASViewCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/SViewCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/SViewCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASViewCharacter_Statics::NewProp_PlayerCharacterInputConfigData_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "SViewCharacter" },
		{ "ModuleRelativePath", "Public/Characters/SViewCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASViewCharacter_Statics::NewProp_PlayerCharacterInputConfigData = { "PlayerCharacterInputConfigData", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASViewCharacter, PlayerCharacterInputConfigData), Z_Construct_UClass_USInputConfigData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASViewCharacter_Statics::NewProp_PlayerCharacterInputConfigData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASViewCharacter_Statics::NewProp_PlayerCharacterInputConfigData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASViewCharacter_Statics::NewProp_PlayerCharacterInputMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "SViewCharacter" },
		{ "ModuleRelativePath", "Public/Characters/SViewCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASViewCharacter_Statics::NewProp_PlayerCharacterInputMappingContext = { "PlayerCharacterInputMappingContext", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASViewCharacter, PlayerCharacterInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASViewCharacter_Statics::NewProp_PlayerCharacterInputMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASViewCharacter_Statics::NewProp_PlayerCharacterInputMappingContext_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASViewCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASViewCharacter_Statics::NewProp_PlayerCharacterInputConfigData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASViewCharacter_Statics::NewProp_PlayerCharacterInputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASViewCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASViewCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASViewCharacter_Statics::ClassParams = {
		&ASViewCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASViewCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASViewCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASViewCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASViewCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASViewCharacter()
	{
		if (!Z_Registration_Info_UClass_ASViewCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASViewCharacter.OuterSingleton, Z_Construct_UClass_ASViewCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASViewCharacter.OuterSingleton;
	}
	template<> STUDYPROJECT_API UClass* StaticClass<ASViewCharacter>()
	{
		return ASViewCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASViewCharacter);
	ASViewCharacter::~ASViewCharacter() {}
	struct Z_CompiledInDeferFile_FID_StudyProject_Source_StudyProject_Public_Characters_SViewCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StudyProject_Source_StudyProject_Public_Characters_SViewCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASViewCharacter, ASViewCharacter::StaticClass, TEXT("ASViewCharacter"), &Z_Registration_Info_UClass_ASViewCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASViewCharacter), 374521170U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StudyProject_Source_StudyProject_Public_Characters_SViewCharacter_h_3263993469(TEXT("/Script/StudyProject"),
		Z_CompiledInDeferFile_FID_StudyProject_Source_StudyProject_Public_Characters_SViewCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StudyProject_Source_StudyProject_Public_Characters_SViewCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
