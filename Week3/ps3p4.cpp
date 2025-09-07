#include <iostream>
using namespace std;
int main()
{
	float Pprice, Cprice, Prcnt;

	// Input Phase
	cout << "Enter stock purchase price: $";
	cin >> Pprice;
	cout << "Enter current stock price: $";
	cin >> Cprice;

	//Process Phase
	Prcnt = ((Cprice - Pprice) / Pprice) * 100;

	// Output Phase
	cout << "Stock percent change: " << Prcnt << "%";

	return 0;
}