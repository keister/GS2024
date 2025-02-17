﻿// header.h: 표준 시스템 포함 파일
// 또는 프로젝트 특정 포함 파일이 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용을 Windows 헤더에서 제외합니다.

// Windows 헤더 파일
#include <windows.h>
// C 런타임 헤더 파일입니다.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <memory>
#include <tchar.h>
#include <windows.h>
#include <vector>
#include <chrono>
#include <cassert>
#include <mutex>
#include <thread>
#include <tchar.h>
#include <unordered_set>

#include <iostream>
#include <WS2tcpip.h>
#pragma comment (lib,"WS2_32.LIB")

#include "../../Common.h"

using namespace std::chrono;
using namespace std;

#define FRAME_WIDTH 1920
#define FRAME_HEIGHT 1080

extern WCHAR* CharToWCHAR(const char* cStr);