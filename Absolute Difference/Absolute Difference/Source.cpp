
#include <iostream>
using namespace std;

int main() 
{
	int firstNumber;
	int secondNumber;
	int difference;

	cout << "Enter Two Integers: ";
	cin >> firstNumber >> secondNumber;

	difference = firstNumber - secondNumber;

	cout << firstNumber << "-" << secondNumber << "=" << "|" <<abs(difference) << "|";

	return 0;
}