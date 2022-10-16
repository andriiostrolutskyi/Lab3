#include <iostream>
#include "1stHeader.h"
#include "2ndHeader.h"

using namespace std;

int main()
{
	cout << "F(x) is the Gaussian integral" << endl;
	for (int i = 1; i <= 10; ++i)
	{
		cout << "F(" << i << ") = " << gaussIntegral(i, 0.0001) << endl;
	}
	cout << "As we can see, after number 6, the results are incorrect because of incommensurability of terms" << endl << endl;
	cout << "Enter the power of the exponent: ";
	long double x;
	cin >> x;
	//enhancedExp() is calculating negative values of power correcly
	cout << "e to the power of " << x << " is equal to " << enhancedExp(x, 0.0001) << endl; 
	return 0;
}