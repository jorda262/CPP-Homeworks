//Restaurant Bill.
#include <iostream>
using namespace std;

int main()
{
	float mealCost, taxAmount, mealTax, tipAmount, totalBill;
	const double taxRate = 0.0675, tipRate = 0.20;

	//Cost of the meal.
	cout << "Meal: $ ";
	cin >> mealCost;

	//Taxes.
	taxAmount = mealCost * taxRate;
	cout << "Tax: $ " << taxAmount << endl;

	//Cost of meal and taxes without the tip.
	mealTax = mealCost + taxAmount;

	//Twenty percent tip calculation.
	tipAmount = mealTax * tipRate;
	cout << "Tip: $ " << tipAmount << endl;

	//Calculate and display the total bill.
	totalBill = mealTax + tipAmount;
	cout << "Total: $ " << totalBill << endl;
	return 0;
}