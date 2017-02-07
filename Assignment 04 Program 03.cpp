/*This program asks the user for the for the
beginning balance in their account and the 
number of checks used that month. The program
calculates the total fees and warns of the 
account being overdrawn. It then calculates 
the total fees for the month.*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double balance, total;
	int checks;
	const int AMOUNT_A = 20,
			  AMOUNT_B = 40,
			  AMOUNT_C = 60,
			  AMOUNT_D = 0,
			  BELOW_FEE = 15,
			  MONTHLY_CHARGE = 10;
	const double FEE_A = 0.1,
				 FEE_B = 0.08,
				 FEE_C = 0.06,
				 FEE_D = 0.04;

	//Ask the user for the balance and number of checks used.
	cout << "Enter the following information about your checking account.\n";
	cout << "Beginning balance: $";
	cin >> balance;
	cout << "Number of checks written: ";
	cin >> checks;

	//This lines sets the numeric output formatting.
	cout << fixed << showpoint << setprecision(2);

	//Determine the charges.
	if (balance >= 400)
	{
		if (checks < AMOUNT_A && checks > AMOUNT_D)
		{
			total = (MONTHLY_CHARGE + (checks * FEE_A));
			cout << "The bank fee this month is $" << total << endl;
		}
		else if (checks >= AMOUNT_A && checks < AMOUNT_B)
		{
			total = (MONTHLY_CHARGE + (checks * FEE_B));
			cout << "The bank fee this month is $" << total << endl;
		}
		else if (checks >= AMOUNT_B && checks < AMOUNT_C)
		{
			total = (MONTHLY_CHARGE + (checks * FEE_C));
			cout << "The bank fee this month is $" << total << endl;
		}
		else if (checks >= AMOUNT_C)
		{
			total = (MONTHLY_CHARGE + (checks * FEE_D));
			cout << "The bank fee this month is $" << total << endl;
		}
		else 
			cout << "You can't write a negative number of checks. Reenter information.";
	}
	else if (balance < 400 && balance >= 0)
	{
		if (checks < AMOUNT_A && checks > AMOUNT_D)
		{
			total = (BELOW_FEE + MONTHLY_CHARGE + (checks * FEE_A));
			cout << "The bank fee this month is $" << total << endl;
		}
		else if (checks >= AMOUNT_A && checks < AMOUNT_B)
		{
			total = (BELOW_FEE + MONTHLY_CHARGE + (checks * FEE_B));
			cout << "The bank fee this month is $" << total << endl;
		}
		else if (checks >= AMOUNT_B && checks < AMOUNT_C)
		{
			total = (BELOW_FEE + MONTHLY_CHARGE + (checks * FEE_C));
			cout << "The bank fee this month is $" << total << endl;
		}
		else if (checks >= AMOUNT_C)
		{
			total = (BELOW_FEE + MONTHLY_CHARGE + (checks * FEE_D));
			cout << "The bank fee this month is $" << total << endl;
		}
		else
			cout << "You can't write a negative number of checks. Reenter information.";
	}
	else
	{
		cout << "Your account is overdrawn!" << endl;
		if (checks < AMOUNT_A && checks > AMOUNT_D)
		{
			total = (BELOW_FEE + MONTHLY_CHARGE + (checks * FEE_A));
			cout << "The bank fee this month is $" << total << endl;
		}
		else if (checks >= AMOUNT_A && checks < AMOUNT_B)
		{
			total = (BELOW_FEE + MONTHLY_CHARGE + (checks * FEE_B));
			cout << "The bank fee this month is $" << total << endl;
		}
		else if (checks >= AMOUNT_B && checks < AMOUNT_C)
		{
			total = (BELOW_FEE + MONTHLY_CHARGE + (checks * FEE_C));
			cout << "The bank fee this month is $" << total << endl;
		}
		else if (checks >= AMOUNT_C)
		{
			total = (BELOW_FEE + MONTHLY_CHARGE + (checks * FEE_D));
			cout << "The bank fee this month is $" << total << endl;
		}
		else
			cout << "You can't write a negative number of checks. Reenter information.";
	}
	return 0;
}