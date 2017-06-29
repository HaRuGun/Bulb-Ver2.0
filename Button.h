#pragma once

#define BODY_MAX 3
#define EYE_MAX 19
#define MOUSE_MAX 19
#define HAND_MAX 11
#define ITEM1_MAX 9
#define ITEM2_MAX 27
#define MAX_TYPEKIND 6

class Button
{
protected:

	const int spritePos[9][2]
	{
		{ 409, 104 },{ 530, 104 },{ 665, 104 },
		{ 409, 199 },{ 530, 199 },{ 665, 199 },
		{ 409, 295 },{ 530, 295 },{ 665, 295 }
	};

	int typeIndex;
	int page;

	Object BodyButton[3];
	Object EyeButton[19];
	Object MouseButton[19];
	Object HandButton[11];
	Object Item1Button[9];
	Object Item2Button[27];

public:
	void Init();
	void Update();
	void Render();
	void Release();
};