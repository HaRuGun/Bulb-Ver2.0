#include "stdafx.h"
#include "Scene.h"

// ������ ���۵� �� �ʱ�ȭ�� �����ϴ� �Լ�
int Main::Init(HWND hWnd)
{
	IMAGEMANAGER->Init(hWnd);
	SCENEMANAGER->Init();
	INPUTMANAGER->Init();

	/* [ INIT START ] */

	/* [ INIT END ] */
	act = true;
	return 0;
}


// �� �����Ӹ��� ȣ��Ǵ� �Լ�
int Main::Update(HWND hWnd)
{
	INPUTMANAGER->Update(hWnd);
	SCENEMANAGER->Update();

	return 0;
}


// �� �̹����� �ִϸ��̼��� ����ϴ� �Լ�
int Main::Render()
{
	char * CurrentBackground = SCENEMANAGER->GetCurrentScene()->GetBackground();
	IMAGEMANAGER->RenderOn();
	IMAGEMANAGER->SetBackground(CurrentBackground);
	/* [ DRAW SRART ] */

	SCENEMANAGER->Render();

	/* [ DRAW END ] */
	IMAGEMANAGER->RenderOff();
	return 0;
}


// ������ ����� �� ������ �����ϴ� �Լ�
int Main::Release()
{
	act = false;
	/* [ RELEASE START] */


	/* [ RELEASE END] */

	// �Ŵ��� Ŭ���� ����
	IMAGEMANAGER->Release();
	SCENEMANAGER->Release();
	INPUTMANAGER->Release();

	PostQuitMessage(0);
	exit(0);
	return 0;
}


///////////////////////////
// Get


BOOL Main::GetAct()
{
	return act;
}