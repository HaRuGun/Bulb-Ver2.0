#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN
// Windows ��� ����:
#include <windows.h>

// C ��Ÿ�� ��� �����Դϴ�.
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <vector>
#include <timeapi.h>
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "msimg32.lib")

// TODO: ���α׷��� �ʿ��� �߰� ����� ���⿡�� �����մϴ�.
#include "SimpleFunction.h"

#include "ImageManager.h"
#include "InputManager.h"

#include "Object.h"

#include "Character.h"

#include "Scene.h"

#include "Button.h"

#include "TypeIndex.h"

#include "StartScene.h"
#include "CreditScene.h"
#include "IngameScene.h"
#include "StartScene.h"
#include "CreditScene.h"
#include "SceneManager.h"

#include "MainProc.h"
#include "WinMain.h"