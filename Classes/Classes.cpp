// Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Tweeter.h"
#include "Person.h"
#include "status.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;
#include <cstdlib>
#include <random>
#include <time.h>

int random(int min, int max) //range : [min, max)
{
	static bool first = true;
	if (first)
	{
		srand(time(NULL)); //seeding for the first time only!
		first = false;
	}
	return min + rand() % ((max + 1) - min);
}

int main()
{

	int choice = random(0, 6);
	cout << choice;
	/*
	Person p1("George", "Mavroeidis", 21);
	{
		Tweeter t1("Someone", "Else", 456, "@whoever");
		std::string name2 = t1.getName();
	}
	cout << "after innermost block" << endl;
	cout << "p1: " << p1.getName() << " " << p1.getNumber() << endl;
	p1.setNumber(124);
	cout << "p1: " << p1.getName() << " " << p1.getNumber() << endl;

	//int i = p1.arbitrarynumber;

	Status s = Pending;
	s = Approved;

	FileError fe = FileError::notfound;
	fe = FileError::ok;
	NetworkError ne = NetworkError::disconnected;
	ne = NetworkError::ok;
	*/

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
