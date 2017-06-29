#include "stdafx.h"

void IngameScene::Init()
{
	SetBackground("./Resource/ui/background/ingame_background.bmp");

	objMain = new Object;
	objMain->Init("./Resource/ui/main/credit/home/home_basics.bmp", RGB(255, 8, 255), 41, 58, 36, 20);

}


void IngameScene::Update()
{
	objMain->Update();

}


void IngameScene::Render()
{
	objMain->Render();
	IMAGEMANAGER->DrawObject(objMain);

}


void IngameScene::Release()
{
	objMain->Release();
	delete(objMain);

}