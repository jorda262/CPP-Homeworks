/*This program asks the user for a number between
1-15. It then takes that number and makes a square
of X's with that number for the number of columns and rows.*/
#include <iostream>
using namespace std;

int main()
{
	int number;

	//Prompt the user for a number between 1-15.
	cout << "Enter a positive integer in the range of 1 - 15: ";
	cin >> number;

	//Input Validation loop to force user to enter number between 1-15.
	while (number < 1 || number > 15)
	{
		cout << "ERROR: Invalid number.\n";
		cout << "Enter a positive integer in the range of 1 - 15: ";
		cin >> number;
	}

	//Display a square of X's with sides based on number inputed.
	for (int row = 1; row <= number; row++)
	{
		for (int column = 1; column <= number; column++)
		{
			cout << "X";
		}
		cout << endl;
	}
	return 0;
}