#pragma once

// ������ ���� ����� ���ư��� Ŭ����
class Main
{
private:
	// �޴��� ������ ����
	ImageManager *igmg;
	SceneManager *scmg;

	BOOL act;

	POINT mousePos;
	BOOL curLBState;
	BOOL lastLBState;

	/* [ OBJECT START ] */

	StartScene *stScene;

	/* [ OBJECT END ] */

public:
	int Init(HWND hWnd);
	int Update(HWND hWnd);
	int Render();
	int Release();

	int LButtonDown();
	int LButtonUp();
	BOOL LButtonClick(Object *hit);

	BOOL GetAct();

	Main() {};
	~Main() {};
};