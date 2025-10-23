#include <iostream>
#include <iomanip>
using namespace std;
float MilesperGallon(float Tmiles, float Tgal)
{
	float MPG;
	MPG = Tmiles / Tgal;
	return MPG;
}
float GasCost(float Tgal)
{
	float C;
	C = Tgal * 3.50;
	return C;
}
int main()
{
	string Dcity;
	float Tmiles, Tgal, Mpg, Gcost, Tgcost = 0;
	cout << "Please enter destination city: ";
	cin >> Dcity;
	cout << "Please enter number of miles traveled: ";
	cin >> Tmiles;
	cout << "Please enter number of gallons used for trip: ";
	cin >> Tgal;
	cout << endl;
	while (!cin.eof())
	{
		Mpg = MilesperGallon(Tmiles, Tgal);
		Gcost = GasCost(Tgal);
		cout << "Destination City: " << Dcity << endl;
		cout << setprecision(2) << fixed;
		cout << "Miles per Gallon: " << Mpg << endl;
		cout << "Cost of Gas: $" << Gcost << endl;
		cout << endl;
		Tgcost = Tgcost + Gcost;
		cout << "Please enter destination city(or ctrl-z to stop): ";
		cin >> Dcity;
		cout << "Please enter number of miles traveled: ";
		cin >> Tmiles;
		cout << "Please enter number of gallons used for trip: ";
		cin >> Tgal;
		cout << endl;
	}
	cout << endl;
	cout << "Total Cost of Gas: $" << Tgcost << endl;
	return 0;
}