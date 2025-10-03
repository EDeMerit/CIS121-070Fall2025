#include <iostream>
using namespace std;
int main()
{
	string Lname;
	float Nhits, Nbats, Batav;
	int Pnum = 0;

	cout << "Please enter last name (or ctl+z to stop): ";
	cin >> Lname;

	// Start Loop
	while (!cin.eof())
	{
		cout << "Please enter number of hits: ";
		cin >> Nhits;
		cout << "Please enter number of at bats: ";
		cin >> Nbats;
		Batav = (Nhits / Nbats);
		Pnum = Pnum + 1;

		cout << endl;
		cout << "Last Name: " << Lname << endl;
		cout << "Batting Average: " << Batav << endl;
		cout << endl;

		cout << "Please enter last name (or ctl+z to stop): ";
		cin >> Lname;
	}

	// After Loop
	cout << "Number of Players: " << Pnum << endl;

	return 0;
}