#pragma once
#include "Rectangle.h"

 static class FigureScaler
{
public:
	static void Scale(Rectangl& rectangle, double scale);
	static void Scales(Rectangl* rectangles, int rectanglesCount, double
		scale);
};