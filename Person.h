#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Person {
public:
        Person() = default;
        Person(const string &s, const string &t) : name(s), address(t) {};
        string getName()const{ return name; };
        string getAddress()const{ return address; };

private:
        string name;
        string address;
};
istream &read(istream &is, Person &p);
ostream &print(ostream &os, const Person &p);
#endif
