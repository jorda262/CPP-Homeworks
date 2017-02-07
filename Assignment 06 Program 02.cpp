#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Constant for gravitational attraction.
const double GRAVITY = 9.8;

//Function prototype.
void fallingDistance(double);

int main()
{
	//Variable of time initialized to 1 second.
	int time = 1;
	
	//Display top of the chart.
	cout << "Seconds\t\tDistance\n";
	cout << "=============================\n";

	//Loop used to call function and display 1-10 seconds.
	for (time = 1; time <= 10; time++)
	{
		fallingDistance(time);
	}
	return 0;
}

//*******************************************************//
// Function used for calculating falling distance with   //
// time, and gravitational constant. 
//*******************************************************//

void fallingDistance(double time)
{
	double distance;
	distance = .5 * GRAVITY * pow(time, 2.0);
	cout << setprecision(0) << time << "\t\t" << setw(6) << setprecision(2) 
	<< fixed << distance << " meters" << endl;
}
