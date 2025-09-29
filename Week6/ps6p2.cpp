#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float Pnum, Qty, Ucost, Total;

	// Input Phase
	cout << "Please enter part number: ";
	cin >> Pnum;
	cout << "Please enter quantity: ";
	cin >> Qty;

	// Process Phase
	if (Pnum == 10 && Qty > 1000)
		Ucost = 1.00;
	else if (Pnum == 99 && Qty > 500)
		Ucost = 2.00;
	else
		Ucost = 5.00;
	Total = Qty * Ucost;

	// Output Phase
	cout << "Part Number: " << Pnum << endl;
	cout << setprecision(2) << fixed;
	cout << "Cost per Unit: $" << Ucost << endl;
	cout << "Total: $" << Total << endl;

	return 0;
}