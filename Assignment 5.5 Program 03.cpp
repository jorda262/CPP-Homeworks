/*This program asks the user for their monthly budget
and asks them to enter expenses and when they are done 
to input a negative number. Once the loop is closed by
the negative number the program will display whether you
are over, under, or at budget.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float budget,    //User input for budget
		  expense;   //User input for expenses or as a sentinel.

	//Prompt the user for their monthly budget.
	cout << "Enter your budget for the month: ";
	cin >> budget;

	//Prompt the user for a monthly expense.
	cout << "Enter an expense, or a negative number to quit: ";
	cin >> expense;

	//Prompt user again if value greater than 0 is entered.
	//If the value is negative the program will cease and display.
	if (expense >= 0);
	{
		while (expense >= 0)
		{
			budget -= expense;
			cout << "Enter an expense, or a negative number to quit: ";
			cin >> expense;
		}
	}

	//Display manipulators.
	cout << fixed << setprecision(2);

	//Display if you are over, under, or at budget.
	if (budget > 0)
		cout << "You are UNDER budget by $" << budget << endl;
	else if (budget < 0)
		cout << "You are OVER budget by $" << (budget * -1) << endl;
	else
		cout << "You are at your exact budget. " << endl;

	return 0;
}


	

