#include "stdafx.h"

void BodyScene::Init()
{
	SetBackground("./Resource/ui/background/ingame_background.bmp");

	objMain = new Object;
	objMain->Init("./Resource/ui/main/credit/home/home_basics.bmp", RGB(255, 8, 255), 41, 58, 36, 20);

}


void BodyScene::Update()
{
	objMain->Update();

}


void BodyScene::Render()
{
	objMain->Render();
	IMAGEMANAGER->DrawObject(objMain);

}


void BodyScene::Release()
{
	objMain->Release();
	delete(objMain);

}