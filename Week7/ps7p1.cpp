#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float Price, Dcount, Totaldprice = 0, Exprice, Damount, Dprice;
	int Qty;

	cout << "Please enter quantity (or ctl+z to stop): ";
	cin >> Qty;

	// Start Loop
	while (!cin.eof())
	{
		cout << "Please enter price: $";
		cin >> Price;

		if (Qty > 1000)
			Dcount = 0.9;
		else
			Dcount = 1;

		Exprice = Qty * Price;
		Damount = (1 - Dcount) * 100;
		Dprice = Exprice * Dcount;
		Totaldprice = Totaldprice + Dprice;

		cout << "Quantity: " << Qty << endl;
		cout << setprecision(2) << fixed;
		cout << "Price: " << Price << endl;
		cout << "Extended Price: " << Exprice << endl;
		cout << setprecision(0) << fixed;
		cout << "Discount Amount: " << Damount << "%" << endl;
		cout << setprecision(2) << fixed;
		cout << "Discounted Price: " << Dprice << endl;
		cout << endl;

		cout << "Please enter quantity (or ctl+z to stop): ";
		cin >> Qty;
	}

	// After Loop
	cout << endl;
	cout << "Total Discounted Price: $" << Totaldprice << endl;

	return 0;
}