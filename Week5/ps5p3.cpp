#include <iostream>
using namespace std;
int main()
{
	string Lname;
	float Whrs, Total;
	char Jcode;
	int Prate;

	// Input Phase
	cout << "Please enter employee last name: ";
	cin >> Lname;
	cout << "Please enter hours worked: ";
	cin >> Whrs;
	cout << "Please enter job code E, J, or A: ";
	cin >> Jcode;

	// Process Phase
	if (Jcode == 'E')
		Prate = 25.00;
	else if (Jcode == 'J')
		Prate = 20.00;
	else
		Prate = 15.00;
	Total = Whrs * Prate;

	// Output Phase
	cout << "Employee Last Name: " << Lname << endl;
	cout << "Hours Worked: " << Whrs << endl;
	cout << "Pay Rate: $" << Prate << " per hour" << endl;
	cout << "Total: $" << Total << endl;

	return 0;
}