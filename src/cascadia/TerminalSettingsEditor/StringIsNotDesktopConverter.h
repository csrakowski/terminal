// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

#include "StringIsNotDesktopConverter.g.h"
#include "DesktopWallpaperToEmptyStringConverter.g.h"
#include "../inc/cppwinrt_utils.h"

DECLARE_CONVERTER(winrt::Microsoft::Terminal::Settings::Editor, StringIsNotDesktopConverter);
DECLARE_CONVERTER(winrt::Microsoft::Terminal::Settings::Editor, DesktopWallpaperToEmptyStringConverter);
