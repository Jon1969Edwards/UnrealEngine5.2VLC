// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VlcMediaSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VLCMEDIAFACTORY_VlcMediaSettings_generated_h
#error "VlcMediaSettings.generated.h already included, missing '#pragma once' in VlcMediaSettings.h"
#endif
#define VLCMEDIAFACTORY_VlcMediaSettings_generated_h

#define FID_HostProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVlcMediaSettings(); \
	friend struct Z_Construct_UClass_UVlcMediaSettings_Statics; \
public: \
	DECLARE_CLASS(UVlcMediaSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VlcMediaFactory"), NO_API) \
	DECLARE_SERIALIZER(UVlcMediaSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_HostProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVlcMediaSettings(UVlcMediaSettings&&); \
	UVlcMediaSettings(const UVlcMediaSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVlcMediaSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVlcMediaSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVlcMediaSettings) \
	NO_API virtual ~UVlcMediaSettings();


#define FID_HostProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_32_PROLOG
#define FID_HostProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_36_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VLCMEDIAFACTORY_API UClass* StaticClass<class UVlcMediaSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h


#define FOREACH_ENUM_EVLCMEDIALOGLEVEL(op) \
	op(EVlcMediaLogLevel::Error) \
	op(EVlcMediaLogLevel::Warning) \
	op(EVlcMediaLogLevel::Debug) 

enum class EVlcMediaLogLevel : uint8;
template<> struct TIsUEnumClass<EVlcMediaLogLevel> { enum { Value = true }; };
template<> VLCMEDIAFACTORY_API UEnum* StaticEnum<EVlcMediaLogLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
