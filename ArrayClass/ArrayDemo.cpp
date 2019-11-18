// ArrayClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>
using namespace std;

class IndexOutofBoundsException{};

class IntArray {
private:
	int* m_ptr;
	int m_size;

	bool isValidIndex(int i) const { // array internal state unchanged
		return (i >= 0) && (i < m_size);
	}

public:
	// Default Constructor
	IntArray() = default;

	// Parametized Constructor
	explicit IntArray(int size) {
		if (size > 0) {
			m_ptr = new int[size] {};
			m_size = size;
		}
	}

	// Copy Constructor
	IntArray(const IntArray& arr) {
		if (!arr.isEmpty())
			m_size = arr.m_size;

		m_ptr = new int[m_size] {};

		for (int i = 0; i < m_size; i++)
			m_ptr[i] = arr.m_ptr[i];
	}

	// Destructor
	~IntArray() {
		delete[] m_ptr;
	}

	// [] overload operator for getting element in index
	int& operator[](int i) {
		if (!isValidIndex(i))
			throw IndexOutofBoundsException{};
		return m_ptr[i];
	}

	int operator[](int i) const { // read-only access
		if (!isValidIndex(i))
			throw IndexOutofBoundsException{};
		return m_ptr[i];
	}

	// Print array elements
	friend ostream& operator<<(ostream& os, const IntArray& a) {
		os << "[ ";
		for (int i = 0; i < a.size(); i++)
			os << a[i] << ' ';
		os << "]";

		return os;
	} // cout << a;

	// = overloading for proper object assignment (deep copy)
	IntArray& operator=(IntArray& arr) {
		if (&arr != this) {
			swap(*this, arr);
		}
		return *this;
	}

	friend void swap(IntArray& a, IntArray& b) noexcept { // for non-throwing swap
		swap(a.m_ptr, b.m_ptr);
		swap(a.m_size, b.m_size);
	}

	// Move Schematics. Transfer ownership of data from one object to another
	IntArray(IntArray&& arr) { // r-value: arr is temporary object
		m_ptr = arr.m_ptr;
		m_size = arr.m_size;

		arr.m_ptr = nullptr;
		arr.m_size = 0;
	}

	int size() const {
		return m_size;
	}

	bool isEmpty() const {
		return m_size == 0;
	}
};


int main()
{
	cout << "Creating an empty array." << endl;
	IntArray a{};
	cout << "Array size is: " << a.size() << endl;
	assert(a.isEmpty());

	cout << endl;

	try {
		cout << "Creating an array with 10 elements." << endl;
		IntArray b{ 10 };
		cout << "Array size is: " << b.size() << endl;
		assert(!b.isEmpty());
		cout << "Setting b[0] = 10" << endl;
		b[0] = 10;

		cout << "Elements in array b: ";
		for (int i = 0; i < b.size(); i++) {
			cout << b[i] << " ";
		}

		cout << endl;

		cout << "Enter array index: ";
		int index{};
		cin >> index;

		cout << "- The element at index " << index << " is " << b[index] << endl;

		cout << "Array elements: " << b << endl;

		IntArray c{ b };
		cout << "Array elements: " << c << endl;

		b[1] = 66;
		cout << "- The element at index 1 is " << b[1] << endl;
		cout << "Array elements: " << b << endl;
		cout << "Array elements: " << c << endl;


	} catch (const IndexOutofBoundsException& e) {
		cout << "ERROR: invalid index." << endl;
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
