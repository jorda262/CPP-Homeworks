/* This program calculates and displays
the gross and net box office profits
for a night at a movie theater*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int cTickSold, aTickSold;
	double priceAdult, priceChild, gross, net, distrib;
	string movie;

	priceAdult = 10.00;
	priceChild = 6.00;

	//Ask for the name of the movie.
	cout << "What is the name of the movie? ";
	getline(cin, movie);

	//Ask for the number of Adult Tickets sold.
	cout << "How many adult tickets were sold? ";
	cin >> aTickSold;

	//Ask for the number of Child Tickets sold.
	cout << "How many child tickets were sold? ";
	cin >> cTickSold;
	
	//Calculate the Gross Box Office Profit.
	gross = ((aTickSold * priceAdult) + (cTickSold * priceChild));

	//Calculate the Net Box Office Profit.
	net = gross * 0.2;

	//Calculate the amount paid to the distributor.
	distrib = gross - net;
	cout << endl;
	cout << endl;

	//Display the movie theaters revenue report.
	cout << setprecision(2) << fixed;
	cout << "Movie Name: " << setw(39) << movie << endl;
	cout << "Adult Tickets Sold: " << setw(20) << aTickSold << endl;
	cout << "Child Tickets Sold: " << setw(20) << cTickSold << endl;
	cout << "Gross Box Office Profit: " << setw(18) << gross << endl;
	cout << "Net Box Office Profit: " << setw(20) << net << endl;
	cout << "Amound Paid to Distributor: " << setw(15) << distrib << endl;
	return 0;
}