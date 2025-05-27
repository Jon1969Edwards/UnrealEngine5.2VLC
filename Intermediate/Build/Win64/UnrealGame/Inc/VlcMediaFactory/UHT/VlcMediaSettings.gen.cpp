
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VlcMediaFactory/Public/VlcMediaSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVlcMediaSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
UPackage* Z_Construct_UPackage__Script_VlcMediaFactory();
VLCMEDIAFACTORY_API UClass* Z_Construct_UClass_UVlcMediaSettings();
VLCMEDIAFACTORY_API UClass* Z_Construct_UClass_UVlcMediaSettings_NoRegister();
VLCMEDIAFACTORY_API UEnum* Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel();
// End Cross Module References

// Begin Enum EVlcMediaLogLevel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVlcMediaLogLevel;
static UEnum* EVlcMediaLogLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVlcMediaLogLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVlcMediaLogLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel, (UObject*)Z_Construct_UPackage__Script_VlcMediaFactory(), TEXT("EVlcMediaLogLevel"));
	}
	return Z_Registration_Info_UEnum_EVlcMediaLogLevel.OuterSingleton;
}
template<> VLCMEDIAFACTORY_API UEnum* StaticEnum<EVlcMediaLogLevel>()
{
	return EVlcMediaLogLevel_StaticEnum();
}
struct Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Available levels for LibVLC log messages.\n */" },
		{ "Debug.Comment", "/** Debug messages. */" },
		{ "Debug.Name", "EVlcMediaLogLevel::Debug" },
		{ "Debug.ToolTip", "Debug messages." },
		{ "Error.Comment", "/** Error messages. */" },
		{ "Error.Name", "EVlcMediaLogLevel::Error" },
		{ "Error.ToolTip", "Error messages." },
		{ "ModuleRelativePath", "Public/VlcMediaSettings.h" },
		{ "ToolTip", "Available levels for LibVLC log messages." },
		{ "Warning.Comment", "/** Warnings and potential errors. */" },
		{ "Warning.Name", "EVlcMediaLogLevel::Warning" },
		{ "Warning.ToolTip", "Warnings and potential errors." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVlcMediaLogLevel::Error", (int64)EVlcMediaLogLevel::Error },
		{ "EVlcMediaLogLevel::Warning", (int64)EVlcMediaLogLevel::Warning },
		{ "EVlcMediaLogLevel::Debug", (int64)EVlcMediaLogLevel::Debug },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VlcMediaFactory,
	nullptr,
	"EVlcMediaLogLevel",
	"EVlcMediaLogLevel",
	Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel()
{
	if (!Z_Registration_Info_UEnum_EVlcMediaLogLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVlcMediaLogLevel.InnerSingleton, Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVlcMediaLogLevel.InnerSingleton;
}
// End Enum EVlcMediaLogLevel

// Begin Class UVlcMediaSettings
void UVlcMediaSettings::StaticRegisterNativesUVlcMediaSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVlcMediaSettings);
UClass* Z_Construct_UClass_UVlcMediaSettings_NoRegister()
{
	return UVlcMediaSettings::StaticClass();
}
struct Z_Construct_UClass_UVlcMediaSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the VlcMedia plug-in.\n */" },
		{ "IncludePath", "VlcMediaSettings.h" },
		{ "ModuleRelativePath", "Public/VlcMediaSettings.h" },
		{ "ToolTip", "Settings for the VlcMedia plug-in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiscCaching_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Caching duration for optical media (default = 300 ms). */" },
		{ "ModuleRelativePath", "Public/VlcMediaSettings.h" },
		{ "ToolTip", "Caching duration for optical media (default = 300 ms)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileCaching_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Caching duration for local files (default = 300 ms). */" },
		{ "ModuleRelativePath", "Public/VlcMediaSettings.h" },
		{ "ToolTip", "Caching duration for local files (default = 300 ms)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiveCaching_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Caching duration for cameras and microphones (default = 300 ms). */" },
		{ "ModuleRelativePath", "Public/VlcMediaSettings.h" },
		{ "ToolTip", "Caching duration for cameras and microphones (default = 300 ms)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkCaching_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Caching duration for network resources (default = 1000 ms). */" },
		{ "ModuleRelativePath", "Public/VlcMediaSettings.h" },
		{ "ToolTip", "Caching duration for network resources (default = 1000 ms)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogLevel_MetaData[] = {
		{ "Category", "Debugging" },
		{ "Comment", "/**\n\x09 * Log level for LibVLC log messages to be forwarded to UE4 log file (default = Warning).\n\x09 *\n\x09 * This setting is used only in Debug and Development builds.\n\x09 * No log entries will written in Shipping and Test builds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VlcMediaSettings.h" },
		{ "ToolTip", "Log level for LibVLC log messages to be forwarded to UE4 log file (default = Warning).\n\nThis setting is used only in Debug and Development builds.\nNo log entries will written in Shipping and Test builds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowLogContext_MetaData[] = {
		{ "Category", "Debugging" },
		{ "Comment", "/** Whether to include file name & line number in LibVLC log messages. */" },
		{ "ModuleRelativePath", "Public/VlcMediaSettings.h" },
		{ "ToolTip", "Whether to include file name & line number in LibVLC log messages." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DiscCaching;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FileCaching;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LiveCaching;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NetworkCaching;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LogLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LogLevel;
	static void NewProp_ShowLogContext_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowLogContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVlcMediaSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_DiscCaching = { "DiscCaching", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVlcMediaSettings, DiscCaching), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiscCaching_MetaData), NewProp_DiscCaching_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_FileCaching = { "FileCaching", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVlcMediaSettings, FileCaching), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileCaching_MetaData), NewProp_FileCaching_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_LiveCaching = { "LiveCaching", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVlcMediaSettings, LiveCaching), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiveCaching_MetaData), NewProp_LiveCaching_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_NetworkCaching = { "NetworkCaching", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVlcMediaSettings, NetworkCaching), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkCaching_MetaData), NewProp_NetworkCaching_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_LogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_LogLevel = { "LogLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVlcMediaSettings, LogLevel), Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogLevel_MetaData), NewProp_LogLevel_MetaData) }; // 3142422083
void Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_ShowLogContext_SetBit(void* Obj)
{
	((UVlcMediaSettings*)Obj)->ShowLogContext = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_ShowLogContext = { "ShowLogContext", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVlcMediaSettings), &Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_ShowLogContext_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowLogContext_MetaData), NewProp_ShowLogContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVlcMediaSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_DiscCaching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_FileCaching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_LiveCaching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_NetworkCaching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_LogLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_LogLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_ShowLogContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVlcMediaSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVlcMediaSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VlcMediaFactory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVlcMediaSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVlcMediaSettings_Statics::ClassParams = {
	&UVlcMediaSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVlcMediaSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVlcMediaSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVlcMediaSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVlcMediaSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVlcMediaSettings()
{
	if (!Z_Registration_Info_UClass_UVlcMediaSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVlcMediaSettings.OuterSingleton, Z_Construct_UClass_UVlcMediaSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVlcMediaSettings.OuterSingleton;
}
template<> VLCMEDIAFACTORY_API UClass* StaticClass<UVlcMediaSettings>()
{
	return UVlcMediaSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVlcMediaSettings);
UVlcMediaSettings::~UVlcMediaSettings() {}
// End Class UVlcMediaSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVlcMediaLogLevel_StaticEnum, TEXT("EVlcMediaLogLevel"), &Z_Registration_Info_UEnum_EVlcMediaLogLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3142422083U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVlcMediaSettings, UVlcMediaSettings::StaticClass, TEXT("UVlcMediaSettings"), &Z_Registration_Info_UClass_UVlcMediaSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVlcMediaSettings), 1130305470U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_2590621094(TEXT("/Script/VlcMediaFactory"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
