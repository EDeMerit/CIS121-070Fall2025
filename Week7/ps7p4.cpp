#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	string Lname;
	char Jcode;
	float Hrs, Ohrs, Tpay = 0, Prate, Pay, Avpay;
	int Enum = 0;

	cout << "Please enter last name (or ctl+z to stop): ";
	cin >> Lname;

	// Start Loop
	while (!cin.eof())
	{
		cout << "Please enter job code (L,A,or J): ";
		cin >> Jcode;
		cout << "Please enter number of hours worked: ";
		cin >> Hrs;

		if (Jcode == 'L')
			Prate = 25.00;
		else if (Jcode == 'A')
			Prate = 30.00;
		else if (Jcode == 'J')
			Prate = 50.00;

		if (Hrs > 40)
			Ohrs = 40 + ((Hrs - 40) * 1.5);
		else
			Ohrs = Hrs;

		Pay = Ohrs * Prate;
		Tpay = Tpay + Pay;
		Enum = Enum + 1;

		cout << endl;
		cout << "Last Name: " << Lname << endl;
		cout << "Job Code: " << Jcode << endl;
		cout << "Hours Worked: " << Hrs << endl;
		cout << setprecision(2) << fixed;
		cout << "Pay: $" << Pay << endl;
		cout << setprecision(0) << fixed;
		cout << endl;

		cout << "Please enter last name (or ctl+z to stop): ";
		cin >> Lname;
	}

	// After Loop
	Avpay = Tpay / Enum;
	cout << setprecision(2) << fixed;
	cout << "Average Pay: $" << Avpay << endl;
	cout << setprecision(0) << fixed;
	cout << "Number of entries: " << Enum << endl;


	return 0;
}