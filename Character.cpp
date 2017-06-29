#include "stdafx.h"

char BodyIndex[3][128]
{
	{ "./Resource/character/body/body_01.bmp" },
	{ "./Resource/character/body/body_02.bmp" },
	{ "./Resource/character/body/body_03.bmp" }
};

char EyeIndex[19][128]
{
	{ "./Resource/character/eyes/eyes_01.bmp" },
	{ "./Resource/character/eyes/eyes_02.bmp" },
	{ "./Resource/character/eyes/eyes_03.bmp" },
	{ "./Resource/character/eyes/eyes_04.bmp" },
	{ "./Resource/character/eyes/eyes_05.bmp" },
	{ "./Resource/character/eyes/eyes_06.bmp" },
	{ "./Resource/character/eyes/eyes_07.bmp" },
	{ "./Resource/character/eyes/eyes_08.bmp" },
	{ "./Resource/character/eyes/eyes_09.bmp" },
	{ "./Resource/character/eyes/eyes_10.bmp" },
	{ "./Resource/character/eyes/eyes_11.bmp" },
	{ "./Resource/character/eyes/eyes_12.bmp" },
	{ "./Resource/character/eyes/eyes_13.bmp" },
	{ "./Resource/character/eyes/eyes_14.bmp" },
	{ "./Resource/character/eyes/eyes_15.bmp" },
	{ "./Resource/character/eyes/eyes_16.bmp" },
	{ "./Resource/character/eyes/eyes_17.bmp" },
	{ "./Resource/character/eyes/eyes_18.bmp" },
	{ "./Resource/character/eyes/eyes_19.bmp" }
};

char MouseIndex[19][128]
{
	{ "./Resource/character/mouse/mouse_01.bmp" },
	{ "./Resource/character/mouse/mouse_02.bmp" },
	{ "./Resource/character/mouse/mouse_03.bmp" },
	{ "./Resource/character/mouse/mouse_04.bmp" },
	{ "./Resource/character/mouse/mouse_05.bmp" },
	{ "./Resource/character/mouse/mouse_06.bmp" },
	{ "./Resource/character/mouse/mouse_07.bmp" },
	{ "./Resource/character/mouse/mouse_08.bmp" },
	{ "./Resource/character/mouse/mouse_09.bmp" },
	{ "./Resource/character/mouse/mouse_10.bmp" },
	{ "./Resource/character/mouse/mouse_11.bmp" },
	{ "./Resource/character/mouse/mouse_12.bmp" },
	{ "./Resource/character/mouse/mouse_13.bmp" },
	{ "./Resource/character/mouse/mouse_14.bmp" },
	{ "./Resource/character/mouse/mouse_15.bmp" },
	{ "./Resource/character/mouse/mouse_16.bmp" },
	{ "./Resource/character/mouse/mouse_17.bmp" },
	{ "./Resource/character/mouse/mouse_18.bmp" },
	{ "./Resource/character/mouse/mouse_19.bmp" }
};

char HandIndex[11][128]
{
	{ "./Resource/character/hands/hands_01.bmp" },
	{ "./Resource/character/hands/hands_02.bmp" },
	{ "./Resource/character/hands/hands_03.bmp" },
	{ "./Resource/character/hands/hands_04.bmp" },
	{ "./Resource/character/hands/hands_05.bmp" },
	{ "./Resource/character/hands/hands_06.bmp" },
	{ "./Resource/character/hands/hands_07.bmp" },
	{ "./Resource/character/hands/hands_08.bmp" },
	{ "./Resource/character/hands/hands_09.bmp" },
	{ "./Resource/character/hands/hands_10.bmp" },
	{ "./Resource/character/hands/hands_11.bmp" }
};

char Item1Index[9][128]
{
	{ "./Resource/character/item1/item1_01.bmp" },
	{ "./Resource/character/item1/item1_02.bmp" },
	{ "./Resource/character/item1/item1_03.bmp" },
	{ "./Resource/character/item1/item1_04.bmp" },
	{ "./Resource/character/item1/item1_05.bmp" },
	{ "./Resource/character/item1/item1_06.bmp" },
	{ "./Resource/character/item1/item1_07.bmp" },
	{ "./Resource/character/item1/item1_08.bmp" },
	{ "./Resource/character/item1/item1_09.bmp" }
};

char Item2Index[27][128]
{
	{ "./Resource/character/item2/item2_01.bmp" },
	{ "./Resource/character/item2/item2_02.bmp" },
	{ "./Resource/character/item2/item2_03.bmp" },
	{ "./Resource/character/item2/item2_04.bmp" },
	{ "./Resource/character/item2/item2_05.bmp" },
	{ "./Resource/character/item2/item2_06.bmp" },
	{ "./Resource/character/item2/item2_07.bmp" },
	{ "./Resource/character/item2/item2_08.bmp" },
	{ "./Resource/character/item2/item2_09.bmp" },
	{ "./Resource/character/item2/item2_10.bmp" },
	{ "./Resource/character/item2/item2_11.bmp" },
	{ "./Resource/character/item2/item2_12.bmp" },
	{ "./Resource/character/item2/item2_13.bmp" },
	{ "./Resource/character/item2/item2_14.bmp" },
	{ "./Resource/character/item2/item2_15.bmp" },
	{ "./Resource/character/item2/item2_16.bmp" },
	{ "./Resource/character/item2/item2_17.bmp" },
	{ "./Resource/character/item2/item2_18.bmp" },
	{ "./Resource/character/item2/item2_19.bmp" },
	{ "./Resource/character/item2/item2_20.bmp" },
	{ "./Resource/character/item2/item2_21.bmp" },
	{ "./Resource/character/item2/item2_22.bmp" },
	{ "./Resource/character/item2/item2_23.bmp" },
	{ "./Resource/character/item2/item2_24.bmp" },
	{ "./Resource/character/item2/item2_25.bmp" },
	{ "./Resource/character/item2/item2_26.bmp" },
	{ "./Resource/character/item2/item2_27.bmp" }
};

void CharObj::Init()
{
	for (int i = 0; i < BODY_MAX; i++)
	{
		Body[i].Init(BodyIndex[i], RGB(255, 0, 255), 215, 512, 45, 44);
	}

	for (int i = 0; i < EYE_MAX; i++)
	{
		Eye[i].Init(EyeIndex[i], RGB(255, 0, 255), 215, 512, 45, 44);
	}

	for (int i = 0; i < MOUSE_MAX; i++)
	{
		Mouse[i].Init(MouseIndex[i], RGB(255, 0, 255), 215, 512, 45, 44);
	}

	for (int i = 0; i < HAND_MAX; i++)
	{
		Hand[i].Init(HandIndex[i], RGB(255, 0, 255), 215, 512, 45, 44);
	}

	for (int i = 0; i < ITEM1_MAX; i++)
	{
		Item1[i].Init(Item1Index[i], RGB(255, 0, 255), 215, 512, 45, 44);
	}

	for (int i = 0; i < ITEM2_MAX; i++)
	{
		Item2[i].Init(Item2Index[i], RGB(255, 0, 255), 215, 512, 45, 44);
	}

	BodyIn = 1;
	EyeIn = 19;
	MouseIn = 19;
	HandIn = 11;
	Item1In = 9;
	Item2In = 27;
}

void CharObj::Update()
{

}

void CharObj::Render()
{
	Body[BodyIn - 1].Render();
	Eye[EyeIn - 1].Render();
	Mouse[MouseIn - 1].Render();
	Hand[HandIn - 1].Render();
	Item1[Item1In - 1].Render();
	Item2[Item2In - 1].Render();
}

void CharObj::Release()
{
	for (int i = 0; i < BODY_MAX; i++)
	{
		Body[i].Release();
	}

	for (int i = 0; i < EYE_MAX; i++)
	{
		Eye[i].Release();
	}

	for (int i = 0; i < MOUSE_MAX; i++)
	{
		Mouse[i].Release();
	}

	for (int i = 0; i < HAND_MAX; i++)
	{
		Hand[i].Release();
	}

	for (int i = 0; i < ITEM1_MAX; i++)
	{
		Item1[i].Release();
	}

	for (int i = 0; i < ITEM2_MAX; i++)
	{
		Item2[i].Release();
	}
}

void CharObj::SetBody(int number)
{
	BodyIn = number;
}
void CharObj::SetEye(int number)
{
	EyeIn = number;
}
void CharObj::SetMouse(int number)
{
	MouseIn = number;
}
void CharObj::SetHand(int number)
{
	HandIn = number;
}
void CharObj::SetItem1(int number)
{
	Item1In = number;
}
void CharObj::SetItem2(int number)
{
	Item2In = number;
}