#include "stdafx.h"
#include "Scene.h"

// ������ ���۵� �� �ʱ�ȭ�� �����ϴ� �Լ�
int Main::Init(HWND hWnd)
{
	IMAGEMANAGER->Init(hWnd);
	SCENEMANAGER->Init();
	INPUTMANAGER->Init();

	/* [ INIT START ] */

<<<<<<< HEAD
	stScene = new StartScene;
	stScene->Init();
	cdScene->Init();
	SCENEMANAGER->SetScene(stScene);


=======
>>>>>>> master
	/* [ INIT END ] */
	act = true;
	return 0;
}


// �� �����Ӹ��� ȣ��Ǵ� �Լ�
int Main::Update(HWND hWnd)
{
	INPUTMANAGER->Update(hWnd);
<<<<<<< HEAD

=======
	SCENEMANAGER->Update();
>>>>>>> master

	return 0;
}


// �� �̹����� �ִϸ��̼��� ����ϴ� �Լ�
int Main::Render()
{
	char * CurrentBackground = SCENEMANAGER->GetCurrentScene()->GetBackground();
	IMAGEMANAGER->RenderOn();
	IMAGEMANAGER->SetBackground(CurrentBackground);
	/* [ DRAW SRART ] */

<<<<<<< HEAD
=======
	SCENEMANAGER->Render();
>>>>>>> master

	/* [ DRAW END ] */
	IMAGEMANAGER->RenderOff();
	return 0;
}


// ������ ����� �� ������ �����ϴ� �Լ�
int Main::Release()
{
	act = false;
	/* [ RELEASE START] */

<<<<<<< HEAD
=======

>>>>>>> master
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