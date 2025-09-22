#include <iostream>
using namespace std;
int main()
{
	float Lbs, Ppound, Total;

	// Input Phase
	cout << "Please enter quantity in pounds: ";
	cin >> Lbs;

	// Process Phase
	if (Lbs > 100)
		Ppound = .1;
	else if (Lbs >= 50)
		Ppound = .25;
	else
		Ppound = .5;
	Total = Lbs * Ppound;

	// Output Phase
	cout << "Price Per Pound: $" << Ppound << endl;
	cout << "Total: $" << Total << endl;

	return 0;
}