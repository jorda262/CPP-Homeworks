/* This program reads an array into two different files.
One of the files is a .txt file and the other is a 
.bin file. It then opens these files and reads them to a
new array.*/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

//Structure for student information.
struct StudentInfo
{
	char name[40];
	int age;
	float gpa;
	char grade;
};

int main()
{
	// Array of student information thats intitialized.
	StudentInfo students[4] = { { "Ann Annson", 10, 1.10, 'D' },
								{ "Bill Billson", 20, 2.20, 'C' },
								{ "Carl Carlson", 30, 3.30, 'B' },
								{ "Don Donson", 40, 4.00, 'A' } };
	fstream tFile;
	
	// Open File.
	tFile.open("test.txt", ios::out | ios::binary);

	// Check to see that file open correctly.
	if (!tFile)
	{
		cout << "Error opening test.txt";
	}

	// Write array of information to the file.
	tFile.write(reinterpret_cast<char*>(students), sizeof(students));

	//Close the file.
	tFile.close();

	fstream bFile;

	// Open file.
	bFile.open("students.bin", ios::out | ios::binary);

	// Check to see that file opened correctly.
	if (!bFile)
	{
		cout << "Error opening students.bin";
	}

	// Write array of information to the file.
	bFile.write(reinterpret_cast<char*>(students), sizeof(students));

	// Close file.
	bFile.close();

	StudentInfo studentsText[4], studentsBinary[4];

	// Open .txt file.
	tFile.open("test.txt", ios::in | ios::binary);

	// Read from file.
	cout << "Reading file from text file into studentsText.\n";
	tFile.read(reinterpret_cast<char*>(studentsText), sizeof(studentsText));

	// Display manipulators.
	cout << fixed << showpoint << setprecision(2);

	// Loop for displaying the newly filled array.
	for (int count = 0; count < 4; count++)
	{
		cout << left << setw(14) << studentsText[count].name << " ";
		cout << right << setw(3) << studentsText[count].age << " ";
		cout << setw(5) << studentsText[count].gpa << " ";
		cout << setw(2) << studentsText[count].grade << endl;
	}

	//Close file.
	tFile.close();

	cout << endl;

	//Open .bin file.
	bFile.open("students.bin", ios::in | ios::binary);

	//Read from file.
	cout << "Reading file from binary file into studentsBinary.\n";
	bFile.read(reinterpret_cast<char*>(studentsBinary), sizeof(studentsBinary));
	
	// Loop for filling the newly filled array.
	for (int count = 0; count < 4; count++)
	{
		cout << left << setw(14) << studentsBinary[count].name << " ";
		cout << right << setw(3) << studentsBinary[count].age << " ";
		cout << setw(5) << studentsBinary[count].gpa << " ";
		cout << setw(2) << studentsBinary[count].grade << endl;
	}
	
	// Close file.
	bFile.close();

	return 0;
}