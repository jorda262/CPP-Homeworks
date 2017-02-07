/*This program prompts the user for the speed of
the vehicle and how many hours the vehicle has
traveled. The program then uses the do while loop to
display the distance the vehicle has for each
hour of the trip.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double speed, distance;
	int hours;

	//Prompt the user for the speed of the vehicle.
	cout << "What is the speed of the vehicle in mph? ";
	cin >> speed;

	//Use if statement and nested do while loop for input validation.
	if (speed < 0)
	{
		do
		{
			cout << "Please enter a non-negative number for speed: ";
			cin >> speed;
		} while (speed < 0);
	}

	//Prompt the user for the hours the vehicle has traveled.
	cout << "For how many hours has it traveled? ";
	cin >> hours;

	//Use if statement and nested do while loop for input validation.
	if (hours < 1)
	{
		do
		{
			cout << "Please enter a 1 or greater for hours: ";
			cin >> hours;
		} while (hours < 1);
	}

	//Top Menu Display feature.
	cout << "\nHour\tDistance Traveled in Miles\n";
	cout << "---------------------------------\n";

	int count = 1;

	//Display table of information and calculate speeds at time intervals.
	do
	{
		distance = speed * count;
		cout << count << "\t\t" << distance << endl;
		count++;
	} while (count <= hours);
	return 0;
}

