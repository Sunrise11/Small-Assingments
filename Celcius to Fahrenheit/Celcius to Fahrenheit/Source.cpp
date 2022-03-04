
#include <iostream>
using namespace std;

float main() 
{
	float celcius;
	float fahrenheit;

	cout << "Enter Celcius: ";
	cin >> celcius;

	fahrenheit = celcius * 9 / 5 + 32;

	cout << celcius << " Celcius" << " --> " << fahrenheit << " Fahrenheit";
}
