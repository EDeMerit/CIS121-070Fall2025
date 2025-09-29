#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char Ecode, Dcode;
	float Rcost;

	// Input Phase
	cout << "Please enter equipment code: ";
	cin >> Ecode;
	cout << "Please enter day code (F for full, H for half): ";
	cin >> Dcode;

	// Process Phase
	if (Ecode == 'A' && Dcode == 'F')
		Rcost = 10.00;
	else if (Ecode == 'A' && Dcode == 'H')
		Rcost = 15.00;
	else if (Ecode == 'B' && Dcode == 'F')
		Rcost = 20.00;
	else if (Ecode == 'B' && Dcode == 'H')
		Rcost = 35.00;
	else if (Ecode == 'C' && Dcode == 'H')
		Rcost = 40.00;
	else if (Ecode == 'C' && Dcode == 'F')
		Rcost = 45.00;
	else
		Rcost = 50.00;

	// Output Phase
	cout << setprecision(2) << fixed;
	cout << "Rental cost: $" << Rcost << endl;

	return 0;
}