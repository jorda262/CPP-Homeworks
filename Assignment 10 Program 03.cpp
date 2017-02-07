/* This function asks the user to input multiple sentences
without capitalizing any of the words. The prgram then 
goes through the string and capitalizes the first
word of the sentence. */
#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

//Function Prototype
void capitalize(char *);

int main()
{
	const int SIZE = 40;  // Global constant for array size.
	char array[SIZE];     // Array for string of chars.

	//Prompt user for a sting.
	cout << "Enter at least two sentences, but do not use capital letters. \n";
	cin.getline(array, SIZE);

	char *ptr = array;
	
	// Function call.
	capitalize (ptr);

	//Display the number of words.
	cout << "\nHere are your sentences with beginning words capitalized: \n";
	cout << ptr << endl;

	return 0;
}

//*******************************************************************//
//     Function for capitalizing the first word in each sentence.    //
//*******************************************************************//

void capitalize(char *sentence)
{
	int count = 0;
	
	sentence[0] = toupper(sentence[0]);

	while (sentence[count] != '\0')
	{
		for (int index = 0; index < 40; index++)
		{
			if (sentence[index] == '.')
			{
				index += 2;
				sentence[index] = toupper(sentence[index]);
			}
		}
		count++;
	}
}