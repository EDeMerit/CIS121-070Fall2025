#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void ComputeSave(float MSRP, float Sprice, float& Savings, float& Stax)
{
	Savings = MSRP - Sprice;
	Stax = Sprice * 0.07;
}
int main()
{
	string Make, Model;
	float MSRP, Sprice, Savings, Stax, Tsavings = 0;
	ifstream infile;
	infile.open("Auto.txt");
	while (!infile.eof())
	{
		infile >> Make >> Model >> MSRP >> Sprice;
		ComputeSave(MSRP, Sprice, Savings, Stax);
		cout << "Make: " << Make << endl;
		cout << "Model: " << Model << endl;
		cout << setprecision(2) << fixed;
		cout << "MSRP: $" << MSRP << endl;
		cout << "Sales Price: $" << Sprice << endl;
		cout << "Savings: $ " << Savings << endl;
		cout << "Sales Tax: $" << Stax << endl;
		cout << endl;
		Tsavings = Tsavings + Savings;
	}
	infile.close();
	cout << "Total Savings: $" << Tsavings << endl;
	system("pause");
	return 0;
}