// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BloodVFX/Public/Actor/BloodVFXActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodVFXActor() {}
// Cross Module References
	BLOODVFX_API UClass* Z_Construct_UClass_ABloodVFXActor_NoRegister();
	BLOODVFX_API UClass* Z_Construct_UClass_ABloodVFXActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BloodVFX();
	BLOODVFX_API UClass* Z_Construct_UClass_UBloodVFXNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParticleCallbackHandler_NoRegister();
// End Cross Module References
	void ABloodVFXActor::StaticRegisterNativesABloodVFXActor()
	{
	}
	UClass* Z_Construct_UClass_ABloodVFXActor_NoRegister()
	{
		return ABloodVFXActor::StaticClass();
	}
	struct Z_Construct_UClass_ABloodVFXActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodVFXComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloodVFXComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloodVFXActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BloodVFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloodVFXActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/BloodVFXActor.h" },
		{ "ModuleRelativePath", "Public/Actor/BloodVFXActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloodVFXActor_Statics::NewProp_BloodVFXComponent_MetaData[] = {
		{ "Category", "BloodVFXActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/BloodVFXActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloodVFXActor_Statics::NewProp_BloodVFXComponent = { "BloodVFXComponent", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloodVFXActor, BloodVFXComponent), Z_Construct_UClass_UBloodVFXNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABloodVFXActor_Statics::NewProp_BloodVFXComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloodVFXActor_Statics::NewProp_BloodVFXComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloodVFXActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodVFXActor_Statics::NewProp_BloodVFXComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloodVFXActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNiagaraParticleCallbackHandler_NoRegister, (int32)VTABLE_OFFSET(ABloodVFXActor, INiagaraParticleCallbackHandler), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloodVFXActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloodVFXActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloodVFXActor_Statics::ClassParams = {
		&ABloodVFXActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABloodVFXActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABloodVFXActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABloodVFXActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloodVFXActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloodVFXActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloodVFXActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloodVFXActor, 3203246329);
	template<> BLOODVFX_API UClass* StaticClass<ABloodVFXActor>()
	{
		return ABloodVFXActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloodVFXActor(Z_Construct_UClass_ABloodVFXActor, &ABloodVFXActor::StaticClass, TEXT("/Script/BloodVFX"), TEXT("ABloodVFXActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloodVFXActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
