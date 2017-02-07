/*This program asks the user for the principal, 
the interest rate, and the number of times the
interest is compounded. Then it calculates and
displays the interest and total savings.*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double interest, principal, interestRate, savingsAmount, interestRateDisplayed;
	int timesCompounded;

	//Ask the user for the Principal deposit.
	cout << "What was the amount of the Principal investment? ";
	cin >> principal;

	//Ask the user for the interest rate.
	cout << "What is the interest rate for the savings account? ";
	cin >> interestRate;

	//Ask the user for the number of times the interest is compounded.
	cout << "How many times is the interest compounded? ";
	cin >> timesCompounded;

	//Calculate the amount in savings after a year.
	savingsAmount = (principal * pow((1 + (interestRate / timesCompounded)), timesCompounded));

	//Calculate the amount of interest earned.
	interest = savingsAmount - principal;

	//Display decimal percentage as a percentage.
	interestRateDisplayed = interestRate * 100;

	//Display the financial report.
	cout << setprecision(2) << fixed;
	cout << "\nInterest Rate: " << setw(16) << interestRateDisplayed << "%"<< endl;
	cout << "Times Compounded: " << setw(13) << timesCompounded << endl;
	cout << "Principal: " << setw(12) << "$" << setw(8) << principal << endl;
	cout << "Interest: " << setw(13) << "$" << setw(8) << interest << endl;
	cout << "Amount in Savings: " << setw(4) << "$" << setw(8) << savingsAmount << endl;
	return 0;
}
