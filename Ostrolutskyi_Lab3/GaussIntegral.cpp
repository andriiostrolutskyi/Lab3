#include <iostream>

long double gaussIntegral(long double x, double epsilon) //epsilon is the accuracy
{

    long double result = x;
    long double component = x;
    short int divisor = 3;
    for (int i = 1; abs(component) >= epsilon; i++)
    {
        component *= -((x * x) / i);
        result += (component/(divisor));
        divisor += 2;
    }
    return result;
}
