#include "FigureScaler.h"

void FigureScaler::Scale(Rectangl& rectangle, double scale)
{
	int scaleLenght = rectangle.GetLenght() * scale;
	int scaleWidth = rectangle.GetWidth() * scale;
	rectangle = Rectangl(scaleLenght, scaleWidth);
}

void FigureScaler::Scales(Rectangl* rectangles, int rectanglesCount, double
	scale)
{
	for (int i = 0; i < rectanglesCount; i++)
	{
		FigureScaler::Scale(rectangles[i], scale);
	}
}