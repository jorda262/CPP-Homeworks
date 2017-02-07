/* This program asks the user for the number
of units sold and computes the total cost of
the purchase. Once you reach different numbers
of units purchased you receive a certain 
discount for that particular number.*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int AMOUNT_A = 10,
		      AMOUNT_B = 20,
		      AMOUNT_C = 50,
		      AMOUNT_D = 100,
	          AMOUNT_E = 0;
	const double RETAIL_PRICE = 99.00; 
	int unitsSold;
	double total;                      

	//Ask the user for the number of units sold.
	cout << "How many units were sold? ";
	cin >> unitsSold;

	//This lines sets the numeric output formatting.
	cout << fixed << showpoint << setprecision(2);
	
	//Determine the total purchase price.
	if (unitsSold < AMOUNT_A && unitsSold > AMOUNT_E)
	{
		total = unitsSold * RETAIL_PRICE;
		cout << "The total cost of the purchase is $" << total << endl;
	}
	else if (unitsSold < AMOUNT_B && unitsSold >= AMOUNT_A)
	{
		total = (unitsSold * RETAIL_PRICE * 0.8);
		cout << "The total cost of the purchase is $" << total << endl;
	}
	else if (unitsSold < AMOUNT_C && unitsSold >= AMOUNT_B)
	{
		total = (unitsSold * RETAIL_PRICE * 0.7);
		cout << "The total cost of the purchase is $" << total << endl;
	}
	else if (unitsSold < AMOUNT_D && unitsSold >= AMOUNT_C)
	{
		total = (unitsSold * RETAIL_PRICE * 0.6);
		cout << "The total cost of the purchase is $" << total << endl;
	}
	else if (unitsSold >= AMOUNT_D)
	{
		total = (unitsSold * RETAIL_PRICE * 0.5);
		cout << "The total cost of the purchase is $" << total << endl;
	}
	else
		cout << "You entered zero or a negative number. " << endl;
	return 0;
}