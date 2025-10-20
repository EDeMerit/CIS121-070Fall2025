#include <iostream>
#include <iomanip>
using namespace std;
int PayRate(char Jcode)
{
	float R;

	if (Jcode == 'L')
		R = 25.00;
	else if (Jcode == 'A')
		R = 30.00;
	else if (Jcode == 'J')
		R = 50.00;
	return R;
}
float GrossPay(float Whours, float Prate)
{
	float G;
	if (Whours > 40)
		Whours = 40 + ((Whours - 40) * 1.5);
	else
		Whours = Whours;
	G = Whours * Prate;
	return G;
}
int main()
{
	char Jcode;
	string Lname;
	float Whours, Prate, Gpay, Tgpay;

	Tgpay = 0;

	cout << "Please enter last name: ";
	cin >> Lname;
	cout << "Please enter job code(L, A, or J): ";
	cin >> Jcode;
	cout << "Please enter hours worked: ";
	cin >> Whours;
	cout << endl;

	while (!cin.eof())
	{
		Prate = PayRate(Jcode);
		Gpay = GrossPay(Whours, Prate);
		cout << "Last Name: " << Lname << endl;
		cout << setprecision(2) << fixed;
		cout << "Gross Pay: $" << Gpay << endl;
		cout << endl;
		Tgpay = Tgpay + Gpay;
		cout << "Please enter last name(or ctrl-z to stop): ";
		cin >> Lname;
		cout << "Please enter job code(L, A, or J): ";
		cin >> Jcode;
		cout << "Please enter hours worked: ";
		cin >> Whours;
		cout << endl;
	}
	cout << endl;
	cout << "Total Gross Pay: $" << Tgpay << endl;

	return 0;
}