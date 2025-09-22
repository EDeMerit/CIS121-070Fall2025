#include <iostream>
using namespace std;
int main()
{
	float Asalary, Trate, Tamount;

	// Input Phase
	cout << " Please enter annual salary: $";
	cin >> Asalary;

	// Process Phase
	if (Asalary > 100000)
		Trate = .4;
	else if (Asalary >= 50000)
		Trate = .35;
	else
		Trate = .25;
	Tamount = Asalary * Trate;

	// Output Phase
	cout << "Annual Salary: $" << Asalary << endl;
	cout << "Tax Rate: " << Trate * 100 << "%" << endl;
	cout << "Tax Amount: $" << Tamount << endl;

	return 0;
}