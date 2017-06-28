#include "stdafx.h"


void StartScene::Init()
{
	SetBackground("./Resource/background/main_background.bmp");

	objStart = new Object;
	objStart->Init("./Resource/ui/main/start/main_start_basics.bmp", RGB(255, 8, 255), 178, 45, 323, 366);

	objCredit = new Object;
	objCredit->Init("./Resource/ui/main/credit/main_credit_basics.bmp", RGB(255, 8, 255), 178, 45, 323, 441);

	objQuit = new Object;
	objQuit->Init("./Resource/ui/main/quit/main_quit_basics.bmp", RGB(255, 8, 255), 178, 45, 323, 513);
}


void StartScene::Update()
{
	objQuit->Update();
	objCredit->Update();
	objStart->Update();
}


void StartScene::Render()
{
	objQuit->Render();
	IMAGEMANAGER->DrawObject(objQuit);
	objCredit->Render();
	IMAGEMANAGER->DrawObject(objCredit);
	objStart->Render();
	IMAGEMANAGER->DrawObject(objStart);
}


void StartScene::Release()
{
	objQuit->Release();
	delete(objQuit);
	objCredit->Release();
	delete(objCredit);
	objStart->Release();
	delete(objStart);
}