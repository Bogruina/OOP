#include "Rectangle.h"

void Rectangl::SetLenght(int lenght)
{
	IntValidator::AssertPositiveValue(lenght);
	this->_lenght = lenght;
}

void Rectangl::SetWidth(int width)
{
	IntValidator::AssertPositiveValue(width);
	this->_width = width;
}

int Rectangl::GetLenght()
{
	return this->_lenght;
}

int Rectangl::GetWidth()
{
	return this->_width;
}

Rectangl::Rectangl(int lenght, int width)
{
	SetLenght(lenght);
	SetWidth(width);
}