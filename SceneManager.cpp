#include "stdafx.h"


void SceneManager::Init()
{
	currentScene = nullptr;

	stScene = new StartScene;
	stScene->Init();
	SetScene(stScene);
}


void SceneManager::Update()
{
	GetCurrentScene()->Update();
}


void SceneManager::Render()
{
	GetCurrentScene()->Render();
}


void SceneManager::Release()
{
	stScene->Release();
	delete(stScene);
}


////////////////////////////////////////////////
// Set

void SceneManager::SetScene(Scene *nextScene)
{
	if (currentScene != nullptr)
		currentScene->Release();
	nextScene->Init();
	
	currentScene = nextScene;
}

///////////////////////////////////////////////
// Get

Scene* SceneManager::GetCurrentScene()
{
	return currentScene;
}

Scene* SceneManager::GetStartScene()
{
	return stScene;
}