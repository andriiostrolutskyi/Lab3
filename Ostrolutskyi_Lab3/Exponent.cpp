#include <iostream>

long double exp(long double x, double epsilon) //epsilon is the accuracy
{

        long double result = 1;
        long double component = 1;
        for (int i = 1; abs(component) >= epsilon; i++)
        {
            component *= (x / i);
            result += component;
        }
        return result;
}
