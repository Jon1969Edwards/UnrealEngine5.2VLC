

#include "VlcMediaSettings.h"


UVlcMediaSettings::UVlcMediaSettings()
	: DiscCaching(FTimespan::FromMilliseconds(300.0))
	, FileCaching(FTimespan::FromMilliseconds(300.0))
	, LiveCaching(FTimespan::FromMilliseconds(300.0))
	, NetworkCaching(FTimespan::FromMilliseconds(1000.0))
	, LogLevel(EVlcMediaLogLevel::Warning)
	, ShowLogContext(false)
{ }
