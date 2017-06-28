#include "stdafx.h"


void InputManager::Init()
{
	curLBState = false;
	lastLBState = curLBState;

	memset(keyState, false, sizeof(keyState));
	memset(prevKeyState, false, sizeof(prevKeyState));
}


void InputManager::Update(HWND hWnd)
{
	::GetCursorPos(&mousePos);
	::ScreenToClient(hWnd, &mousePos);

	memcpy(prevKeyState, keyState, sizeof(prevKeyState));

	for (int i = 0; i < KEYMAX; i++)
		keyState[i] = GetAsyncKeyState(i) & 0x8000;

	lastLBState = curLBState;
}


void InputManager::Release()
{
	
	return;
}


//////////////////////////////////


int InputManager::LButtonDown()
{
	curLBState = true;
	return 1;
}


int InputManager::LButtonUp()
{
	curLBState = false;
	return 1;
}


BOOL InputManager::LButtonClick(Object *hit)
{
	if (!curLBState)
		return false;

	if (mousePos.x >= hit->GetX() && mousePos.x <= hit->GetX() + hit->GetWidth()
		&& mousePos.y >= hit->GetY() && mousePos.y <= hit->GetY() + hit->GetHeight())
	{
		return true;
	}
	else
	{
		return false;
	}
}