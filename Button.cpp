#include "stdafx.h"

char BodyButtonIndex[3][128]
{
	{ "./Resource/sprite/body/sprite_body_01.bmp" },
	{ "./Resource/sprite/body/sprite_body_02.bmp" },
	{ "./Resource/sprite/body/sprite_body_03.bmp" }
};
char EyeButtonIndex[19][128]
{
	{ "./Resource/sprite/eyes/sprite_eye_01.bmp" },
	{ "./Resource/sprite/eyes/sprite_eye_02.bmp" },
	{ "./Resource/sprite/eyes/sprite_eye_03.bmp" },
	{ "./Resource/sprite/eyes/sprite_eye_04.bmp" },
	{ "./Resource/sprite/eyes/sprite_eye_05.bmp" },
	{ "./Resource/sprite/eyes/sprite_eye_06.bmp" },
	{ "./Resource/sprite/eyes/sprite_eye_07.bmp" },
	{ "./Resource/sprite/eyes/sprite_eye_08.bmp" },
	{ "./Resource/sprite/eyes/sprite_eye_09.bmp" },
	{ "./Resource/sprite/eyes/sprite_eye_10.bmp" },
	{ "./Resource/sprite/eyes/sprite_eye_11.bmp" },
	{ "./Resource/sprite/eyes/sprite_eye_12.bmp" },
	{ "./Resource/sprite/eyes/sprite_eye_13.bmp" },
	{ "./Resource/sprite/eyes/sprite_eye_14.bmp" },
	{ "./Resource/sprite/eyes/sprite_eye_15.bmp" },
	{ "./Resource/sprite/eyes/sprite_eye_16.bmp" },
	{ "./Resource/sprite/eyes/sprite_eye_17.bmp" },
	{ "./Resource/sprite/eyes/sprite_eye_18.bmp" },
	{ "./Resource/sprite/eyes/sprite_eye_19.bmp" }
};
char MouseButtonIndex[19][128]
{
	{ "./Resource/sprite/mouse/sprite_mouse_01.bmp" },
	{ "./Resource/sprite/mouse/sprite_mouse_02.bmp" },
	{ "./Resource/sprite/mouse/sprite_mouse_03.bmp" },
	{ "./Resource/sprite/mouse/sprite_mouse_04.bmp" },
	{ "./Resource/sprite/mouse/sprite_mouse_05.bmp" },
	{ "./Resource/sprite/mouse/sprite_mouse_06.bmp" },
	{ "./Resource/sprite/mouse/sprite_mouse_07.bmp" },
	{ "./Resource/sprite/mouse/sprite_mouse_08.bmp" },
	{ "./Resource/sprite/mouse/sprite_mouse_09.bmp" },
	{ "./Resource/sprite/mouse/sprite_mouse_10.bmp" },
	{ "./Resource/sprite/mouse/sprite_mouse_11.bmp" },
	{ "./Resource/sprite/mouse/sprite_mouse_12.bmp" },
	{ "./Resource/sprite/mouse/sprite_mouse_13.bmp" },
	{ "./Resource/sprite/mouse/sprite_mouse_14.bmp" },
	{ "./Resource/sprite/mouse/sprite_mouse_15.bmp" },
	{ "./Resource/sprite/mouse/sprite_mouse_16.bmp" },
	{ "./Resource/sprite/mouse/sprite_mouse_17.bmp" },
	{ "./Resource/sprite/mouse/sprite_mouse_18.bmp" },
	{ "./Resource/sprite/mouse/sprite_mouse_19.bmp" }
};
char HandButtonIndex[11][128]
{
	{ "./Resource/sprite/hands/sprite_hands_01.bmp" },
	{ "./Resource/sprite/hands/sprite_hands_02.bmp" },
	{ "./Resource/sprite/hands/sprite_hands_03.bmp" },
	{ "./Resource/sprite/hands/sprite_hands_04.bmp" },
	{ "./Resource/sprite/hands/sprite_hands_05.bmp" },
	{ "./Resource/sprite/hands/sprite_hands_06.bmp" },
	{ "./Resource/sprite/hands/sprite_hands_07.bmp" },
	{ "./Resource/sprite/hands/sprite_hands_08.bmp" },
	{ "./Resource/sprite/hands/sprite_hands_09.bmp" },
	{ "./Resource/sprite/hands/sprite_hands_10.bmp" },
	{ "./Resource/sprite/hands/sprite_hands_11.bmp" }
};
char Item1ButtonIndex[9][128]
{
	{ "./Resource/sprite/item1/sprite_item1_01.bmp" },
	{ "./Resource/sprite/item1/sprite_item1_02.bmp" },
	{ "./Resource/sprite/item1/sprite_item1_03.bmp" },
	{ "./Resource/sprite/item1/sprite_item1_04.bmp" },
	{ "./Resource/sprite/item1/sprite_item1_05.bmp" },
	{ "./Resource/sprite/item1/sprite_item1_06.bmp" },
	{ "./Resource/sprite/item1/sprite_item1_07.bmp" },
	{ "./Resource/sprite/item1/sprite_item1_08.bmp" },
	{ "./Resource/sprite/item1/sprite_item1_09.bmp" }
};
char Item2ButtonIndex[27][128]
{
	{ "./Resource/sprite/item2/sprite_item2_01.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_02.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_03.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_04.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_05.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_06.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_07.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_08.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_09.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_10.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_11.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_12.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_13.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_14.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_15.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_16.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_17.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_18.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_19.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_20.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_21.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_22.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_23.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_24.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_25.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_26.bmp" },
	{ "./Resource/sprite/item2/sprite_item2_27.bmp" }
};

void Button::Init()
{
	for (int i = 0; i < BODY_MAX; i++)
	{
		BodyButton[i].Init(BodyButtonIndex[i], RGB(255, 0, 255), 104, 74, spritePos[i][0], spritePos[i][1]);
	}
	for (int i = 0; i < EYE_MAX; i++)
	{
		EyeButton[i].Init(EyeButtonIndex[i], RGB(255, 0, 255), 104, 74, spritePos[i%9][0], spritePos[i%9][1]);
	}
	for (int i = 0; i < MOUSE_MAX; i++)
	{
		MouseButton[i].Init(MouseButtonIndex[i], RGB(255, 0, 255), 104, 74, spritePos[i % 9][0], spritePos[i % 9][1]);
	}
	for (int i = 0; i < HAND_MAX; i++)
	{
		HandButton[i].Init(HandButtonIndex[i], RGB(255, 0, 255), 104, 74, spritePos[i % 9][0], spritePos[i % 9][1]);
	}
	for (int i = 0; i < ITEM1_MAX; i++)
	{
		Item1Button[i].Init(Item1ButtonIndex[i], RGB(255, 0, 255), 104, 74, spritePos[i % 9][0], spritePos[i % 9][1]);
	}
	for (int i = 0; i < ITEM2_MAX; i++)
	{
		Item2Button[i].Init(Item2ButtonIndex[i], RGB(255, 0, 255), 104, 74, spritePos[i % 9][0], spritePos[i % 9][1]);
	}
	NextPageButton.Init("./Resource/ui/ingame/next page/right_button_basic.bmp", RGB(255, 0, 255), 16, 29, 664, 385);
	PrevPageButton.Init("./Resource/ui/ingame/next page/left_button_basic.bmp", RGB(255, 0, 255), 16, 29, 616, 385);

	typeIndex = 0;
	page = 0;
}

void Button::Update()
{

}

void Button::Render()
{

}

void Button::Release()
{

}