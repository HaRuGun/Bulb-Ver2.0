#pragma once

class CharObj
{
protected:
	Object Body;
	Object Eye;
	Object Mouse;
	Object Hand;
	Object Item1;
	Object Item2;

public:
	void Init();
	void Input(char* type, int number);
	CharObj(){}
	~CharObj(){}
};