/*This program asks the user for a number between
1-10. If the number is between 1-10 it gives the
Roman numeral of that number. If the number isn't
between 1-10 it asks for another number between 1-10.*/
#include <iostream>

using namespace std;

int main()
{
	int choice;

	//Prompt user to enter a number 1-10
	cout << "Enter a number (1 - 10): ";
	cin >> choice;

	//Display the roman numberal for the number input.
	switch (choice)
	{
	case 1: cout << "The Roman numeral version of " << choice << " is I.\n";
		break;
	case 2: cout << "The Roman numeral version of " << choice << " is II.\n";
		break;
	case 3: cout << "The Roman numeral version of " << choice << " is III.\n";
		break;
	case 4: cout << "The Roman numeral version of " << choice << " is IV.\n";
		break;
	case 5: cout << "The Roman numeral version of " << choice << " is V.\n";
		break;
	case 6: cout << "The Roman numeral version of " << choice << " is VI.\n";
		break;
	case 7: cout << "The Roman numeral version of " << choice << " is VII.\n";
		break;
	case 8: cout << "The Roman numeral version of " << choice << " is VIII.\n";
		break;
	case 9: cout << "The Roman numeral version of " << choice << " is IX.\n";
		break;
	case 10: cout << "The Roman numeral version of " << choice << " is X.\n";
		break;
	default: cout << "Enter a number in the range 1 through 10.\n";
	}
	return 0;
}
