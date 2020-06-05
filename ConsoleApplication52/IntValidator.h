#pragma once
#include "Rectangle.h"

static class IntValidator
{
public:
	static bool IsValuePositive(int value);
	static void AssertPositiveValue(int value);
};

