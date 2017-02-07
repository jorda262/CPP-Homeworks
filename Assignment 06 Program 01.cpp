/*This program ask's the user for the wholesale cost
of an item and the mark up percentage and the uses 
a function to calculate the retail cost.*/
#include <iostream>
#include <iomanip>
using namespace std;

//Function prototype.
void calculateRetail(double, double);

int main()
{
	//Variables asked for.
	double wholesaleCost, markUp;

	//Prompt user for wholesale cost.
	cout << "Enter the item's wholesale cost: ";
	cin >> wholesaleCost;

	//Prompt user for mark-up percentage.
	cout << "Enter the item's markup percentage: ";
	cin >> markUp;

	//Sends program to the calculateRetail function.
	calculateRetail(wholesaleCost, markUp);
	return 0;
}

//*******************************************************//
// Function used for calculating retail cost if an item  //
//*******************************************************//

void calculateRetail(double wholesaleCost, double markUp)
{
	double retail;
	cout << fixed << setprecision(2);
	retail = wholesaleCost + (wholesaleCost * (markUp / 100));
	cout << "The item's retail price is $" << retail << endl;
}
