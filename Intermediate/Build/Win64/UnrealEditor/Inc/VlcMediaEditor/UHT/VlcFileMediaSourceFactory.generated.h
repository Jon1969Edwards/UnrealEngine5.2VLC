// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VlcFileMediaSourceFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VLCMEDIAEDITOR_VlcFileMediaSourceFactory_generated_h
#error "VlcFileMediaSourceFactory.generated.h already included, missing '#pragma once' in VlcFileMediaSourceFactory.h"
#endif
#define VLCMEDIAEDITOR_VlcFileMediaSourceFactory_generated_h

#define FID_HostProject_Plugins_VlcMedia_Source_VlcMediaEditor_Private_VlcFileMediaSourceFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUVlcFileMediaSourceFactory(); \
	friend struct Z_Construct_UClass_UVlcFileMediaSourceFactory_Statics; \
public: \
	DECLARE_CLASS(UVlcFileMediaSourceFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VlcMediaEditor"), NO_API) \
	DECLARE_SERIALIZER(UVlcFileMediaSourceFactory)


#define FID_HostProject_Plugins_VlcMedia_Source_VlcMediaEditor_Private_VlcFileMediaSourceFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVlcFileMediaSourceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVlcFileMediaSourceFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVlcFileMediaSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVlcFileMediaSourceFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVlcFileMediaSourceFactory(UVlcFileMediaSourceFactory&&); \
	UVlcFileMediaSourceFactory(const UVlcFileMediaSourceFactory&); \
public: \
	NO_API virtual ~UVlcFileMediaSourceFactory();


#define FID_HostProject_Plugins_VlcMedia_Source_VlcMediaEditor_Private_VlcFileMediaSourceFactory_h_12_PROLOG
#define FID_HostProject_Plugins_VlcMedia_Source_VlcMediaEditor_Private_VlcFileMediaSourceFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_VlcMedia_Source_VlcMediaEditor_Private_VlcFileMediaSourceFactory_h_16_INCLASS \
	FID_HostProject_Plugins_VlcMedia_Source_VlcMediaEditor_Private_VlcFileMediaSourceFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VLCMEDIAEDITOR_API UClass* StaticClass<class UVlcFileMediaSourceFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_VlcMedia_Source_VlcMediaEditor_Private_VlcFileMediaSourceFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
