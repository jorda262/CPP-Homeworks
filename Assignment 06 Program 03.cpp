#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
using namespace std;

//Function prototype.
int coinToss(void);

int main()
{
	//Variables
	int tosses;
	int randomNumber;
	string result;

	//Prompt user for the number of coin tosses.
	cout << "How many tosses should I make? ";
	cin >> tosses;

	//Used for seeding the random number.
	unsigned seed = time(0);
	srand(seed);

	//Loop used to display each coin toss.
	for (int number = 1; number <= tosses; number++)
	{
		randomNumber = coinToss();
		if (randomNumber == 1)
			result = "heads";
		else
			result = "tails";

		cout << number << ":" << setw(7) << result << endl;
	}

	return 0;
}


//*******************************************************//
//     Function used for generating random numbers.      //
//*******************************************************//

int coinToss(void)
{
	int randomNumber;
	randomNumber = 1 + rand() % 2;
	return randomNumber;
}