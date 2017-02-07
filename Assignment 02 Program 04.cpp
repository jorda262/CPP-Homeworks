// Energy drink consumption survey results.
#include <iostream>
using namespace std;

int main()
{
	int peopleSurveyed, customers, citrusCustomers;

	peopleSurveyed = 16500;

	// Calculate and display regular customers.
	customers = peopleSurveyed * .15;
	cout << customers << " customers purchased one or more energy drinks per week." << endl;

	// Calculate and display customers who prefer citrus flavor.
	citrusCustomers = customers * .58;
	cout << citrusCustomers << " of those customers preferred citrus flavored energy drink." << endl;
	return 0;
}