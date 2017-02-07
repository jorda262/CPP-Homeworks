/* This program demonstrates the use of structures
and uses initialized structures. It also sends
structures through functions to display them. */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Structure.
struct MovieData
{
	string title;
	string director;
	int yearReleased;
	string runningTime;
};

// Function prototype.
void displayMovie(MovieData);

int main()
{
	// Variables for the two releases of the same movie.
	MovieData movie1 = { "War of the Worlds", "Byron Haskin", 1953, "88 minutes" };
	MovieData movie2 = { "War of the Worlds", "Stephen Spielberg", 2005, "118 minutes" };

	//Function calls and some formatting.
	displayMovie(movie1);
	cout << endl << endl;
	displayMovie(movie2);
	return 0;
}

//*******************************************************************************//
// Function used for displaying a structure and is formatted to match assignment //
//*******************************************************************************//
void displayMovie(MovieData mov)
{
	cout << left << setw(13) << "Title" << ": " << mov.title << endl;
	cout << setw(13) << "Director" << ": " << mov.director << endl;
	cout << setw(13) << "Released" << ": " << mov.yearReleased << endl;
	cout << setw(13) << "Running Time" << ": " << mov.runningTime << endl;
}

