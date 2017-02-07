/* This program utilizes a initialized array
and uses a series of functions on the array
to determine its total, average, row totals, 
column totals, and finds the highest and
lowest value on a particular row. */
#include <iostream>
#include <iomanip>
using namespace std;

// Global constants.
const int ROW_SIZE = 4;
const int COL_SIZE = 5;

// Function prototypes.
int getTotal(int num[ROW_SIZE][COL_SIZE]);
double getAverage(int num[ROW_SIZE][COL_SIZE]);
int getRowTotal(int num[ROW_SIZE][COL_SIZE], int row);
int getColumnTotal(int num[ROW_SIZE][COL_SIZE], int col);
int getHighestInRow(int num[ROW_SIZE][COL_SIZE], int row);
int getLowestInRow(int num[ROW_SIZE][COL_SIZE], int row);

int main()
{
	// Variables
	int num[ROW_SIZE][COL_SIZE] = { { 1, 2, 3, 4, 5 },
	                                { 6, 7, 8, 9, 10 },
	                                { 11, 12, 13, 14, 15 },
	                                { 16, 17, 18, 19, 20 } };
	double total = getTotal(num);
	double average = getAverage(num);
	int rowZeroTotal = getRowTotal(num, 0);
	int colTwoTotal = getColumnTotal(num, 2);
	int highest = getHighestInRow(num, 2);
	int lowest = getLowestInRow(num, 2);

	// Output display manipulators.
	cout << fixed << showpoint << setprecision(1);

	// Output display.
	cout << "The total of the array elements is " << getTotal(num) << endl;
	cout << "The average value of an element is " << getAverage(num) << endl;
	cout << "The total of row 0 is " << getRowTotal(num, 0) << endl;
	cout << "The total of col 2 is " << getColumnTotal(num, 2) << endl;
	cout << "The highest value in row 2 is " << getHighestInRow(num, 2) << endl;
	cout << "The lowest value in row 2 is " << getLowestInRow(num, 2) << endl;

	return 0;
}

//***************************************************//
//Function for summing the total of the entire array.//
//***************************************************//
int getTotal(int num[ROW_SIZE][COL_SIZE])
{
	double total = 0;

	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 5; col++)
			total += num[row][col];
	}
	return total;
}

//****************************************************//
//Function for getting the average value of the array.//
//****************************************************//
double getAverage(int num[ROW_SIZE][COL_SIZE])
{
	double total = 0;
	double average;

	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 5; col++)
			total += num[row][col];
	}

	average = total / (ROW_SIZE * COL_SIZE);
	return average;
}

//*************************************************//
//Function for summing the first row of the array.//
//************************************************//
int getRowTotal(int num[ROW_SIZE][COL_SIZE], int row)
{
	int rowZeroTotal = 0;

	for (int col = 0; col < COL_SIZE; col++)
	{
		rowZeroTotal += num[row][col];
	}
	return rowZeroTotal;
}

//***************************************************//
//Function for summing the third column of the array.//
//***************************************************//
int getColumnTotal(int num[ROW_SIZE][COL_SIZE], int col)
{
	int columnTwoTotal = 0;

	for (int row = 0; row < ROW_SIZE; row++)
	{
		columnTwoTotal += num[row][col];
	}
	return columnTwoTotal;
}

//**********************************************************************//
//Function for finding the highest number in the third row of the array.//
//**********************************************************************//
int getHighestInRow(int num[ROW_SIZE][COL_SIZE], int row)
{
	int highest;
	highest = num[row][0];
	for (int col = 0; col < COL_SIZE; col++)
	{
		if (num[row][col] > highest)
			highest = num[row][col];
	}
	return highest;
}

//*********************************************************************//
//Function for finding the lowest number in the third row of the array.//
//*********************************************************************//
int getLowestInRow(int num[ROW_SIZE][COL_SIZE], int row)
{
	int lowest;
	lowest = num[row][0];
	for (int col = 0; col < COL_SIZE; col++)
	{
		if (num[row][col] < lowest)
			lowest = num[row][col];
	}
	return lowest;
}