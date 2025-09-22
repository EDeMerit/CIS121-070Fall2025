#include <iostream>
using namespace std;
int main()
{
	float Wght, Rate, Total;

	// Input Phase
	cout << "Please enter weight in pounds: ";
	cin >> Wght;

	// Process Phase
	if (Wght > 100)
		Rate = .5;
	else if (Wght >= 30)
		Rate = .25;
	else if (Wght >= 20)
		Rate = .2;
	else
		Rate = .1;
	Total = Wght * Rate;

	// Output Phase
	cout << "Weight: " << Wght << " pounds" << endl;
	cout << "Price per Pound: $" << Rate << endl;
	cout << "Total Price: $" << Total << endl;

	return 0;
}