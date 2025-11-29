#include <iostream>
#include <iomanip>
#include "ps15p1_base_class.h"
#include "ps15p1_derived_class.h"
using namespace std;

int main()
{
	string fn, ln;
	float s;
	Employee MyEmployee;
	Manager MyManager;

	cout << "Please enter first name: ";
	cin >> fn;
	cout << "Please enter last name: ";
	cin >> ln;
	cout << "Please enter salary: $";
	cin >> s;
	cout << endl;

	while (!cin.eof())
	{
		MyManager.FirstName(fn);
		MyManager.LastName(ln);
		MyManager.Salary(s);

		cout << "First Name: " << MyManager.FirstName() << endl;
		cout << "Last Name: " << MyManager.LastName() << endl;
		cout << setprecision(2) << fixed;
		cout << "Salary: $" << MyManager.Salary() << endl;
		cout << "Employee Bonus: $" << MyEmployee.Bonus() << endl;
		cout << "Manager Bonus: $" << MyManager.Bonus() << endl;
		cout << "Long Term Bonus: $" << MyManager.Long_Term_Bonus() << endl;
		cout << endl;

		cout << "Please enter first name(or ctrl-z to stop): ";
		cin >> fn;
		cout << "Please enter last name: ";
		cin >> ln;
		cout << "Please enter salary: $";
		cin >> s;
		cout << endl;
	}

	return 0;
}