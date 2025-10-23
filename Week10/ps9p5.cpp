#include <iostream>
#include <iomanip>
using namespace std;
float TuitionOwed(char Dcode)
{
	float C;
	if (Dcode == 'I')
		C = 250.00;
	else if (Dcode == 'O')
		C = 550.00;
	return C;
}
float TuitionCost(int Chours, float Towe)
{
	float T;
	T = Chours * Towe;
	return T;
}
int main()
{
	string Lname;
	int Chours;
	char Dcode;
	float Towe, Tuitcost, Ttcost = 0;
	cout << "Please enter last name: ";
	cin >> Lname;
	cout << "Please enter credit hours: ";
	cin >> Chours;
	cout << "Please enter district code(Letter I or O): ";
	cin >> Dcode;
	cout << endl;
	while (!cin.eof())
	{
		Towe = TuitionOwed(Dcode);
		Tuitcost = TuitionCost(Chours, Towe);
		cout << "Last Name: " << Lname << endl;
		cout << setprecision(2) << fixed;
		cout << "Tuition Cost: $" << Tuitcost << endl;
		cout << endl;
		Ttcost = Ttcost + Tuitcost;
		cout << "Please enter last name(or ctrl-z to stop): ";
		cin >> Lname;
		cout << "Please enter credit hours: ";
		cin >> Chours;
		cout << "Please enter district code(Letter I or O): ";
		cin >> Dcode;
		cout << endl;
	}
	cout << endl;
	cout << "Total Tuition Costs: $" << Ttcost << endl;
	return 0;
}