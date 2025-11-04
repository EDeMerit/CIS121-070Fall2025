#include <iostream>
#include <fstream>
using namespace std;
void LoadArrays(string fname[], string lname[], float GPA[])
{
	int i;
	ifstream infile;
	infile.open("ps12p1.txt");
	for (i = 0; i <= 9; i++)
	{
		infile >> fname[i] >> lname[i] >> GPA[i];
	}
	infile.close();
}
void DisplayArrays(string fname[], string lname[], float GPA[])
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		cout << fname[i] << "  " << lname[i] << "  " << GPA[i] << endl;
	}
}
void DisplayReverseArrays(string fname[], string lname[], float GPA[])
{
	int i;
	for (i = 9; i >= 0; i--)
	{
		cout << fname[i] << "  " << lname[i] << "  " << GPA[i] << endl;
	}
}
int main()
{
	string fname[10], lname[10];
	float GPA[10];

	LoadArrays(fname, lname, GPA);
	cout << "Loaded Array:" << endl;
	DisplayArrays(fname, lname, GPA);
	cout << "Loaded Array in Reverse:" << endl;
	DisplayReverseArrays(fname, lname, GPA);

	return 0;
}