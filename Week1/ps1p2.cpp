#include <iostream>
using namespace std;
int main()
{
	float num1, num2, sum;
	// Input Phase
	cout << "Please enter a real number - ";
	cin >> num1;
	cout << "Please enter a another real number - ";
	cin >> num2;
	// Process Phase
	sum = num1 + num2;
	// Output Phase
	cout << "Sum = " << sum << endl;

	return 0;
}