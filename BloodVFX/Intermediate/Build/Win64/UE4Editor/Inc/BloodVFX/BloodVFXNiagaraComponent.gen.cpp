// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BloodVFX/Public/Component/BloodVFXNiagaraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodVFXNiagaraComponent() {}
// Cross Module References
	BLOODVFX_API UClass* Z_Construct_UClass_UBloodVFXNiagaraComponent_NoRegister();
	BLOODVFX_API UClass* Z_Construct_UClass_UBloodVFXNiagaraComponent();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent();
	UPackage* Z_Construct_UPackage__Script_BloodVFX();
	BLOODVFX_API UClass* Z_Construct_UClass_UBloodVFXInterface_NoRegister();
// End Cross Module References
	void UBloodVFXNiagaraComponent::StaticRegisterNativesUBloodVFXNiagaraComponent()
	{
	}
	UClass* Z_Construct_UClass_UBloodVFXNiagaraComponent_NoRegister()
	{
		return UBloodVFXNiagaraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBloodVFXNiagaraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodVFXNiagaraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BloodVFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodVFXNiagaraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Physics Collision Mobility VirtualTexture" },
		{ "IncludePath", "Component/BloodVFXNiagaraComponent.h" },
		{ "ModuleRelativePath", "Public/Component/BloodVFXNiagaraComponent.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBloodVFXNiagaraComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBloodVFXInterface_NoRegister, (int32)VTABLE_OFFSET(UBloodVFXNiagaraComponent, IBloodVFXInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodVFXNiagaraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodVFXNiagaraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodVFXNiagaraComponent_Statics::ClassParams = {
		&UBloodVFXNiagaraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodVFXNiagaraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodVFXNiagaraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodVFXNiagaraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodVFXNiagaraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodVFXNiagaraComponent, 3065431439);
	template<> BLOODVFX_API UClass* StaticClass<UBloodVFXNiagaraComponent>()
	{
		return UBloodVFXNiagaraComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodVFXNiagaraComponent(Z_Construct_UClass_UBloodVFXNiagaraComponent, &UBloodVFXNiagaraComponent::StaticClass, TEXT("/Script/BloodVFX"), TEXT("UBloodVFXNiagaraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodVFXNiagaraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
