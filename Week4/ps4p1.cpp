#include <iostream>
using namespace std;
int main()
{
	int Qty, Uprice, Exprice;
	float Tax, Total;

	// Input Phase
	cout << "Please enter item quantity: ";
	cin >> Qty;

	// Process Phase
	if (Qty >= 1000)
		Uprice = 3.00;
	else
		Uprice = 5.00;
	Exprice = Qty * Uprice;
	Tax = Exprice * 0.07;
	Total = Exprice + Tax;

	// Output Phase
	cout << "Item Quantity: " << Qty << endl;
	cout << "Unit Price: $" << Uprice << endl;
	cout << "Extended Price: $" << Exprice << endl;
	cout << "Tax: $" << Tax << endl;
	cout << "Total Price: $" << Total << endl;

	return 0;
}