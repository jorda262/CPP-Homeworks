/*This program displays the amount of numbers in a
file, sums the numbers in the file, and averages
the numbers in a file. The program retrieves these
numbers form the file Random.txt in the C: Drive.*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//Variables
	ifstream inFile;
	int number, amountNumbers = 0;
	float sum = 0.0, average, total = 0.0;

	//Open the file.
	inFile.open("C:\\Temp\\Random.txt");

	//While loop that keeps track of the amount and the sum.
	while (inFile >> number)
	{
		sum += number;
		amountNumbers++;
	}

	//Displays the number of numbers and the sum from the file.
	cout << "Number of numbers: " << amountNumbers;
	cout << "\nSum of the numbers: " << sum;
	
	//Calculates the average of the numbers from the file.
	average = (sum / amountNumbers);

	//Displays the average of the numbers from the file.
	cout << "\nAverage of the numbers: " << average << endl;

	//Closes the file.
	inFile.close();
	return 0;
}