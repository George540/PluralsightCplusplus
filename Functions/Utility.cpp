#include <iostream>
using std::cout;
using std::endl;

#include "Utility.h"

bool isPrime(int x) {
	bool prime = true;
	for (int i = 2; i <= x / i; i = i + 1) {
		int factor = x / i;
		if (factor * i == x) {
			cout << "factor found: " << factor << endl;
			prime = false;
			break;
		}
	}
	return prime;
}

bool is2MorePrime(int& x) {
	return isPrime(x + 2);
}