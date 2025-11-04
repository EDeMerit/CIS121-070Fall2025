#include <iostream>
#include <fstream>
using namespace std;
void LoadArrays(string City[], int Pop[])
{
	int i;
	ifstream infile;
	infile.open("ps12p2.txt");
	for (i = 0; i <= 7; i++)
	{
		infile >> City[i] >> Pop[i];
	}
	infile.close();
}
void DisplayArrays(string City[], int Pop[])
{
	int i;
	for (i = 0; i <= 7; i++)
	{
		cout << City[i] << "  " << Pop[i] << endl;
	}
}
void DisplayCityData(string City[], int Pop[], string Scity)
{
	int i;
	bool Found_Flag = false;
	for (i = 0; i <= 7 && Found_Flag == false; i++)
	{
		if (Scity == City[i])
		{
			cout << City[i] << " has a population of " << Pop[i] << endl;
			Found_Flag = true;
		}
	}
	if (Found_Flag == false)
	{
		cout << Scity << " not found" << endl;
	}
}
int main()
{
	string City[8], Scity;
	int Pop[8];

	LoadArrays(City, Pop);
	DisplayArrays(City, Pop);
	cout << endl;
	cout << "Enter city name, ctl+z to stop: ";
	cin >> Scity;
	cout << endl;
	while (!cin.eof())
	{
		DisplayCityData(City, Pop, Scity);
		cout << endl;
		cout << "Enter city name, ctl+z to stop: ";
		cin >> Scity;
		cout << endl;
	}
	cout << "Goodbye. Have a nice day." << endl;
	return 0;
}