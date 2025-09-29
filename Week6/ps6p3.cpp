#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int Tnum;
	char Lcode;
	float Tprice, Total;

	// Input phase
	cout << "Please enter number of concert tickets: ";
	cin >> Tnum;
	cout << "Please enter location code (H,L,etc.): ";
	cin >> Lcode;
	
	// Process Phase
	if (Tnum > 25 || Lcode == 'H')
		Tprice = 30.00;
	else if (Tnum > 10 || Lcode == 'L')
		Tprice = 40.00;
	else
		Tprice = 50.00;
	Total = Tnum * Tprice;

	// Output Phase
	cout << "Number of tickets: " << Tnum << endl;
	cout << setprecision(2) << fixed;
	cout << "Price per ticket: $" << Tprice << endl;
	cout << "Total: $" << Total << endl;

	return 0;
}