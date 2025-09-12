#include <iostream>
using namespace std;
int main()
{
	string Aname;
	float Aprice, Wcost, Wprice, Total;

	// Input Phase
	cout << "Please enter name of appliance: ";
	cin >> Aname;
	cout << "Please enter cost of appliance: $";
	cin >> Aprice;

	// Process Phase
	if (Aprice >= 1000)
		Wcost = 0.1;
	else
		Wcost = 0.05;
	Wprice = Aprice * Wcost;
	Total = Aprice + Wprice;

	// Output Phase
	cout << "Appliance: " << Aname << endl;
	cout << "Appliance cost: $" << Aprice << endl;
	cout << "Warranty price: $" << Wprice << endl;
	cout << "Total cost: $" << Total << endl;

	return 0;
}