#include <iostream>
using namespace std;
int main()
{
	float Total, Tandt;

	//Input Phase
	cout << "Enter meal total: $";
	cin >> Total;

	//Process Phase
	Tandt = Total * 1.15;

	//Output Phase
	cout << "Meal Total: $" << Total << endl;
	cout << "Tip: 15%" << endl;
	cout << "Total with tip $" << Tandt << endl;

	return 0;
}