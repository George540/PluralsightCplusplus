#pragma once
#include <string>
// no namespaces in header
class Person {
	private:
		std::string firstname;
		std::string lastname;
		int arbitrarynumber;

		friend bool operator<(int i, Person const& p);

	public:
		Person(std::string first, std::string last, int arbitrary); //parametarized constructor
		Person(); //default constructor
		~Person(); // default destructor
		std::string getName() const; //getter method
		int getNumber() const { return arbitrarynumber; }
		void setNumber(int number) { arbitrarynumber = number; }
		bool operator<(Person const& p) const;
		bool operator<(int i) const;
};

bool operator<(int i, Person const& p);
