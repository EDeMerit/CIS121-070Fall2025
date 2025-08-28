#include <iostream>
using namespace std;
int main()
{
	float Qty, Uprice, Extprice;
	// Input Phase
	cout << "Please enter unit quantity - ";
	cin >> Qty;
	cout << "Please enter unit price - $";
	cin >> Uprice;
	// Process Phase
	Extprice = Qty * Uprice;
	// Output Phase
	cout << "Extended price = $" << Extprice << endl;

	return 0;
}