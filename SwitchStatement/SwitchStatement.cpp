// SwitchStatement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cin;
using std::endl;
using std::cout;

int main()
{
	int x = 0;
	cout << "Enter a number, 0 or negative to quit" << endl;
	cin >> x;

	while (x > 0) {
		switch (x) {
		case 1:
			cout << "you entered 1" << endl;
			break;
		case 2:
		case 3:
			cout << "you entered 2 or 3" << endl;
			break;
		case 4:
			cout << "you entered 4" << endl;
			break;
		case 5:
			cout << "you entered 5" << endl;
			break;
		default:
			cout << "you entered other than 1-5" << endl;
		}
		cout << "Enter a number, 0 or negative to quit" << endl;
		cin >> x;
	}
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
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
