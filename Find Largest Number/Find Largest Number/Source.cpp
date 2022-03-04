#include <iostream>
using namespace std;

int main() 
{
	int A;
	int B;

	cout << "Enter two numbers: ";
	cin >> A >> B;

	if (A >= B) 
	{
		cout << "Largest Number: " << A << endl;
	}
	
	if (B >= A) 
	{
		cout << "Largest Number: " << B;
	}
}