#include <iostream>
using namespace std;
int main()
{
	string Dcity;
	float Miles, Ggal, Mtotal = 0, Mpg;
	int Tnum = 0;

	cout << "Please enter destination city (or ctl+z to stop): ";
	cin >> Dcity;

	// Start Loop
	while (!cin.eof())
	{
		cout << "Please enter miles travelled: ";
		cin >> Miles;
		cout << "Please enter number of gallons of gasoline used: ";
		cin >> Ggal;
		Mpg = (Miles / Ggal);
		Tnum = Tnum + 1;
		Mtotal = Mtotal + Miles;

		cout << endl;
		cout << "Destination City: " << Dcity << endl;
		cout << "Miles per Gallon: " << Mpg << endl;
		cout << endl;

		cout << "Please enter destination city (or ctl+z to stop): ";
		cin >> Dcity;
	}

	// After Loop
	cout << endl;
	cout << "Total Miles Travelled: " << Mtotal << endl;
	cout << "Number of Trips: " << Tnum << endl;

	return 0;
}