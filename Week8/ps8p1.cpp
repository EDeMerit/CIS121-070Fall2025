#include <iostream>
using namespace std;
float MilesperGallon(float Tmiles, float Ggas)
{
	float mpg;
	
	mpg = Tmiles / Ggas;

	return mpg;
}
int main()
{
	string Dcity;
	float Tmiles, Ggas, Mtotal, Tcount, MPG;

	Mtotal = 0;
	Tcount = 0;

	cout << "Please enter destination city: ";
	cin >> Dcity;
	cout << "Please enter miles traveled to get there: ";
	cin >> Tmiles;
	cout << "Please enter gallons of gasoline used: ";
	cin >> Ggas;
	cout << endl;

	while (!cin.eof())
	{
		MPG = MilesperGallon(Tmiles, Ggas);
		
		cout << "Destination City: " << Dcity << endl;
		cout << "Miles per Gallon: " << MPG << endl;
		cout << endl;

		Mtotal = Mtotal + Tmiles;
		Tcount = Tcount + 1;

		cout << "Please enter destination city(or ctl-z to stop): ";
		cin >> Dcity;
		cout << "Please enter miles traveled to get there: ";
		cin >> Tmiles;
		cout << "Please enter gallons of gasoline used: ";
		cin >> Ggas;
		cout << endl;
	}

	cout << endl;
	cout << "Total miles travelled: " << Mtotal << endl;
	cout << "Total number of trips: " << Tcount << endl;

	return 0;
}