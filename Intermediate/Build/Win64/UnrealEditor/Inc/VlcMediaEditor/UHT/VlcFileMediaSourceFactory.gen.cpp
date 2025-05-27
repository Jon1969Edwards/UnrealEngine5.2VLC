
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VlcMediaEditor/Private/VlcFileMediaSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVlcFileMediaSourceFactory() {}

// Begin Cross Module References
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_VlcMediaEditor();
VLCMEDIAEDITOR_API UClass* Z_Construct_UClass_UVlcFileMediaSourceFactory();
VLCMEDIAEDITOR_API UClass* Z_Construct_UClass_UVlcFileMediaSourceFactory_NoRegister();
// End Cross Module References

// Begin Class UVlcFileMediaSourceFactory
void UVlcFileMediaSourceFactory::StaticRegisterNativesUVlcFileMediaSourceFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVlcFileMediaSourceFactory);
UClass* Z_Construct_UClass_UVlcFileMediaSourceFactory_NoRegister()
{
	return UVlcFileMediaSourceFactory::StaticClass();
}
struct Z_Construct_UClass_UVlcFileMediaSourceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UFileMediaSource objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VlcFileMediaSourceFactory.h" },
		{ "ModuleRelativePath", "Private/VlcFileMediaSourceFactory.h" },
		{ "ToolTip", "Implements a factory for UFileMediaSource objects." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVlcFileMediaSourceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVlcFileMediaSourceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VlcMediaEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVlcFileMediaSourceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVlcFileMediaSourceFactory_Statics::ClassParams = {
	&UVlcFileMediaSourceFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVlcFileMediaSourceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVlcFileMediaSourceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVlcFileMediaSourceFactory()
{
	if (!Z_Registration_Info_UClass_UVlcFileMediaSourceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVlcFileMediaSourceFactory.OuterSingleton, Z_Construct_UClass_UVlcFileMediaSourceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVlcFileMediaSourceFactory.OuterSingleton;
}
template<> VLCMEDIAEDITOR_API UClass* StaticClass<UVlcFileMediaSourceFactory>()
{
	return UVlcFileMediaSourceFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVlcFileMediaSourceFactory);
UVlcFileMediaSourceFactory::~UVlcFileMediaSourceFactory() {}
// End Class UVlcFileMediaSourceFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VlcMedia_Source_VlcMediaEditor_Private_VlcFileMediaSourceFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVlcFileMediaSourceFactory, UVlcFileMediaSourceFactory::StaticClass, TEXT("UVlcFileMediaSourceFactory"), &Z_Registration_Info_UClass_UVlcFileMediaSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVlcFileMediaSourceFactory), 3697644254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VlcMedia_Source_VlcMediaEditor_Private_VlcFileMediaSourceFactory_h_132087606(TEXT("/Script/VlcMediaEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_VlcMedia_Source_VlcMediaEditor_Private_VlcFileMediaSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VlcMedia_Source_VlcMediaEditor_Private_VlcFileMediaSourceFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
