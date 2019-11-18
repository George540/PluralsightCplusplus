#pragma once
template <class T>
class Accum {
private:
	T total;
public:
	Accum(T start) : total(start) {};
	T operator+=(T const& t) { return total += t;};
	T getTotal() const { return total; }
};

// Template specialization
/*
template <>
class Accum<Person {
private:
	int total;
public:
	Accum(T start) : total(start) {};
	int operator+=(Person const& t) { return total += t.getNumber(); };
	int getTotal() const { return total; }
};
*/
