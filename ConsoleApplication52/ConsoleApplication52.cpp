#include "Rectangle.h"
#include "FigureScaler.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	int rectangleCount = 4;
	Rectangl* rectangles = new Rectangl[rectangleCount];
	for (int i = 0; i < rectangleCount; i++)
	{
		cout << "Введите длину прямоугольника" << endl;
		int lenght;
		cin >> lenght;
		cout << "Введите ширину прямоугольника" << endl;
		int width;
		cin >> width;
		rectangles[i] = Rectangl(lenght, width);
	}
	cout << "Размеры треугольников до масштабирования:" << endl;
	for (int i = 0; i < rectangleCount; i++)
	{
		cout << rectangles[i].GetLenght() << " x " << rectangles[i].GetWidth() << endl;
	}
	int scale;
	cout << "Введите масштаб" << endl;
	cin >> scale;
	FigureScaler::Scales(rectangles, rectangleCount, scale);
	cout << "Размеры треугольников после масштабирования:" << endl;
	for (int i = 0; i < rectangleCount; i++)
	{
		cout << rectangles[i].GetLenght() << " x " << rectangles[i].GetWidth() << endl;
	}
	return 0;
}