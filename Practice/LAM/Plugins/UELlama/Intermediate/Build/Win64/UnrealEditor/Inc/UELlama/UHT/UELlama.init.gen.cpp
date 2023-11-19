// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUELlama_init() {}
	UELLAMA_API UFunction* Z_Construct_UDelegateFunction_UELlama_OnNewTokenGenerated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UELlama;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UELlama()
	{
		if (!Z_Registration_Info_UPackage__Script_UELlama.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UELlama_OnNewTokenGenerated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UELlama",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x26F0F342,
				0x3624B338,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UELlama.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UELlama.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UELlama(Z_Construct_UPackage__Script_UELlama, TEXT("/Script/UELlama"), Z_Registration_Info_UPackage__Script_UELlama, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x26F0F342, 0x3624B338));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
