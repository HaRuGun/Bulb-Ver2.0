#include "stdafx.h"

void TypeIndex::Init()
{
	BodyUI[0].Init("./Resource/ui/ingame/body/body_basics.bmp", RGB(255, 0, 255), 72, 48, 303, 108);
	BodyUI[1].Init("./Resource/ui/ingame/body/body_click.bmp", RGB(255, 0, 255), 41, 53, 335, 100);

	EyeUI[0].Init("./Resource/ui/ingame/body/eyes_basics.bmp", RGB(255, 0, 255), 72, 48, 300, 156);
	EyeUI[1].Init("./Resource/ui/ingame/body/eyes_click.bmp", RGB(255, 0, 255), 41, 53, 332, 148);

	MouseUI[0].Init("./Resource/ui/ingame/body/mouse_basics.bmp", RGB(255, 0, 255), 72, 48, 306, 205);
	MouseUI[1].Init("./Resource/ui/ingame/body/mouse_click.bmp", RGB(255, 0, 255), 41, 53, 338, 197);

	HandUI[0].Init("./Resource/ui/ingame/body/hands_basics.bmp", RGB(255, 0, 255), 72, 48, 317, 254);
	HandUI[1].Init("./Resource/ui/ingame/body/hands_click.bmp", RGB(255, 0, 255), 41, 53, 349, 246);

	Item1UI[0].Init("./Resource/ui/ingame/body/item1_basics.bmp", RGB(255, 0, 255), 72, 48, 300, 303);
	Item1UI[1].Init("./Resource/ui/ingame/body/item1_click.bmp", RGB(255, 0, 255), 41, 53, 332, 295);

	Item2UI[0].Init("./Resource/ui/ingame/body/item2_basics.bmp", RGB(255, 0, 255), 72, 48, 315, 352);
	Item2UI[1].Init("./Resource/ui/ingame/body/item2_click.bmp", RGB(255, 0, 255), 41, 53, 347, 344);

	currentType = 0;
}

void TypeIndex::Update()
{
	if (INPUTMANAGER->LButtonClick(BodyUI))
	{
		currentType = 0;
	}
	if (INPUTMANAGER->LButtonClick(EyeUI))
	{
		currentType = 1;
	}
	if (INPUTMANAGER->LButtonClick(MouseUI))
	{
		currentType = 2;
	}
	if (INPUTMANAGER->LButtonClick(HandUI))
	{
		currentType = 3;
	}
	if (INPUTMANAGER->LButtonClick(Item1UI))
	{
		currentType = 4;
	}
	if (INPUTMANAGER->LButtonClick(Item2UI))
	{
		currentType = 5;
	}
}

void TypeIndex::Render()
{
	if (currentType == 0)
	{
		BodyUI[1].Render();
	}
	else
	{
		BodyUI[0].Render();
	}

	if (currentType == 1)
	{
		EyeUI[1].Render();
	}
	else
	{
		EyeUI[0].Render();
	}

	if (currentType == 2)
	{
		MouseUI[1].Render();
	}
	else
	{
		MouseUI[0].Render();
	}

	if (currentType == 3)
	{
		HandUI[1].Render();
	}
	else
	{
		HandUI[0].Render();
	}

	if (currentType == 4)
	{
		Item1UI[1].Render();
	}
	else
	{
		Item1UI[0].Render();
	}

	if (currentType == 5)
	{
		Item2UI[1].Render();
	}
	else
	{
		Item2UI[0].Render();
	}
}

void TypeIndex::Release()
{
	for (int i = 0; i < 2; i++)
	{
		BodyUI[i].Release();
		EyeUI[i].Release();
		MouseUI[i].Release();
		HandUI[i].Release();
		Item1UI[i].Release();
		Item2UI[i].Release();
	}
}

int TypeIndex::tossType()
{
	return currentType;
}
