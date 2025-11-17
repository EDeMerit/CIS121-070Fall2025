#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
struct StudentInfo
{
	string Fname;
	string Lname;
	char Dcode;
	int Tcredits;
	float Tbal;
};
float ComputeTuition(char Dcode, int Tcredits)
{
	float Tcharge = 500.00;
	float T = 0;
	if (Dcode == 'I')
		Tcharge = 250.00;
	else
		Tcharge = 500.00;
	T = Tcredits * Tcharge;
	return T;
}
void DisplayStudentInfo(vector<StudentInfo>Sinfo)
{
	for (StudentInfo vectorentry : Sinfo)
	{
		cout << "First Name: " << vectorentry.Fname << endl;
		cout << "Last Name: " << vectorentry.Lname << endl;
		cout << "District Code: " << vectorentry.Dcode << endl;
		cout << "Enrolled Credit Hours: " << vectorentry.Tcredits << endl;
		cout << setprecision(2) << fixed;
		cout << "Tuition Owed: " << vectorentry.Tbal << endl;
		cout << setprecision(0) << fixed;
		cout << endl;
	}
}
int main()
{
	vector<StudentInfo> Sinfo;
	StudentInfo ThisStudent;
	cout << "Please enter first name(or ctrl-z to stop): ";
	cin >> ThisStudent.Fname;
	cout << "Please enter last name: ";
	cin >> ThisStudent.Lname;
	cout << "Please enter district code(I or O): ";
	cin >> ThisStudent.Dcode;
	cout << "Please enter enrolled credit hours: ";
	cin >> ThisStudent.Tcredits;
	cout << endl;
	while (!cin.eof())
	{
		ThisStudent.Tbal = ComputeTuition(ThisStudent.Dcode, ThisStudent.Tcredits);
		Sinfo.push_back(ThisStudent);
		cout << "Please enter first name(or ctrl-z to stop): ";
		cin >> ThisStudent.Fname;
		cout << "Please enter last name: ";
		cin >> ThisStudent.Lname;
		cout << "Please enter district code(I or O): ";
		cin >> ThisStudent.Dcode;
		cout << "Please enter enrolled credit hours: ";
		cin >> ThisStudent.Tcredits;
		cout << endl;
	}
	DisplayStudentInfo(Sinfo);
	cout << "Number of Students: " << Sinfo.size() << endl;
	return 0;
}