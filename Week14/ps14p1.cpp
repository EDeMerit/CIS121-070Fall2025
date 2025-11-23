#include <iostream>
#include <iomanip>
#include "ps14p1.h"
using namespace std;
int main()
{
	string Fname, Lname, Type;
	int Age;
	Membership MyMember;

	cout << "Please enter first name: ";
	cin >> Fname;
	cout << "Please enter last name: ";
	cin >> Lname;
	cout << "Please enter age: ";
	cin >> Age;
	cout << "Please enter membership type(Gold, Silver, or Bronze): ";
	cin >> Type;
	cout << endl;
	while (!cin.eof())
	{
		MyMember.Member_First_Name(Fname);
		MyMember.Member_Last_Name(Lname);
		MyMember.Member_Type(Type);
		MyMember.Member_Age(Age);

		cout << "First Name: " << MyMember.Member_First_Name() << endl;
		cout << "Last Name: " << MyMember.Member_Last_Name() << endl;
		cout << "Age: " << MyMember.Member_Age() << endl;
		cout << "Membership Type: " << MyMember.Member_Type() << endl;
		cout << setprecision(2) << fixed;
		cout << "Membership Cost: $" << MyMember.Membership_Cost() << endl;
		cout << setprecision(0) << fixed;
		cout << endl;

		cout << "Please enter first name(or ctrl-z to stop): ";
		cin >> Fname;
		cout << "Please enter last name: ";
		cin >> Lname;
		cout << "Please enter age: ";
		cin >> Age;
		cout << "Please enter membership type(Gold, Silver, or Bronze): ";
		cin >> Type;
		cout << endl;
	}
	return 0;
}