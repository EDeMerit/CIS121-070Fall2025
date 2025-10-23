#include <iostream>
#include <iomanip>
using namespace std;
float BattingAverage(float Nhits, float Nbats)
{
	float Ba;
	Ba = Nhits / Nbats;
	return Ba;
}
int main()
{
	string Lname;
	int Nhits, Nbats, Nplayers = 0;
	float Bave;
	cout << "Please enter last name: ";
	cin >> Lname;
	cout << "Please enter number of hits: ";
	cin >> Nhits;
	cout << "Please enter number of at bats: ";
	cin >> Nbats;
	cout << endl;
	while (!cin.eof())
	{
		cout << setprecision(3) << fixed;
		Bave = BattingAverage(Nhits, Nbats);
		cout << "Last Name: " << Lname << endl;
		cout << "Batting Average: " << Bave << endl;
		cout << endl;
		Nplayers = Nplayers + 1;
		cout << "Please enter last name(or ctrl-z to stop): ";
		cin >> Lname;
		cout << "Please enter number of hits: ";
		cin >> Nhits;
		cout << "Please enter number of at bats: ";
		cin >> Nbats;
		cout << endl;
	}
	cout << endl;
	cout << "Number of players entered: " << Nplayers << endl;
	return 0;
}