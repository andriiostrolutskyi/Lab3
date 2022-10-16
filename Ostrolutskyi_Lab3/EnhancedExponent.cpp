#include <iostream>
#include <cmath>
#include "2ndHeader.h"

long double enhancedExp(long double x, double epsilon) //epsilon is the accuracy
{
	long double e = 2.71828182845904;
	double intPart, fractPart;

	if (x == 1)
	{
		return e;
	}


	fractPart = modf(abs(x), &intPart);
	double integerPart = abs(x) - fractPart;
	long double a = pow(e, integerPart);
	long double b = exp(fractPart, epsilon);
	long double result = a * b;
	if (x < 0)
	{
		return (1 / result);
	}
	else
	{
		return result;
	}



}