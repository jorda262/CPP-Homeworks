/*This program displays a four part menu
directing the user through three different
area calculations of three differing shapes
and a quit option to end the program.*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int choice;
	double circleArea, rectangleArea, triangleArea, radius, length, width, base, height;
	
	//Constant for PI.
	const double PI = 3.14159;
	
	//Constants for menu choices.
	const int CHOICE_1 = 1,
			  CHOICE_2 = 2,
			  CHOICE_3 = 3,
			  CHOICE_4 = 4;

	//Display menu and ask user for menu choice.
	cout << "Geometry Calculator\n\n";
	cout << "1. Calculate the Area of a Circle\n";
	cout << "2. Calculate the Area of a Rectangle\n";
	cout << "3. Calculate the Area of a Triangle\n";
	cout << "4. Quit\n\n";
	cout << "Enter your choice (1-4): ";
	cin >> choice;
	
	//Respond to the user's menu selection.
	switch (choice)
	{
		case CHOICE_1: 
			 cout << "Enter the radius of the circle: ";
		     cin >> radius;
		     circleArea = (PI * pow(radius, 2));
		     cout << "The area is " << circleArea << endl;
			 break;
	
		case CHOICE_2: 
			 cout << "Enter the length of the rectangle: ";
		     cin >> length;
			 cout << "Enter the width of the rectangle: ";
			 cin >> width;
			 rectangleArea = length * width;
			 cout << "The area is " << rectangleArea << endl;
			 break;
	
		case CHOICE_3: 
			 cout << "Enter the length of the base: ";
		     cin >> base;
			 cout << "Enter the triangle's height: ";
			 cin >> height;
			 triangleArea = base * height * 0.5;
			 cout << "The area is " << triangleArea << endl;
			 break;
	
		case CHOICE_4:
		     cout << "Program ending.\n";
			break;
	
		default:
			 cout << "You may only enter 1, 2, 3, or 4.\n";
	}
	
	return 0;
}