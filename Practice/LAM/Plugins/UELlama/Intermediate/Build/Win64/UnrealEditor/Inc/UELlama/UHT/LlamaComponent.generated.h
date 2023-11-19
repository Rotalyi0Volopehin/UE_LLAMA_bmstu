// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UELlama/LlamaComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UELLAMA_LlamaComponent_generated_h
#error "LlamaComponent.generated.h already included, missing '#pragma once' in LlamaComponent.h"
#endif
#define UELLAMA_LlamaComponent_generated_h

#define FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_15_DELEGATE \
UELLAMA_API void FOnNewTokenGenerated_DelegateWrapper(const FMulticastScriptDelegate& OnNewTokenGenerated, const FString& NewToken);


#define FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_SPARSE_DATA
#define FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInsertPrompt);


#define FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInsertPrompt);


#define FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_ACCESSORS
#define FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULlamaComponent(); \
	friend struct Z_Construct_UClass_ULlamaComponent_Statics; \
public: \
	DECLARE_CLASS(ULlamaComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UELlama"), NO_API) \
	DECLARE_SERIALIZER(ULlamaComponent)


#define FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesULlamaComponent(); \
	friend struct Z_Construct_UClass_ULlamaComponent_Statics; \
public: \
	DECLARE_CLASS(ULlamaComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UELlama"), NO_API) \
	DECLARE_SERIALIZER(ULlamaComponent)


#define FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULlamaComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULlamaComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULlamaComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULlamaComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULlamaComponent(ULlamaComponent&&); \
	NO_API ULlamaComponent(const ULlamaComponent&); \
public:


#define FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULlamaComponent(ULlamaComponent&&); \
	NO_API ULlamaComponent(const ULlamaComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULlamaComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULlamaComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULlamaComponent)


#define FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_17_PROLOG
#define FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_SPARSE_DATA \
	FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_RPC_WRAPPERS \
	FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_ACCESSORS \
	FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_INCLASS \
	FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_SPARSE_DATA \
	FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_ACCESSORS \
	FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UELLAMA_API UClass* StaticClass<class ULlamaComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LAM_Plugins_UELlama_Source_UELlama_Public_UELlama_LlamaComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
