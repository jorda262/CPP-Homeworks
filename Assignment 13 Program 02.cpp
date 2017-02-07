/*This program utilizes the OOP aspect 
of programming and works with the Circle
class. The program asks the user for the 
radius of a circle and returns the area,
diameter, and the circumference.*/
#include <iostream>
#include <cstdlib>
using namespace std;

//Circle class.
class Circle
{
// Private members.
private:
	double radius;
	const double pi = 3.14159;

	//Public members.
public:
	Circle::Circle()
	{
		radius = 1;
	}

	Circle::Circle(double rad)
	{
		if (rad > 0)
		{
			radius = rad;
		}
		else
		{
			cout << "Invalid radius\n";
			exit(EXIT_FAILURE);
		}
	}
	void setRadius(double rad)
	{
		if (rad >= 0)
		{
			radius = rad;
		}
		else
		{
			cout << "Invalid radius\n";
			exit(EXIT_FAILURE);
		}
	}

	double getRadius()
	{
		return radius;
	}

	double getArea()
	{
		return pi * radius * radius;
	}

	double getDiameter()
	{
		return 2 * radius;
	}

	double getCircumference()
	{
		return 2 * pi * radius;
	}
	
};

int main()
{
	double radius;  // To hold a radius

	// Get the radius.
	cout << "Enter the circle's radius: ";
	cin >> radius;

	// Create a Circle object with the 
	// specified radius.
	Circle c(radius);

	// Display the circle's data.
	cout << "Radius: " << c.getRadius()
		<< endl;
	cout << "Area : " << c.getArea()
		<< endl;
	cout << "Diameter: " << c.getDiameter()
		<< endl;
	cout << "Circumference: " << c.getCircumference()
		<< endl;
	return 0;
}
