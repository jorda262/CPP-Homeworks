/*This program asks the user to play a guessing game and to
guess a random number. It will then tell them higher or
lower until they guess the correct answer.*/
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	//Variables.
	int user_integer;
	bool winner = false;

	//Generates a random number.
	srand((unsigned)time(0));
	int random_integer = rand() % 100 + 1;

	//Prompt the user for a number.
	cout << "I'm thinking of a number. Can you\n";
	cout << "guess what it is? ";
	cin >> user_integer;

	//Loop that determines if the number is too high, too low, or right.
	while (!winner)
	{
		if (user_integer < random_integer)
		{
			cout << "No, that's too low.\n";
			cout << "Guess again: ";
			cin >> user_integer;
		}
		else if (user_integer > random_integer)
		{
			cout << "Sorry, that's too high.\n";
			cout << "Guess again: ";
			cin >> user_integer;
		}
		else
		{
			cout << "Congratulations! You guessed it!\n";
			cout << "I was thinking of the number " << random_integer << "." << endl;
			winner = true;
		}
	}
	return 0;
}
