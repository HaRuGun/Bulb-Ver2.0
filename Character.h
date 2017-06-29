#pragma once

#define BODY_MAX 3
#define EYE_MAX 19
#define MOUSE_MAX 19
#define HAND_MAX 11
#define ITEM1_MAX 9
#define ITEM2_MAX 27

class CharObj
{
protected:
	Object Body[BODY_MAX];
	Object Eye[EYE_MAX];
	Object Mouse[MOUSE_MAX];
	Object Hand[HAND_MAX];
	Object Item1[ITEM1_MAX];
	Object Item2[ITEM2_MAX];

	int BodyIn;
	int EyeIn;
	int MouseIn;
	int HandIn;
	int Item1In;
	int Item2In;

public:
	void Init();
	void Update();
	void Render();
	void Release();
	void SetBody(int number);
	void SetEye(int number);
	void SetMouse(int number);
	void SetHand(int number);
	void SetItem1(int number);
	void SetItem2(int number);
	CharObj(){}
	~CharObj(){}
};