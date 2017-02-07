// This program calculates the user's remaining credit.
#include <iostream>
using namespace std;

int main()
{
	double maxCredit, creditUsed, remainingCredit;

	// Get maximum credit.
	cout << "What is your maximum credit? ";
	cin >> maxCredit;

	// Get the credit already used.
	cout << "How much credit have you already used? ";
	cin >> creditUsed;

	// Calculate the remainingCredit.
	remainingCredit = maxCredit - creditUsed;
	
	// Display the remainingCredit.
	cout << "Your remaining credit is $" << remainingCredit << endl;
	return 0;
}