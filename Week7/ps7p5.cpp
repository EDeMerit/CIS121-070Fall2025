#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	string Lname;
	char Dcode;
	int Chrs;
	float Tuit, Snum = 0, Ttotal = 0, Ctotal = 0, Tcost;

	cout << "Please enter last name (or ctl+z to stop): ";
	cin >> Lname;

	// Start Loop
	while (!cin.eof())
	{
		cout << "Please enter number of credit hours taken: ";
		cin >> Chrs;
		cout << "Please enter district code (I for in, O for out): ";
		cin >> Dcode;

		if (Dcode == 'I')
			Tcost = 250.00;
		else if (Dcode == 'O')
			Tcost = 550.00;

		Tuit = Chrs * Tcost;
		Snum = Snum + 1;
		Ttotal = Ttotal + Tuit;
		Ctotal = Ctotal + Chrs;

		cout << endl;
		cout << "Last Name: " << Lname << endl;
		cout << setprecision(2) << fixed;
		cout << "Tuition: $" << Tuit << endl;
		cout << setprecision(0) << fixed;
		cout << endl;

		cout << "Please enter last name (or ctl+z to stop): ";
		cin >> Lname;
	}

	// After Loop
	cout << setprecision(2) << fixed;
	cout << "Total Tuition: $" << Ttotal << endl;
	cout << setprecision(0) << fixed;
	cout << "Total Credit Hours Taken: " << Ctotal << endl;
	cout << "Number of Students: " << Snum << endl;

	return 0;
}