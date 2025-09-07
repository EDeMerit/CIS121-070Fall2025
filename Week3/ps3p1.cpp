#include <iostream>
using namespace std;
int main()
{
	float Score1, Score2, Pts1, Pts2, Total;
	
	// Input Phase
	cout << "Enter first exam score:";
	cin >> Score1;
	cout << "Enter second exam score:";
	cin	>> Score2;
	
	// Process Phase
	Pts1 = Score1 * .6;
	Pts2 = Score2 * .4;
	Total = Pts1 + Pts2;

	// Output Phase
	cout << "Total Score: " << Total << endl;

	return 0;
}