// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BloodVFX/Public/Interface/BloodVFXInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodVFXInterface() {}
// Cross Module References
	BLOODVFX_API UClass* Z_Construct_UClass_UBloodVFXInterface_NoRegister();
	BLOODVFX_API UClass* Z_Construct_UClass_UBloodVFXInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BloodVFX();
// End Cross Module References
	DEFINE_FUNCTION(IBloodVFXInterface::execActiveBloodVFX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActiveBloodVFX();
		P_NATIVE_END;
	}
	void UBloodVFXInterface::StaticRegisterNativesUBloodVFXInterface()
	{
		UClass* Class = UBloodVFXInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActiveBloodVFX", &IBloodVFXInterface::execActiveBloodVFX },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBloodVFXInterface_ActiveBloodVFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodVFXInterface_ActiveBloodVFX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Public/Interface/BloodVFXInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodVFXInterface_ActiveBloodVFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodVFXInterface, nullptr, "ActiveBloodVFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodVFXInterface_ActiveBloodVFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodVFXInterface_ActiveBloodVFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodVFXInterface_ActiveBloodVFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodVFXInterface_ActiveBloodVFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBloodVFXInterface_NoRegister()
	{
		return UBloodVFXInterface::StaticClass();
	}
	struct Z_Construct_UClass_UBloodVFXInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodVFXInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BloodVFX,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBloodVFXInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBloodVFXInterface_ActiveBloodVFX, "ActiveBloodVFX" }, // 4114448310
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodVFXInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interface/BloodVFXInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodVFXInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBloodVFXInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodVFXInterface_Statics::ClassParams = {
		&UBloodVFXInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodVFXInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodVFXInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodVFXInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodVFXInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodVFXInterface, 2834227318);
	template<> BLOODVFX_API UClass* StaticClass<UBloodVFXInterface>()
	{
		return UBloodVFXInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodVFXInterface(Z_Construct_UClass_UBloodVFXInterface, &UBloodVFXInterface::StaticClass, TEXT("/Script/BloodVFX"), TEXT("UBloodVFXInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodVFXInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
