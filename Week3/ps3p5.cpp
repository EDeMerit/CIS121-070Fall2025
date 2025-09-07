#include <iostream>
using namespace std;
int main()
{
	float Fcost, Ucost, Uprice, Breakeven;

	//Input Phase
	cout << "Enter fixed costs: $";
	cin >> Fcost;
	cout << "Enter cost per unit: $";
	cin >> Ucost;
	cout << "Enter price per unit: $";
	cin >> Uprice;

	// Process Phase
	Breakeven = Fcost / (Uprice - Ucost);

	// Output Phase
	cout << "Breakeven point: " << Breakeven << " units" << endl;

	return 0;
}