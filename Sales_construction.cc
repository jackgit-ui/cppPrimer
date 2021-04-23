#include "Sales_data.h"
int main()
{
	Sales_data zero;
	print(cout, zero);
	cout << endl;
	Sales_data one("chen");
	print(cout, one);
	cout << endl;
	Sales_data two("han", 2, 3);
	print(cout, two);
	cout << endl;
	Sales_data three(cin);
	print(cout, three);
	cout << endl;

	return 0;
}
