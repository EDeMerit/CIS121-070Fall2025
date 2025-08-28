#include <iostream>
using namespace std;
int main()
{
	string Lname;
	float Hrs, Prate, Gpay;
	// Input Phase
	cout << "Please enter last name - ";
	cin >> Lname;
	cout << "Please enter hours worked - ";
	cin >> Hrs;
	cout << "Please enter hourly pay rate - $";
	cin >> Prate;
	// Process Phase
	Gpay = Hrs * Prate;
	// Output Phase
	cout << Lname << ", Gross Pay = $" << Gpay << endl;

	return 0;
}