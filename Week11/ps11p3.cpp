#include <iostream>
#include <fstream>
using namespace std;
float ComputeMPG(float Gused, float Miles)
{
	float mpg;
	mpg = Miles / Gused;
	return mpg;
}
int main()
{
	float Gused, Miles, Mpg, Tmiles = 0, Tgas = 0;
	ifstream infile;
	infile.open("Trips.txt");
	while (!infile.eof())
	{
		infile >> Gused >> Miles;
		Mpg = ComputeMPG(Gused, Miles);
		cout << "Gallons of gas used: " << Gused << endl;
		cout << "Miles travelled: " << Miles << endl;
		cout << "Miles per Gallon: " << Mpg << endl;
		cout << endl;
		Tmiles = Tmiles + Miles;
		Tgas = Tgas + Gused;
	}
	infile.close();
	cout << "Total gallons of gas used: " << Tgas << endl;
	cout << "Total miles travelled: " << Tmiles << endl;
	system("pause");
	return 0;
}