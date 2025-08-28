#include <iostream>
using namespace std;
int main()
{
	float Lgth, Wdth, Area, Circ;
	// Input Phase
	cout << "Please enter rectangle length - ";
	cin >> Lgth;
	cout << "Please enter rectangle width - ";
	cin >> Wdth;
	// Process Phase
	Area = Lgth * Wdth;
	Circ = ((2 * Lgth) * (2 * Wdth));
	// Output Phase
	cout << "Rectangle area = " << Area << endl;
	cout << "Rectangle circumference = " << Circ << endl;

	return 0;
}