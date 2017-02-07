/*This program is a basic utilization of the concept
of object oriented programming. It asks for two constructors
one being the default constructor and one being a similar
version with 3 parameters. It then displays the information
of the default, of the second, and the mutated second.*/
#include <iostream>
#include <iomanip>
using namespace std;

//Inventory class.
class Inventory
{
private:
	// Private variables.
	int itemNumber;
	int quantity;
	double cost;
	double totalCost;

public:
	//Default Constructor
	Inventory::Inventory()
	{
		itemNumber = 0;
		quantity = 0;
		cost = 0;
		totalCost = 0;

	}
	//Second constructor with 3 parameters.
	Inventory::Inventory(int newItemNumber, int newQuantity, double newCost)
	{
		itemNumber = newItemNumber;
		quantity = newQuantity;
		cost = newCost;
		setTotalCost(newQuantity, newCost);
	}

	//Functions for setting and getting.
	void setItemNumber(int itn)
	{
		itemNumber = itn;
	}
	void setQuantity(int qty)
	{
		quantity = qty;
	}
	void setCost(double cst)
	{
		cost = cst;
	}
	void setTotalCost(int qty, double cst)
	{
		totalCost = qty * cst;
	}

	int getItemNumber()
	{
		return itemNumber;
	}
	int getQuantity()
	{
		return quantity;
	}
	double getCost()
	{
		return cost;
	}
	double getTotalCost()
	{
		return totalCost;
	}

};

int main()
{
	// Define an Inventory object and use the default constructor.
	Inventory inv;

	cout << fixed << showpoint << setprecision(2);

	// Display the member values.
	cout << "We have defined an object using the default constructor\n";
	cout << "Here are the values of the members:\n";
	cout << "Item number: " << inv.getItemNumber() << endl;
	cout << "Quantity: " << inv.getQuantity() << endl;
	cout << "Cost: " << inv.getCost() << endl;
	cout << "Total cost: " << inv.getTotalCost() << endl << endl;

	// Define an Inventory object and use the overloaded constructor.
	Inventory inv2(777, 10, 12.50);

	// Display the member values.
	cout << "We have defined an object using the overloaded constructor\n";
	cout << "Here are the values of the members:\n";
	cout << "Item number: " << inv2.getItemNumber() << endl;
	cout << "Quantity: " << inv2.getQuantity() << endl;
	cout << "Cost: " << inv2.getCost() << endl;
	cout << "Total cost: " << inv2.getTotalCost() << endl << endl;

	// Use the mutator functions to change the member values.
	inv2.setItemNumber(555);
	inv2.setQuantity(20);
	inv2.setCost(19.95);
	inv2.setTotalCost(20, 19.50);

	// Display the modified values.
	cout << "We have changed the values.\n";
	cout << "Here are the new values of the members:\n";
	cout << "Item number: " << inv2.getItemNumber() << endl;
	cout << "Quantity: " << inv2.getQuantity() << endl;
	cout << "Cost: " << inv2.getCost() << endl;
	cout << "Total cost: " << inv2.getTotalCost() << endl << endl;

	return 0;
}


