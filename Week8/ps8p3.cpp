#include <iostream>
#include <iomanip>
using namespace std;
int TotalTuition(int Tcredits)
{
	int T;

	T = Tcredits * 250;

	return T;
}
int main()
{
	string Lname;
	int Tcredits, Ttotal, Snum, Ttuit;

	Ttotal = 0;
	Snum = 0;

	cout << "Please enter last name: ";
	cin >> Lname;
	cout << "Please enter amount of credits taken: ";
	cin >> Tcredits;
	cout << endl;

	while (!cin.eof())
	{
		Ttuit = TotalTuition(Tcredits);
		cout << "Last Name: " << Lname << endl;
		cout << "Credits Taken: " << Tcredits << endl;
		cout << setprecision(2) << fixed;
		cout << "Tuition Owed : $" << Ttuit << endl;
		cout << endl;

		Ttotal = Ttotal + Ttuit;
		Snum = Snum + 1;

		cout << "Please enter last name(or ctl-z to stop): ";
		cin >> Lname;
		cout << "Please enter amount of credits taken: ";
		cin >> Tcredits;
		cout << endl;
	}

	cout << endl;
	cout << "Total Tuition: $" << Ttotal << endl;
	cout << "Number of students who entered data: " << Snum << endl;

	return 0;
}