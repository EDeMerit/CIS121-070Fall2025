#include <iostream>
using namespace std;
int main()
{
	float Sprice, Sqty, Value;

	// Input Phase
	cout << "Enter current stock price: $";
	cin >> Sprice;
	cout << "Enter stock quantity: ";
	cin >> Sqty;

	// Process Phase
	Value = Sprice * Sqty;

	// Output Phase
	cout << "Current stock value: $" << Value << endl;

	return 0;
}