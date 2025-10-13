#include <iostream>
#include <iomanip>
using namespace std;
float UnitPrice(char Pcode)
{
	float u;

	if (Pcode == 'W')
		u = 10.00;
	else if (Pcode == 'C')
		u = 15.00;
	else if (Pcode == 'G')
		u = 20.00;

	return u;
}
float Shipping(char Pcode)
{
	float s;

	if (Pcode == 'W')
		s = 2.00;
	else if (Pcode == 'C')
		s = 5.00;
	else if (Pcode == 'G')
		s = 7.00;

	return s;
}
int main()
{
	char Pcode;
	int Qty;
	float Uprice, Ship, Scost, Exprice, Tprice, Ptotal;

	Ptotal = 0;

	cout << "Please enter product code(W, C, or G): ";
	cin >> Pcode;
	cout << "Please enter product quantity: ";
	cin >> Qty;
	cout << endl;

	while (!cin.eof())
	{
		Uprice = UnitPrice(Pcode);
		Ship = Shipping(Pcode);

		Scost = Ship * Qty;
		Exprice = Uprice * Qty;
		Tprice = Exprice + Scost;

		cout << setprecision(2) << fixed;
		cout << "Product Code: " << Pcode << endl;
		cout << "Unit Price: $" << Uprice << endl;
		cout << "Shipping: $" << Scost << endl;
		cout << "Extended Price: $" << Exprice << endl;
		cout << "Total Price: $" << Tprice << endl;
		cout << endl;

		Ptotal = Ptotal + Tprice;

		cout << "Please enter product code(W, C, or G)(or ctl-z to stop): ";
		cin >> Pcode;
		cout << "Please enter product quantity: ";
		cin >> Qty;
		cout << endl;
	}
	
	cout << endl;
	cout << "Total of All Entries Made: $" << Ptotal << endl;

	return 0;
}