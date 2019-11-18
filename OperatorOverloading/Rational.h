#pragma once

#include <iostream>
#include <string>
using namespace std;

class Rational {
public:
	int numerator; // numerator of fraction
	int denominator; // denimonator of fraction
	Rational(); //default constructor
	Rational(int a, int b);
	Rational(const Rational& r); //copy constructor
	const Rational add(const Rational& r) const;
	const Rational operator-() const;
	Rational& operator++();
	operator double();
	const Rational& operator=(const Rational& r);
};
