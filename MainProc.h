#pragma once

// 게임의 메인 기능이 돌아가는 클래스
class Main
{
private:
	// 메니저 포인터 선언
	ImageManager *igmg;
	SceneManager *scmg;
	InputManager *ipmg;

	BOOL act;

	/* [ OBJECT START ] */

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