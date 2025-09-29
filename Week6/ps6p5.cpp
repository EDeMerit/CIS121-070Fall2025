#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char Jcode;
	float Hrs, Prate, Gpay;

	// Input Phase
	cout << "Please enter job code (L, J, or A): ";
	cin >> Jcode;
	cout << "Please enter hours worked: ";
	cin >> Hrs;

	// Process Phase
	if (Jcode == 'L' && Hrs > 40)
		Prate = 50.00;
	else if (Jcode == 'L' && Hrs <= 40)
		Prate = 40.00;
	else if (Jcode == 'J' && Hrs > 60)
		Prate = 100.00;
	else if (Jcode == 'J' && Hrs <= 60)
		Prate = 75.00;
	else if (Jcode == 'A' && Hrs > 40)
		Prate = 25.00;
	else if (Jcode == 'A' && Hrs <= 40)
		Prate = 20.00;
	Gpay = Hrs * Prate;

	// Output Phase
	cout << setprecision(2) << fixed;
	cout << "Gross Pay: $" << Gpay << endl;

	return 0;
}