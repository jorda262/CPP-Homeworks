#include <iostream>
#include <iomanip>
using namespace std;

// Global constant for number of months.
const int MONTHS = 12;

// Function prototypes.
double getTotal(const double[], int);
double getAverage(const double[], int);
double getLargest(const double[], int);
double getSmallest(const double[], int);

int main()
{
	// Variables.
	double inches[MONTHS], total, largestRainfall, smallestRainfall, averageRainfall;
	
	// Output display manipulators.
	cout << fixed << showpoint << setprecision(2);

	// Loop used to get user input for rain/month.
	for (int count = 0; count < MONTHS; count++)
	{
		cout << "Enter the rainfall (in inches) for month #" << count + 1 << ": ";
		cin >> inches[count];
	}

	cout << endl;

	// Calls the getTotal function.
	getTotal(inches, MONTHS);

	total = getTotal(inches, MONTHS);

	// Calls averageRainfall function.
	averageRainfall = getAverage(inches, MONTHS);

	// Calls getLargest function.
	largestRainfall = getLargest(inches, MONTHS);

	// Calls getSmallest function.
	smallestRainfall = getSmallest(inches, MONTHS);

	// Output display for total, average, smallest, and largest.
	cout << "The total rainfall for the year is " << total << " inches.\n";
	cout << "The average rainfall for the year is " << averageRainfall << " inches.\n";
	cout << "The largest amount of rainfall was " << largestRainfall << " inches.\n";
	cout << "The smallest amount of rainfall was " << smallestRainfall << " inches.\n";

	return 0;
}

//***************************************************************//
// The getTotal function accepts the array and its size as       //
// arguments. The sum is returned as a double.                   //
//***************************************************************//

double getTotal(const double inches[], int months)
{
	double total = 0; // Accumulator.

	//Loop used for finding the sum of the array.
	for (int count = 0; count < MONTHS; count++)
		total += inches[count];

	return total;
}

//***************************************************************//
// The getAverage function accepts the array and its size as     //
// arguments. Calculates the total and divides by the constant   //
// MONTHS. The average is returned as a double.                  //
//***************************************************************//

double getAverage(const double inches[], int months)
{
	double average; 
	double total = 0 ; // Accumulator.

	//Loop used for finding the sum of the array.
	for (int count = 0; count < MONTHS; count++)
		total += inches[count];

	//Calculation for average.
	average = (total / MONTHS);

	return average;
}

//***************************************************************//
// The getLargest function accepts the array and its size as     //
// arguments. The array is then run through a loop that          //
// finds the largest number. The largest is returned as a double. //
//***************************************************************//

double getLargest(const double inches[], int months)
{
	double largest; // To hold the highest value.

	largest = inches[0]; // Get the arrays first element.

	// Loop used for finding the largest value of the array.
	for (int count = 1; count < MONTHS; count++)
	{
		if (inches[count] > largest)
			largest = inches[count];
	}
	return largest;
}

//***************************************************************//
// The getSmallest function accepts the array and its size as    //
// arguments. The array is then run through a loop that finds    //
//  the smallest number. The smallest is returned as a double.    //
//***************************************************************//

double getSmallest(const double inches[], int months)
{
	double smallest; // To hold the smallest value.

	smallest = inches[0]; // Get the arrays first element.


	// Loop used for finding the smallest value of the array.
	for (int count = 1; count < MONTHS; count++)
	{
		if (inches[count] < smallest)
			smallest = inches[count];
	}
	return smallest; 
}