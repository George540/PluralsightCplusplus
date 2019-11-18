// PointerAndReferences.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "C:\Users\G\source\repos\Pluralsight_tut\Classes\Person.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	/*
	int a = 3;
	cout << "a is " << a << endl;
	int& rA = a;
	rA = 5;
	cout << "a is " << a << endl;

	Person George("George", "Mavroeidis", 540);
	Person& rGeorge = George;
	rGeorge.setNumber(777);
	cout << "rGeorge: " << rGeorge.getName() << " " << rGeorge.getNumber() << endl;

	int* pA = &a;
	*pA = 4;
	cout << "a is " << a << endl;
	int b = 100;
	pA = &b;
	(*pA)++;
	cout << "a is " << a << ", *pA is " << *pA << endl;

	Person* pGeorge = &George;
	(*pGeorge).setNumber(235);
	pGeorge->setNumber(236);
	cout << "George: " << George.getName() << " " << George.getNumber() << endl;
	cout << "pGeorge: " << pGeorge->getName() << " " << pGeorge->getNumber() << endl;

	*/


	int* p1, * p2;

	p1 = new int;

	*p1 = 42;

	cout << "p1 " << p1 << endl; // prints address
	cout << "*p1 " << *p1 << endl; // prints value in address

	cout << endl;

	p2 = p1; // p2 points where p1 points, same address

	cout << "p2 " << p2 << endl; // prints address
	cout << "*p2 " << *p2 << endl; // prints value in address

	*p1 = 99;

	cout << "p1 " << p1 << endl; // prints address
	cout << "*p1 " << *p1 << endl; // prints value in address
	cout << "p2 " << p2 << endl; // prints address
	cout << "*p2 " << *p2 << endl; // prints value in address

	p2 = new int(68);

	cout << "P2 CHANGE: " << endl;
	cout << "p2 " << p2 << endl; // prints address
	cout << "*p2 " << *p2 << endl; // prints value in address


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
