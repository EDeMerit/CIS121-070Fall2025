#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
float ComputeExPrice(int Qty, float CperI)
{
	float Exp;
	Exp = Qty * CperI;
	return Exp;
}
int main()
{
	string Item;
	int Qty = 0;
	float CperI = 0, Exprice, Texprice = 0, Tax, Treceipt;
	ifstream infile;
	infile.open("Grocery.txt");
	while (!infile.eof())
	{
		infile >> Item >> Qty >> CperI;
		Exprice = ComputeExPrice(Qty, CperI);
		cout << "Item: " << Item << endl;
		cout << "Quantity:" << Qty << endl;
		cout << setprecision(2) << fixed;
		cout << "Cost per Item: $" << CperI << endl;
		cout << "Extended Price: $" << Exprice << endl;
		cout << setprecision(0) << fixed;
		cout << endl;
		Texprice = Texprice + Exprice;
	}
	infile.close();
	Tax = Texprice * 0.07;
	Treceipt = Texprice + Tax;
	cout << setprecision(2) << fixed;
	cout << "Total Extended Price: $" << Texprice << endl;
	cout << "Total Tax: $" << Tax << endl;
	cout << "Total Receipt: $" << Treceipt << endl;
	system("pause");
	return 0;
}