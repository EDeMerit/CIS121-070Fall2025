#include <iostream>
using namespace std;
int main()
{
	int Nbook, Ship;
	float Bprice, total, Total;

	// Input Phase
	cout << "Please enter number of books to order: ";
		cin >> Nbook;
	cout << "Please enter price per book: $";
	cin >> Bprice;

	// Process Phase
	total = Nbook * Bprice;
	if (total <= 50)
		Ship = 25.00;
	else
		Ship = 0;
	Total = total + Ship;

	// Output Phase
	cout << "Order Total: $" << Total << endl;
	cout << "Shipping Charge: $" << Ship << endl;

	return 0;
}