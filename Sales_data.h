#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>
#include <string>
using namespace std;
class Sales_data {
friend istream &read(istream &is, Sales_data &item);
friend ostream &print(ostream &os, const Sales_data &item);
friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
public:
	Sales_data() = default;
	Sales_data(const std::string &s): bookNo(s) {};
	Sales_data(const std::string &s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p * n) { };
	Sales_data(std::istream &is)
	{
		double price = 0;
        	is >> bookNo >> units_sold >> price;
        	revenue = price * units_sold;
	}
	std::string isbn() const { return bookNo; };

	Sales_data& combine(const Sales_data&);
private:
	double avg_price() const
	{
		return units_sold ? revenue / units_sold : 0;
	}

	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
istream &read(istream &is, Sales_data &item);
ostream &print(ostream &os, const Sales_data &item);
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

#endif
