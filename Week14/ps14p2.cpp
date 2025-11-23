#include <iostream>
#include <iomanip>
#include "ps14p2.h"
using namespace std;
int main()
{
	string Make, Model, CPU, RAM, HardDrive, Type;
	ComputerAsset MyComputer;

	cout << "Please enter computer make(Lenovo, HP, or Apple): ";
	cin >> Make;
	cout << "Please enter computer model: ";
	cin >> Model;
	cout << "Please enter computer CPU(Intel or AMD): ";
	cin >> CPU;
	cout << "Please enter computer RAM(8GB, 16GB, or 32GB): ";
	cin >> RAM;
	cout << "Please enter computer hard drive(SSD or HD): ";
	cin >> HardDrive;
	cout << "Please enter computer type(Laptop, Notebook, Tablet, or Desktop): ";
	cin >> Type;
	cout << endl;
	while (!cin.eof())
	{
		MyComputer.Computer_Make(Make);
		MyComputer.Computer_Model(Model);
		MyComputer.Computer_CPU(CPU);
		MyComputer.Computer_RAM(RAM);
		MyComputer.Computer_HardDrive(HardDrive);
		MyComputer.Computer_Type(Type);

		cout << "Computer Make: " << MyComputer.Computer_Make() << endl;
		cout << "Computer Model: " << MyComputer.Computer_Model() << endl;
		cout << "Computer CPU: " << MyComputer.Computer_CPU() << endl;
		cout << "Computer RAM: " << MyComputer.Computer_RAM() << endl;
		cout << "Computer Hard Drive: " << MyComputer.Computer_HardDrive() << endl;
		cout << "Computer Type: " << MyComputer.Computer_Type() << endl;
		cout << setprecision(2) << fixed;
		cout << "Computer Cost: $" << MyComputer.Computer_Cost() << endl;
		cout << endl;

		cout << "Please enter computer make(Lenovo, HP, or Apple)(or ctrl-z to stop): ";
		cin >> Make;
		cout << "Please enter computer model: ";
		cin >> Model;
		cout << "Please enter computer CPU(Intel or AMD): ";
		cin >> CPU;
		cout << "Please enter computer RAM(8GB, 16GB, 0r 32GB): ";
		cin >> RAM;
		cout << "Please enter computer hard drive(SSD or HD): ";
		cin >> HardDrive;
		cout << "Please enter computer type(Laptop, Notebook, Tablet, or Desktop): ";
		cin >> Type;
		cout << endl;
	}
	return 0;
}