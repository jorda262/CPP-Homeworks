#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int user_integer;
	bool win = false;

	srand((unsigned)time(0));
	int random_integer = rand() % 101;

	cout << "I'm thinking of a number. Can you\n";
	cout << "guess what it is? ";
	cin >> user_integer;

	while (!win)
	{ 
		if (user_integer > random_integer)
		{
			cout << "Sorry, that's too high.";
			cout << "\nGuess again: ";
			cin >> user_integer;
		}

		else if (user_integer < random_integer)
		{
			cout << "Sorry, thats too low.";
			cout << "\nGuess again: ";
			cin >> user_integer;
		}

		else 
		{
			cout << "Congratulations! You guessed it!";
			cout << "\nI was thinking of the number " << random_integer << "." << endl;
			win = true;
		}
	return 0;
}