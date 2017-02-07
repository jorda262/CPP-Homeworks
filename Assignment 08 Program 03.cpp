/* This program utilizes pointers as function
parameters. It asks the user to enter three 
values, doubles those values and then to
display all of the values.*/
#include <iostream>
using namespace std;

// Function prototypes.
void getValues(int *ptr1, int *ptr2, int *ptr3);
void doubleValues(int *ptr1, int *ptr2, int *ptr3);
void displayValues(int var1, int var2, int var3);

int main()
{
	// Variables.
	int var1, var2, var3;
	
	//Function calls.
	void getValues(int *&var1 ,int *&var2 ,int *&var3);
	void doubleValues(int *&var1, int *&var2,int *&var3);
	void displayValues(int var1,int var2, int var3);

	return 0;
}

//****************************************//
// Function used to get the three values. //
//****************************************//
void getValues(int *ptr1, int *ptr2, int *ptr3)
{
	cout << "Please enter an integer: ";
	cin >> *ptr1; 
	cout << "Please enter an integer: ";
	cin >> *ptr2;
	cout << "Please enter an integer: ";
	cin >> *ptr3;
	cout << endl;
}

//**************************************************//
// Function used to double the user inputted values. //
//**************************************************//
void doubleValues(int *ptr1, int *ptr2, int *ptr3)
{
	*ptr1 *= 2;
	*ptr2 *= 2;
	*ptr3 *= 2;
}

//**********************************************//
// Function used to display the doubled values. //
//**********************************************//
void displayValues(int var1, int var2, int var3)
{
	cout << "The values doubled are:" << endl;
	cout << var1 << " " << var2 << " " << var3 << endl;
}

