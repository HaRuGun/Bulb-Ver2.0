#pragma once

// ������ ���� ����� ���ư��� Ŭ����
class Main
{
private:
	// �޴��� ������ ����
	ImageManager *igmg;
	SceneManager *scmg;
	InputManager *ipmg;

	BOOL act;

	/* [ OBJECT START ] */

	CHAROBJ *Character;
	StartScene *stScene;

	/* [ OBJECT END ] */

public:
	int Init(HWND hWnd);
	int Update(HWND hWnd);
	int Render();
	int Release();

	BOOL GetAct();

	Main() {};
	~Main() {};
};