#pragma once
#include "Singleton.h"

#define KEYMAX 256

enum KETSTATE
{
	KS_NONE, KS_DOWN, KS_STAY, KS_UP
};

class InputManager
	: public Singleton<InputManager>
{
private:
	bool keyState[KEYMAX];
	bool prevKeyState[KEYMAX];

	POINT mousePos;
	BOOL curLBState;
	BOOL lastLBState;

public:
	void Init();
	void Update(HWND hWnd);
	void Release();

	int LButtonDown();
	int LButtonUp();
	BOOL LButtonClick(Object *hit);

	inline int GetKeyState(int key)
	{
		if (keyState[key])
		{
			if (prevKeyState[key])
				return KS_STAY;
			else
				return KS_DOWN;
		}
		else
		{
			if (prevKeyState[key])
				return KS_UP;
			else
				return KS_NONE;
		}
	}

	InputManager() {}
	~InputManager() {}
};

#define INPUTMANAGER InputManager::GetSingleton()