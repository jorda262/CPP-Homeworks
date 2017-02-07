/* This program dynamically allocates an array of 
integers. The size of the array is determined by the
user. The user enters the array size and then the
integers in the array. Once the array is filled the
program then doubles each integer and displays the 
integers after they've been doubled. */
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	// Variables and Pointer.
	int *ptr = NULL;
	int input;
	
	// Prompt the user for the array size.
	cout << "How many values should the array hold? ";
	cin >> input;

	// Points the pointer to the array.
	ptr = new int[input];

	while (ptr == 0)
	{
		cout << "The allocation was unsuccesful!" << endl;
		exit(0);
	}

	// Loop for recieving the values of the array.
	for (int count = 0; count < input; count++)
	{
		cout << "Please enter an integer: ";
		cin >> *(ptr + count);
		
	}

	cout << endl;

	// Loop used for doubling each value in the array.
	for (int count = 0; count < input; count++)
	{
		*(ptr + count) *= 2;
	}

	cout << "The integers that you entered doubled are:" << endl;

	// Loop for displaying the doubled values of the array.
	for (int count = 0; count < input; count++)
	{
		cout << *(ptr + count) << endl;
	}
	
	// Releases memory used for the dynamically allocated array.
	delete [] ptr;

	return 0;
}

