#include <iostream>
#include <iomanip>
using namespace std;

//Global constant.
const int SIZE = 7;

int main()
{
	// Array for employee ID's
	int emID[SIZE] = { 5658845, 4520125, 7895122,
		               8777541, 8451277, 1302850,
		               7580489 };
	// Array for hours worked.
	double hoursWorked[SIZE];
	// Array for pay rate.
	double payRate[SIZE];

	// Output display manipulators.
	cout << fixed << showpoint << setprecision(2);

	// Loop for prompting the users inputs for hours and pay rate.
	for (int count = 0; count < SIZE; count++)
	{
		cout << "Employee #" << emID[count] << endl;
		cout << "\tHours worked: ";
		cin >> hoursWorked[count];
		cout << "\tPay rate: $";
		cin >> payRate[count];
		cout << endl;
	}

	// Chart top for display.
	cout << "-------------------" << endl;
	cout << "Employee\tWages" << endl;
	cout << "-------------------" << endl;

	// Loop for displaying employee ID #, and the total wage for that employee.
	for (int count = 0; count < SIZE; count++)
	{
		cout << "\nEmployee #" << emID[count] << " $ " << hoursWorked[count] * payRate[count] << endl;
	}
	return 0;
}