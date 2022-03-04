#include<iostream>
using namespace std;

int main() 
{
	int A ;
	int B ;

	cout << "Enter the numbers : " << endl;

	cin >> A;
	cin >> B;

	cout << "Before swap: " << " A= " << A << " B= " << B << endl;

	A = A * B;
	B = A / B;
	A = A / B;

	cout << "After swap: " << " A= " << A << " B= " << B << endl;
}