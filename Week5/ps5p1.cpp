#include <iostream>
using namespace std;
int main()
{
	string Lname, Lgrade;
	float Score;

	// Input Phase
	cout << "Please enter last name: ";
	cin >> Lname;
	cout << "Please enter score: ";
	cin >> Score;

	// Process Phase
	if (Score >= 90)
		Lgrade = 'A';
	else if (Score >= 80)
		Lgrade = 'B';
	else if (Score >= 70)
		Lgrade = 'C';
	else if (Score >= 60)
		Lgrade = 'D';
	else
		Lgrade = 'F';

	// Output Phase
	cout << "Student Last Name: " << Lname << endl;
	cout << "Student Grade: " << Lgrade << endl;

	return 0;
}