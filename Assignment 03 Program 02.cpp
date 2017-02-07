/*This program asks the user for the month,
the year, and the total amount collected
(which is sales plus sales tax).*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	const double COUNTY_SALES_TAX = 0.02, STATE_SALES_TAX = 0.04;
	double total, countyTax, stateTax, sales, totalTax;
	string month, year;

	//Ask the user for the month.
	cout << "What month is it? ";
	cin >> month;
	
	//Ask the user for the year.
	cout << "What year is it? ";
	cin >> year;
	
	//Ask the user for the total amount collected at the register.
	cout << "What was the total amount collected at the register? ";
	cin >> total;
	
	//Calculate the sales amount before taxes.
	sales = (total / (1 + COUNTY_SALES_TAX + STATE_SALES_TAX));

	//Calculate the County Sales Tax.
	countyTax = sales * COUNTY_SALES_TAX;

	//Calculate the State Sales Tax.
	stateTax = sales * STATE_SALES_TAX;

	//Calculate the Total Sales Tax.
	totalTax = countyTax + stateTax;

	//Display the Month and year for the report.
	cout << "\nMonth: " << month << endl;
	cout << "Year: " << year << endl;

	//Display speration feature.
	cout << "--------------------" << endl;

	//Display the monthly Sales Tax report.
	cout << setprecision(2) << fixed;
	cout << "Total Collected: " << setw(10) << "$ " << setw(9) << total << endl;
	cout << "Sales: " << setw(20) << "$ " << setw(9) << sales << endl;
	cout << "County Sales Tax: " << setw(9) << "$ " << setw(9) << countyTax << endl;
	cout << "State Sales Tax: " << setw(10) << "$ " << setw(9) << stateTax << endl;
	cout << "Total Sales Tax: " << setw(10) << "$ " << setw(9) << totalTax << endl;
	return 0;
}