#include <iostream>
using namespace std;
int main()
{
	float Price, Dcount, Dpercent, Dprice;
	// Input Phase
	cout << "Please enter item price - $";
	cin >> Price;
	cout << "Please enter percent discounted as a decimal - ";
	cin >> Dcount;
	// Process Phase;
	Dprice = Price * (1 - Dcount);
	Dpercent = Dcount * 100;
	// Output Phase;
	cout << "Discount = " << Dpercent << "%" << endl;
	cout <<	"Discounted Price = $" << Dprice << endl;

	return 0;
}