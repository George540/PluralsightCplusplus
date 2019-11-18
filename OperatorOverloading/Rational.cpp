#include <iostream>
#include <string>
#include "Rational.h"
using namespace std;

Rational::Rational() : numerator(0), denominator(1) {}

Rational::Rational(int a, int b) : numerator(a), denominator(b) {}

Rational::Rational(const Rational& r) : numerator(r.numerator), denominator(r.denominator) {}

const Rational Rational::add(const Rational& r) const {
	int n = numerator * r.denominator + denominator * r.numerator;
	int d = denominator * r.denominator;
	return Rational(n, d);
}const Rational Rational::operator-() const {	Rational minus;	minus.numerator = -(this->numerator);	minus.denominator = this->denominator;	return minus;}Rational& Rational::operator++() {	numerator = numerator + denominator;	return *this;}Rational::operator double() {
	return numerator / (double)denominator;
}

const Rational& Rational::operator=(const Rational& r) {
	numerator = r.numerator;
	denominator = r.denominator;
	return *this;
}