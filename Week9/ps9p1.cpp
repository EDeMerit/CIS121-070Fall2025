#include <iostream>
#include <iomanip>
using namespace std;
float ComputeTotal(int Qty, float Price)
{
	float T;
	T = Qty * Price;
	return T;
}
float ComputeDiscount(float Total)
{
	float Dcount, Damount, Dt;
	if (Total > 10000.00)
		Dcount = 0.10;
	else
		Dcount = 0.05;
	Damount = Total * Dcount;
	Dt = Total - Damount;
	return Dt;
}
int main()
{
	int Qty;
	float Price, Total, Dtotal, Stotal = 0, Sdtotal = 0;
	cout << "Please enter quantity: ";
	cin >> Qty;
	cout << "Please enter price: ";
	cin >> Price;
	cout << endl;

	while (!cin.eof())
	{
		Total = ComputeTotal(Qty, Price);
		Dtotal = ComputeDiscount(Total);
		cout << setprecision(2) << fixed;
		cout << "Total: $" << Total << endl;
		cout << "Discount Total: $" << Dtotal << endl;
		cout << endl;
		Stotal = Stotal + Total;
		Sdtotal = Sdtotal + Dtotal;
		cout << "Please enter quantity(or ctrl-z to stop): ";
		cin >> Qty;
		cout << "Please enter price: ";
		cin >> Price;
		cout << endl;
	}
	cout << endl;
	cout << "Final Total: $" << Stotal << endl;
	cout << "Final Discount Total: $" << Sdtotal << endl;
	return 0;
}