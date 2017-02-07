#include <iostream>
using namespace std;

// Global constant for size of the array.
const int ARRAY_SIZE = 10;

int main()
{
	int max = 0;             // Variable for max value.
	int min = 0;             // Variable for min value.
	int minHolder = 0;       // Variable used to hold values for min in loop.
	int maxHolder = 0;       // Variable used to hold values for max in loop.
	int numbers[ARRAY_SIZE]; // Array of numbers.

	// Loop used to get user input of the numbers for the array.
	for (int count = 0; count < ARRAY_SIZE; count++)
	{
		cout << "Enter an integer value: ";
		cin >> numbers[count];
		cout << endl;
	}

	// Get the arrays first element for min and max.
	min = numbers[0]; 
	max = numbers[0];

	// Loop used to find the smallest number in the array.
	for (int count = 1; count < 10; count++)
	{
		minHolder = numbers[count];

		if (minHolder < min)
			min = minHolder;
	}

	// Loop used to find the largest number in the array.
	for (int count = 1; count < 10; count++)
	{
		maxHolder = numbers[count];

		if (maxHolder > max)
			max = maxHolder;
	}

	// Output display for the largest and smallest value of the array.
	cout << "The largest value entered is " << max << endl;
	cout << "The smallest value entered is " << min << endl << endl;
	return 0;
}

