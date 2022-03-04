#include <iostream>
using namespace std;

int main()
{
	int num;
	int guess;
	int tries = 0;

	 

	num = rand() % 100 + 1; 

	

	do
	{
		cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;
		tries++;

		if (guess > num) 
		{

			cout << "Too high" << endl;
		}	
		else if (guess < num) 
		{
			cout << "Too low" << endl;
		}	
		else 
		{
			cout << "Correct You got it in " << tries << " guesses";
			
		}
			
	} while (guess != num);

	return 0;
}
