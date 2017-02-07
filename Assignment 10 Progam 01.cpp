/* This program asks the user to input a 
string of 80 characters or less. Once 
inputted the program determines the length
of the string. */
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

// Function prototype.
int counterFunction(char *);

int main()
{
	const int SIZE = 80; // Constant to hold 80 characters.
	char input[SIZE];    // Array to hold a string.
	int count = 0;       // Counter

	// Prompt user to enter a string.
	cout << "Please enter a string of 80 characters or less:\n";
	cin.getline(input, SIZE);

	// Function call.
	count = counterFunction(input);
	
	// Display the length of the string entered.
	cout << "\nThe length of that string is: " << count << endl;

	return 0;
}

//**********************************************************//
// This function counts all of the characters in the input  //
// and then it stops when the null character is reached.    //
//**********************************************************//

int counterFunction(char* ptr)
{
	int count = 0; // Accumulator.

	while (ptr[count] != '\0')
	{
		count++; // Counter.
	}

	return count; // Returns number of characters to main.
}