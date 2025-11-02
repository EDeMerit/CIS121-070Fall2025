#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void ComputeTuitandFees(char Scode, int Credits, float& Chcost, float& Towed, float& Cfees)
{
	if (Scode == 'I')
		Chcost = 250.00;
	else
		Chcost = 500.00;
	Towed = Credits * Chcost;
	Cfees = Towed * 0.01;
}
int main()
{
	string Lname;
	char Scode;
	float Credits, Chcost, Towed, Cfees, Ttuit = 0, Tave;
	int Snum = 0;
	ifstream infile;
	infile.open("Student.txt");
	while (!infile.eof())
	{
		infile >> Lname >> Scode >> Credits;
		ComputeTuitandFees(Scode, Credits, Chcost, Towed, Cfees);
		cout << "Last Name: " << Lname << endl;
		cout << "Student Code: " << Scode << endl;
		cout << setprecision(2) << fixed;
		cout << "Cost per Credit Hour: $" << Chcost << endl;
		cout << setprecision(0) << fixed;
		cout << "Credits Taken: " << Credits << endl;
		cout << setprecision(2) << fixed;
		cout << "Tuition: $" << Towed << endl;
		cout << "Course Fees: $" << Cfees << endl;
		cout << endl;
		Ttuit = Ttuit + Towed;
		Snum = Snum + 1;
	}
	infile.close();
	Tave = Ttuit / Snum;
	cout << "Total Tuition Owed: $" << Ttuit << endl;
	cout << setprecision(0) << fixed;
	cout << "Number of Students: " << Snum << endl;
	cout << setprecision(2) << fixed;
	cout << "Average Tuition Cost: $" << Tave << endl;
	system("pause");
	return 0;
}