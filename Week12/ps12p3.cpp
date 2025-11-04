#include <iostream>
#include <fstream>
using namespace std;
void LoadArrays(string Fname[], string Lname[], float Salary[])
{
	int i;
	fstream infile;
	infile.open("Empldata.txt");
	for (i = 0; i <= 9; i++)
	{
		infile >> Fname[i] >> Lname[i] >> Salary[i];
	}
	infile.close();
}
void DisplayArrays(string Fname[], string Lname[], float Salary[])
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		cout << Fname[i] << "  " << Lname[i] << "  " << Salary[i] << endl;
	}
	cout << endl;
}
void SearchArrays(string Fname[], string Lname[], float Salary[], string Slname)
{
	int i;
	bool Found_Flag = false;
	for (i = 0; i <= 9 && Found_Flag == false; i++)
	{
		if (Slname == Lname[i])
		{
			cout << "Name: " << Fname[i] << " " << Lname[i] << endl;
			cout << "Salary: " << Salary[i] << endl;
			cout << endl;
			Found_Flag = true;
		}
		
	}
	if (Found_Flag == false)
	{
		cout << Slname << " not found" << endl;
		cout << endl;
	}
}
int main()
{
	string Fname[10], Lname[10], Slname;
	float Salary[10];

	LoadArrays(Fname, Lname, Salary);
	DisplayArrays(Fname, Lname, Salary);
	cout << "Pleae enter last name(or ctrl-z to stop): ";
	cin >> Slname;
	cout << endl;
	while (!cin.eof())
	{
		SearchArrays(Fname, Lname, Salary, Slname);
		cout << "Pleae enter last name(or ctrl-z to stop): ";
		cin >> Slname;
		cout << endl;
	}
	return 0;
}