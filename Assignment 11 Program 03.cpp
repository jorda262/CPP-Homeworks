/* This program utilizes structures and unions.
It asks the user if they are paid hourly or are
a salary worker. It then accesses that part of the
union and asks for their pay and pay rate or bonus
and then displays the amount they make a week or
a year.*/
#include <iostream>
#include <iomanip>
using namespace std;

// Structure for hourly employees.
struct Hourly
{
	int hours;
	float payRate;
};

// Structure for salary employees.
struct Salary
{
	float salaries;
	float bonus;
};

// Union.
union PaySource
{
	Hourly hourlyPay;
	Salary commissionPay;
};

int main()
{
	// Variables.
	float gross = 0;
	char input;
	PaySource source;

	// User prompt for income type.
	cout << "Hourly(H) or Salary(S)? ";
	cin >> input;

	// Format outputting.
	cout << fixed << showpoint << setprecision(2);

	// Loop for hourly employee.
	if (input == 'H' || input == 'h')
	{
		cout << "Enter the number of hours worked: ";
		cin >> source.hourlyPay.hours;
		cout << "Enter the hourly pay rate: ";
		cin >> source.hourlyPay.payRate;
		cout << "Gross Pay: $";
		cout << source.hourlyPay.hours * source.hourlyPay.payRate << endl;
	}

	// Loop for salary employee.
	else if (input == 'S' || input == 's')
	{
		cout << "Enter the salary amount: ";
		cin >> source.commissionPay.salaries;
		cout << "Enter the bonus amount: ";
		cin >> source.commissionPay.bonus;
		cout << "Gross Pay: $";
		cout << source.commissionPay.salaries + source.commissionPay.bonus << endl;
	}

	// Input Validation.
	else
	{
		cout << "Please enter a 'H' or a 'S' " << endl;
	}
	return 0;
}