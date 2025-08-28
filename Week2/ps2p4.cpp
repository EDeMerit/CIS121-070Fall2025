#include <iostream>
using namespace std;
int main()
{
	string Lname;
	float Crdts, Tuit;
	// Input Phase
	cout << "Please enter last name - ";
	cin >> Lname;
	cout << "Please enter amount of credits taken - ";
	cin >> Crdts;
	// Process Phase
	Tuit = (Crdts * 250) + 100;
	// Output Phase
	cout << Lname << ", Tuition = $" << Tuit << endl;

	return 0;
}