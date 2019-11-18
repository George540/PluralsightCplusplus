// OperatorOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Rational.h"
using namespace std;

ostream& operator<<(ostream& output, const Rational& r);

const Rational operator+(const Rational& a, const Rational& b) {
	Rational sum;
	sum.numerator = a.numerator * b.denominator + a.denominator * b.numerator;
	sum.denominator = a.denominator * b.denominator;
	return sum;
}

int main()
{
	Rational a = Rational(5, 6);
	Rational b(2, 3);
	Rational c(1, 2);
	Rational d(2, 1);
	d = a + b;
	cout << a << endl;
	cout << b << endl;
	cout << d << endl;
}

ostream& operator<<(ostream& output, const Rational& r) {
	output << r.numerator << " / " << r.denominator;
	return output;
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
