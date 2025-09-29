#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int Wqty;
	char Csts;
	float Exprice, Qprice, Tamount, Total;

	// Input Phase
	cout << "Please enter quantity of widgets: ";
	cin >> Wqty;
	cout << "Please enter customer status (A,B,C,D): ";
	cin >> Csts;

	// Process Phase
	if (Wqty > 10000 && Csts == 'A')
		Exprice = 10.00;
	else if (Wqty > 1000 && Csts == 'B')
		Exprice = 12.00;
	else if (Wqty >= 5000 && Wqty <= 1000 && Csts == 'C')
		Exprice = 20.00;
	else if (Wqty >= 5000 && Wqty <= 1000 && Csts == 'D')
		Exprice = 22.00;
	else if (Wqty < 5000)
		Exprice = 30.00;
	Qprice = Wqty * Exprice;
	Tamount = Qprice * 0.07;
	Total = Qprice + Tamount;

	// Output Phase
	cout << setprecision(2) << fixed;
	cout << "Extended Price: $" << Exprice << " per widget" << endl;
	cout << "Tax Amount: $" << Tamount << endl;
	cout << "Total: $" << Total << endl;

	return 0;
}