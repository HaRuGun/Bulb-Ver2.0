#pragma once

class TypeIndex
{
protected:

	Object BodyUI[2];
	Object EyeUI[2];
	Object MouseUI[2];
	Object HandUI[2];
	Object Item1UI[2];
	Object Item2UI[2];

	int currentType;



public:
	void Init();
	void Update();
	void Render();
	void Release();

	int tossType();
};