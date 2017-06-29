#include "stdafx.h"


Main main;


int WINAPI WinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	HWND hWnd;
	WNDCLASSEX wc;

	ZeroMemory(&wc, sizeof(WNDCLASSEX));
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = CS_HREDRAW | CS_VREDRAW;
	wc.lpfnWndProc = WindowProc;
	wc.hInstance = hInstance;
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
	wc.lpszClassName = "WindowClass";
	RegisterClassEx(&wc);

	RECT wr = { 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT };
	DWORD windowStyle;
	
	int resoultions = MessageBox(NULL, "전체화면으로 실행할까요?", "Bulb", MB_OKCANCEL);
	if (resoultions == IDOK)
	{
		windowStyle = WS_POPUP;
		AdjustWindowRect(&wr, WS_POPUP, true);

		DEVMODE devMode;
		ZeroMemory(&devMode, sizeof(DEVMODE));
		devMode.dmSize = sizeof(DEVMODE);
		devMode.dmBitsPerPel = 32;
		devMode.dmPelsWidth = SCREEN_WIDTH;
		devMode.dmPelsHeight = SCREEN_HEIGHT;
		devMode.dmFields = DM_BITSPERPEL | DM_PELSWIDTH | DM_PELSHEIGHT;
		ChangeDisplaySettings(&devMode, CDS_FULLSCREEN);
	}
	else if (resoultions == IDCANCEL)
	{
		windowStyle = WS_OVERLAPPEDWINDOW;
		AdjustWindowRect(&wr, WS_OVERLAPPEDWINDOW, FALSE);
	}

	hWnd = CreateWindowEx(NULL,
		"WindowClass",
		"Bulb",
		windowStyle,
		0, 0,
		wr.right - wr.left, wr.bottom - wr.top,
		NULL,
		NULL,
		hInstance,
		NULL);

	ShowWindow(hWnd, nCmdShow);

	// enter the main loop:
	// 프레임을 30으로 고정하기 위해 시스템의 시간을 불러와서 체크한다.
	// mainTime이 30을 넘기면 업데이트 및 렌더

	MSG msg;

	const float timeScale = 0.001f;
	const float frame = 1.0f / 30.0f;

	__int64 curTime;
	__int64 lastTime = timeGetTime();
	float mainTime = 0.0f;
	
	while (TRUE)
	{
		if (PeekMessage(&msg, NULL, 0, 0, PM_NOREMOVE))
		{
			if (GetMessage(&msg, NULL, 0, 0))
			{
				TranslateMessage(&msg);
				DispatchMessage(&msg);
			}
			else
			{
				return (int)msg.wParam;
			}
		}
		else if(main.GetAct())
		{
			curTime = timeGetTime();
			mainTime += (curTime - lastTime) * timeScale;
			lastTime = curTime;

			while (mainTime >= frame)
			{
				main.Update(hWnd);
				mainTime -= frame;
				main.Render();
			}
		}

		if (msg.message == WM_QUIT)
			break;
	}

	return msg.wParam;
}


LRESULT CALLBACK WindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_CREATE: return main.Init(hWnd); break;
	case WM_LBUTTONDOWN: return INPUTMANAGER->LButtonDown(); break;
	case WM_LBUTTONUP: return INPUTMANAGER->LButtonUp(); break;
	case WM_DESTROY: return main.Release(); break;
	}

	return DefWindowProc(hWnd, message, wParam, lParam);
}