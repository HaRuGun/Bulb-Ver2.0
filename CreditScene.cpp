#include "stdafx.h"


void CreditScene::Init()
{
	SetBackground("./Resource/ui/background/credit background.bmp");

	objMain = new Object;
	objMain->Init("./Resource/ui/main/credit/home/home basics.bmp", RGB(255, 8, 255), 41, 58, 36, 20);

}


void CreditScene::Update()
{
	objMain->Update();
	
}


void CreditScene::Render()
{
	objMain->Render();
	IMAGEMANAGER->DrawObject(objMain);
	
}


void CreditScene::Release()
{
	objMain->Release();
	delete(objMain);

}