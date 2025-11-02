#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
float ComputeBiWeekPay(float Salary)
{
	float Biwsal;
	Biwsal = Salary / 26;
	return Biwsal;
}
int main()
{
	string Lname;
	float Salary, Biwsal, Tsalary = 0, Avesal;
	int Enum = 0;
	ifstream infile;
	infile.open("Empl.txt");
	while (!infile.eof())
	{
		infile >> Lname >> Salary;
		Biwsal = ComputeBiWeekPay(Salary);
		cout << "Last Name: " << Lname << endl;
		cout << setprecision(2) << fixed;
		cout << "Salary: $" << Salary << endl;
		cout << "Bi-weekly Salary: $" << Biwsal << endl;
		cout << endl;
		Tsalary = Tsalary + Salary;
		Enum = Enum + 1;
	}
	infile.close();
	Avesal = Tsalary / Enum;
	cout << "Total Annual Salary: $" << Tsalary << endl;
	cout << setprecision(0) << fixed;
	cout << "Total number of employees: " << Enum << endl;
	cout << setprecision(2) << fixed;
	cout << "Average Annual Salary: $" << Avesal << endl;
	system("pause");
	return 0;
}