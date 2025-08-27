#include <iostream>
using namespace std;
int main()
{
	float Num1, Num2, Sum, Prod, Diff;
	// Input Phase
		cout << "Please enter a real number - ";
			cin >> Num1;
		cout << "Please enter another real number - ";
			cin >> Num2;
	// Process Phase
		Sum = Num1 + Num2;
		Prod = Num1 * Num2;
		Diff = Num1 - Num2;
	// Output Phase
		cout << "The sum is " << Sum << endl;
		cout << "The product is " << Prod << endl;
		cout << "The difference is " << Diff << endl;

	return 0;
}