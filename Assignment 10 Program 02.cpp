/* This function asks the user to input a sentence or a 
string of words. The program sends the input to a function
the function then determines the number of words in the
string and displays the amount. */
#include <iostream>
#include <cctype>
using namespace std;

//Function Prototype
int countChars(char*);

int main()
{
	char userString[60]; //Array for string of chars.

	//Prompt user for a sting.
	cout << "Enter a C-String, 80 or fewer characters: \n";
	cin.getline(userString, 61);

	//Display the number of words.
	cout << "\nThe number of words in the C-string: " << countChars(userString) << endl;
	
	return 0;
}

//*******************************************************************//
// Function for determining the number of words in a string of words //
//*******************************************************************//

int countChars(char *ptr)
{
	int count = 1;
	while (*ptr != '\0')
	{
		if (*ptr == ' ')
		{
			count++;
		}
		*ptr++;
	}
	return count;
}