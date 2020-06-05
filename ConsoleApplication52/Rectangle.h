#pragma once
#include <iostream>
#include <windows.h>
#include "IntValidator.h"

using namespace std;

class Rectangl
{
private:
	int _lenght;
	int _width;
public:
	void SetLenght(int lenght);
	void SetWidth(int width);

	int GetLenght();
	int GetWidth();

	Rectangl(int lenght, int width);
	Rectangl() {}
};
