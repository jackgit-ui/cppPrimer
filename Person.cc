#include "Person.h"
istream &read(istream &is, Person &p)
{
	is >> p.name >> p.address;
	return is;
}
ostream &print(ostream &os, const Person &p)
{
	os << p.getName() << " " << p.getAddress();
	return os;
}
