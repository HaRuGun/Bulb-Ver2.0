#pragma once
class IngameScene :
	public Scene
{
protected:
	Object *objMain;
	// main quit basics.bmp

public:
	void Init();
	void Update();
	void Render();
	void Release();

	IngameScene() {}
	~IngameScene() {}
};