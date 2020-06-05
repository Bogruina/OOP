#include "IntValidator.h"

bool IntValidator::IsValuePositive(int value)
{
	bool isPositive = (value > 0);
	if (!isPositive)
	{
		return false;
	}
	return true;
}
void IntValidator::AssertPositiveValue(int value)
{
	bool isPositive = IntValidator::IsValuePositive(value);
	if (!isPositive)
	{
		throw exception("Ошибка. Отрицательное значение!");
	}
}