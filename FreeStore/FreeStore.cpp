// FreeStore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Resource.h"
using std::string;

int main()
{
	{
		Resource localResource("local");
		string localString = localResource.getName();
	}
	Resource* pResource = new Resource("created with new");
	string newString = pResource->getName();
	int j = 3;
	delete pResource;

	//string string3 = pResource->getName();

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
