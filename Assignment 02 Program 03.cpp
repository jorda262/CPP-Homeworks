//Stock Commission.
#include <iostream>
using namespace std;

int main()
{
	double shares, sharePrice, stockTotal, commission, totalAmount;
	const double commissionRate = 0.02;
	shares = 750;
	sharePrice = 35;

	//Calculate and display amound paid for stock alone.
	stockTotal = shares * sharePrice;
	cout << "Stock: $" << stockTotal << endl;

	//Calculate and display commission amount.
	commission = stockTotal * commissionRate;
	cout << "Commission: $" << commission << endl;

	//Calculate and display total amount paid.
	totalAmount = stockTotal + commission;
	cout << "Total: $" << totalAmount << endl;
	return 0;
}