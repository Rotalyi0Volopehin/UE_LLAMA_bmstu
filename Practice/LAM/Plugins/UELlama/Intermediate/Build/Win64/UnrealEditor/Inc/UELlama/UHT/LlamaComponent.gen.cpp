// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Source/UELlama/Public/UELlama/LlamaComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLlamaComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UELLAMA_API UClass* Z_Construct_UClass_ULlamaComponent();
	UELLAMA_API UClass* Z_Construct_UClass_ULlamaComponent_NoRegister();
	UELLAMA_API UFunction* Z_Construct_UDelegateFunction_UELlama_OnNewTokenGenerated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UELlama();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UELlama_OnNewTokenGenerated__DelegateSignature_Statics
	{
		struct _Script_UELlama_eventOnNewTokenGenerated_Parms
		{
			FString NewToken;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewToken;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UELlama_OnNewTokenGenerated__DelegateSignature_Statics::NewProp_NewToken = { "NewToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UELlama_eventOnNewTokenGenerated_Parms, NewToken), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UELlama_OnNewTokenGenerated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELlama_OnNewTokenGenerated__DelegateSignature_Statics::NewProp_NewToken,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UELlama_OnNewTokenGenerated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UELlama/LlamaComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UELlama_OnNewTokenGenerated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UELlama, nullptr, "OnNewTokenGenerated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UELlama_OnNewTokenGenerated__DelegateSignature_Statics::_Script_UELlama_eventOnNewTokenGenerated_Parms), Z_Construct_UDelegateFunction_UELlama_OnNewTokenGenerated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELlama_OnNewTokenGenerated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UELlama_OnNewTokenGenerated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELlama_OnNewTokenGenerated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UELlama_OnNewTokenGenerated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UELlama_OnNewTokenGenerated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnNewTokenGenerated_DelegateWrapper(const FMulticastScriptDelegate& OnNewTokenGenerated, const FString& NewToken)
{
	struct _Script_UELlama_eventOnNewTokenGenerated_Parms
	{
		FString NewToken;
	};
	_Script_UELlama_eventOnNewTokenGenerated_Parms Parms;
	Parms.NewToken=NewToken;
	OnNewTokenGenerated.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULlamaComponent::execInsertPrompt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_v);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InsertPrompt(Z_Param_v);
		P_NATIVE_END;
	}
	void ULlamaComponent::StaticRegisterNativesULlamaComponent()
	{
		UClass* Class = ULlamaComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InsertPrompt", &ULlamaComponent::execInsertPrompt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULlamaComponent_InsertPrompt_Statics
	{
		struct LlamaComponent_eventInsertPrompt_Parms
		{
			FString v;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_v_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_v;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULlamaComponent_InsertPrompt_Statics::NewProp_v_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULlamaComponent_InsertPrompt_Statics::NewProp_v = { "v", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LlamaComponent_eventInsertPrompt_Parms, v), METADATA_PARAMS(Z_Construct_UFunction_ULlamaComponent_InsertPrompt_Statics::NewProp_v_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaComponent_InsertPrompt_Statics::NewProp_v_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULlamaComponent_InsertPrompt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULlamaComponent_InsertPrompt_Statics::NewProp_v,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULlamaComponent_InsertPrompt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UELlama/LlamaComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULlamaComponent_InsertPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULlamaComponent, nullptr, "InsertPrompt", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULlamaComponent_InsertPrompt_Statics::LlamaComponent_eventInsertPrompt_Parms), Z_Construct_UFunction_ULlamaComponent_InsertPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaComponent_InsertPrompt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULlamaComponent_InsertPrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaComponent_InsertPrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULlamaComponent_InsertPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULlamaComponent_InsertPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULlamaComponent);
	UClass* Z_Construct_UClass_ULlamaComponent_NoRegister()
	{
		return ULlamaComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULlamaComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNewTokenGenerated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewTokenGenerated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_prompt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_prompt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pathToModel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_pathToModel;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stopSequences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopSequences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_stopSequences;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULlamaComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UELlama,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULlamaComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULlamaComponent_InsertPrompt, "InsertPrompt" }, // 733764207
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULlamaComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Category", "LLM" },
		{ "IncludePath", "UELlama/LlamaComponent.h" },
		{ "ModuleRelativePath", "Public/UELlama/LlamaComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULlamaComponent_Statics::NewProp_OnNewTokenGenerated_MetaData[] = {
		{ "ModuleRelativePath", "Public/UELlama/LlamaComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULlamaComponent_Statics::NewProp_OnNewTokenGenerated = { "OnNewTokenGenerated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULlamaComponent, OnNewTokenGenerated), Z_Construct_UDelegateFunction_UELlama_OnNewTokenGenerated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULlamaComponent_Statics::NewProp_OnNewTokenGenerated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULlamaComponent_Statics::NewProp_OnNewTokenGenerated_MetaData)) }; // 2277858741
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULlamaComponent_Statics::NewProp_prompt_MetaData[] = {
		{ "Category", "LlamaComponent" },
		{ "ModuleRelativePath", "Public/UELlama/LlamaComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULlamaComponent_Statics::NewProp_prompt = { "prompt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULlamaComponent, prompt), METADATA_PARAMS(Z_Construct_UClass_ULlamaComponent_Statics::NewProp_prompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULlamaComponent_Statics::NewProp_prompt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULlamaComponent_Statics::NewProp_pathToModel_MetaData[] = {
		{ "Category", "LlamaComponent" },
		{ "ModuleRelativePath", "Public/UELlama/LlamaComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULlamaComponent_Statics::NewProp_pathToModel = { "pathToModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULlamaComponent, pathToModel), METADATA_PARAMS(Z_Construct_UClass_ULlamaComponent_Statics::NewProp_pathToModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULlamaComponent_Statics::NewProp_pathToModel_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULlamaComponent_Statics::NewProp_stopSequences_Inner = { "stopSequences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULlamaComponent_Statics::NewProp_stopSequences_MetaData[] = {
		{ "Category", "LlamaComponent" },
		{ "ModuleRelativePath", "Public/UELlama/LlamaComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULlamaComponent_Statics::NewProp_stopSequences = { "stopSequences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULlamaComponent, stopSequences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULlamaComponent_Statics::NewProp_stopSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULlamaComponent_Statics::NewProp_stopSequences_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULlamaComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULlamaComponent_Statics::NewProp_OnNewTokenGenerated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULlamaComponent_Statics::NewProp_prompt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULlamaComponent_Statics::NewProp_pathToModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULlamaComponent_Statics::NewProp_stopSequences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULlamaComponent_Statics::NewProp_stopSequences,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULlamaComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULlamaComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULlamaComponent_Statics::ClassParams = {
		&ULlamaComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULlamaComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULlamaComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULlamaComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULlamaComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULlamaComponent()
	{
		if (!Z_Registration_Info_UClass_ULlamaComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULlamaComponent.OuterSingleton, Z_Construct_UClass_ULlamaComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULlamaComponent.OuterSingleton;
	}
	template<> UELLAMA_API UClass* StaticClass<ULlamaComponent>()
	{
		return ULlamaComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULlamaComponent);
	struct Z_CompiledInDeferFile_FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULlamaComponent, ULlamaComponent::StaticClass, TEXT("ULlamaComponent"), &Z_Registration_Info_UClass_ULlamaComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULlamaComponent), 3201895321U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_2595856441(TEXT("/Script/UELlama"),
		Z_CompiledInDeferFile_FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
