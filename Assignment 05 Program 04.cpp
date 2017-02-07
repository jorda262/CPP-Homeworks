/*The program asks the user for the number of years.
It utilizes an outer for loop for each year. It then 
uses and inner loop for each month assuming they're
only 4 months per year. Each inner loop will ask
the user for the amount of rainfall that month in
inches.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int years;
	const int MONTHS = 4;
	float rainfall = 0.0, rainfallAverage = 0.0, totalRainfall = 0.0;

	//Prompt user for the number of years.
	cout << "This program will calculate average rainfall ";
	cout << "over a\nperiod of years. ";
	cout << "How many years do you wish to average? ";
	cin >> years;

	//Used nested for loops to input and display month and rainfall.
	//Then Calculate total Rainfall and average Rainfall for the period.
	for (int yearCount = 1; yearCount <= years; yearCount++)
	{
		cout << "\nYear " << yearCount << endl;
		for (int monthCount = 1; monthCount <= 4; monthCount++)
		{
			cout << "Number of inches of rain for month " << monthCount << " ? ";
			cin >> rainfall;

			totalRainfall += rainfall;
		}

		rainfallAverage = totalRainfall / (years * MONTHS);
	}

	
	//Display the months, total rainfall, and average rainfall.
	cout << "\nOver a period of " << years * MONTHS << " months, ";
	cout << totalRainfall << " inches of rain fell.\n";
	cout << "Average monthly rainfall for the period is " << setprecision(3) << fixed;
	cout << rainfallAverage << " inches.\n\n";
	return 0;
}