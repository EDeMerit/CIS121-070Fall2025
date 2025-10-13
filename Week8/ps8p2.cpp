#include <iostream>
#include <iomanip>
using namespace std;
float Pay(float Whours, float Prate)
{
	float Pa;

	Pa = Whours * Prate;

	return Pa;
}
int main()
{
	string Lname;
	char Jcode;
	float Whours, Prate, Pamount, Ptotal, Pave;
	int Ecount;

	Ptotal = 0;
	Ecount = 0;

	cout << "Please enter last name: ";
	cin >> Lname;
	cout << "Please enter job code(L, A, or J): ";
	cin >> Jcode;
	cout << "Please enter hours worked: ";
	cin >> Whours;
	cout << endl;

	while (!cin.eof())
	{
		if (Whours > 40)
			Whours = 40 + ((Whours - 40) * 1.5);
		else
			Whours = Whours;

		if (Jcode == 'L')
			Prate = 25.00;
		else if (Jcode == 'A')
			Prate = 30.00;
		else if (Jcode == 'J')
			Prate = 50.00;

		Pamount = Pay(Whours, Prate);
		cout << "Last Name: " << Lname << endl;
		cout << setprecision(2) << fixed;
		cout << "Pay: $" << Pamount << endl;
		cout << endl;

		Ptotal = Ptotal + Pamount;
		Ecount = Ecount + 1;

		cout << "Please enter last name(or ctl-z to stop): ";
		cin >> Lname;
		cout << "Please enter job code(L, A, or J): ";
		cin >> Jcode;
		cout << "Please enter hours worked: ";
		cin >> Whours;
		cout << endl;
	}
	
	Pave = Ptotal / Ecount;
	cout << endl;
	cout << "Average Pay: $" << Pave << endl;
	cout << "Number of Entries: " << Ecount << endl;

	return 0;
}