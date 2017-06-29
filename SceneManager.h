#pragma once
#include "Singleton.h"

class StartScene;

class SceneManager
	: public Singleton<SceneManager>
{
protected:
	Scene *currentScene;

	// Scenes
	StartScene *stScene;
	CreditScene *cdScene;
	IngameScene *igScene;

public:
	void Init();
	void Update();
	void Render();
	void Release();

	void SetScene(Scene *nextScene);

	Scene* GetCurrentScene();
	Scene* GetStartScene();

	SceneManager() {}
	virtual ~SceneManager() {}
};

#define SCENEMANAGER SceneManager::GetSingleton()