// This program calculates the total for a retail sale.
#include <iostream>
using namespace std;

int main()
{
	double price, taxRate, salesTax, total;

	// Get price.
	cout << "Please enter the retail price: ";
	cin >> price;

	//Get taxRate.
	cout << "Please enter the tax rate: ";
	cin >> taxRate;

	//Calculate salesTax.
	salesTax = taxRate * price;
	cout << "The sales tax is: $ " << salesTax << endl;
	
	//Calcuate total.
	total = price + salesTax;
	cout << "The total price is: $ " << total << endl;
	return 0;
}