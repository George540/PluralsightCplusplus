// ForLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cin;
using std::endl;
using std::cout;

int main()
{
	// FOR LOOP

	int x = 0;
	cout << "Enter a number" << endl;
	cin >> x;

	bool prime = true;

	for (int i = 2; i <= x / i; i++) {
		int factor = x / i;
		if (factor * i == x) {
			cout << "factor found: " << i << " * " << factor << endl;
			prime = false;
			break;
		}
	}

	cout << x << " is ";
	if (prime)
		cout << "prime" << endl;
	else
		cout << "not prime" << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again