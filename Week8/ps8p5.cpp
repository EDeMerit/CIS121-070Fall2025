#include <iostream>
#include <iomanip>
using namespace std;
float LabFee(string Dcode, int Ccode)
{
	float LF;
	
	if ((Dcode == "CIS") && (Ccode == 101))
		LF = 50.00;
	else if ((Dcode == "CIS") && (Ccode == 121))
		LF = 100.00;
	else if ((Dcode == "MAT") && (Ccode == 111))
		LF = 25.00;
	else if ((Dcode == "MAT") && (Ccode == 112))
		LF = 35.00;
	else if ((Dcode == "ENG") && (Ccode == 100))
		LF = 50.00;
	else
		LF = 50.00;

	return LF;
}
int main()
{
	string Dcode;
	int Ccode;
	float Ftotal, Lfcount, Lfee, Lfave;

	Ftotal = 0;
	Lfcount = 0;

	cout << "Please enter department code: ";
	cin >> Dcode;
	cout << "Please enter course code: ";
	cin >> Ccode;
	cout << endl;

	while (!cin.eof())
	{
		Lfee = LabFee(Dcode,Ccode);

		cout << "Department Code: " << Dcode << endl;
		cout << "Course Code: " << Ccode << endl;
		cout << setprecision(2) << fixed;
		cout << "Lab Fee: $" << Lfee << endl;
		cout << endl;

		Ftotal = Ftotal + Lfee;
		Lfcount = Lfcount + 1;

		cout << "Please enter department code(or ctl-z to stop): ";
		cin >> Dcode;
		cout << "Please enter course code: ";
		cin >> Ccode;
		cout << endl;
	}

	Lfave = Ftotal / Lfcount;
	cout << "Total of all lab fees: $" << Ftotal << endl;
	cout << "Average Lab Fee: $" << Lfave << endl;

	return 0;
}