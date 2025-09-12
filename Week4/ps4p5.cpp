#include <iostream>
using namespace std;
int main()
{
	string Lname;
	int Ndep;
	float Ginc, Aginc, Itrate, Itax;

	// Input phase
	cout << "Please enter last name: ";
	cin >> Lname;
	cout << "Please enter number of dependants: ";
	cin >> Ndep;
	cout << "Please enter gross income: $";
	cin >> Ginc;

	// Process Phase
	Aginc = Ginc - (Ndep * 12000);
	if (Aginc > 50000)
		Itrate = 0.2;
	else
		Itrate = 0.1;
	Itax = Aginc * Itrate;
	if (Itax < 0)
		Itax = 100;

	// Output Phase
	cout << "Last Name: " << Lname << endl;
	cout << "Gross Income: $" << Ginc << endl;
	cout << "Number of Dependants: " << Ndep << endl;
	cout << "Adjusted Gross Income: $" << Aginc << endl;
	cout << "Income Tax: $" << Itax << endl;

	return 0;
}