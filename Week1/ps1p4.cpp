#include <iostream>
using namespace std;
int main()
{
	int n1, n2, n3, Answer;
	// Input Phase
		cout << "Please enter an integer - ";
			cin >> n1;
		cout << "Please enter a second integer - ";
			cin >> n2;
		cout << "Please enter a third integer - ";
			cin >> n3;
	// Process Phase
		Answer = (n1 + n2) * n3;
	// Output Phase
		cout << "(" << n1 << " + " << n2 << ") * " << n3 << " = " << Answer << endl;

	return 0;
}