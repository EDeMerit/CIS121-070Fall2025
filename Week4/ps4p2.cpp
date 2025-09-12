#include <iostream>
using namespace std;
int main()
{
	char Item;
	int Qty, Uprice, Exprice;

	// Input Phase
	cout << "Select Item A or B: ";
	cin >> Item;
	cout << "Enter quantity of item: ";
	cin >> Qty;

	// Process Phase
	if (Item == 'A')
		Uprice = 10.00;
	else
		Uprice = 20.00;
	Exprice = Qty * Uprice;

	// Output Phase
	cout << "Item: " << Item << endl;
	cout << "Unit Price: $" << Uprice << endl;
	cout << "Extended Price: $" << Exprice << endl;

	return 0;
}