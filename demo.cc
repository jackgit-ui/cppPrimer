#include <iostream>
//#include "Sales_item.h"
extern const int a;
int main()
{
	//std::cerr << "Oops!!!" << std::endl;
	//std::clog << "Hello C++" << std::endl;
	//unsigned u = 10;
	//int i = -42;
	//std::cout << u + i << std::endl;
	//std::cout << 3.14e3 << std::endl;
	//std::cout << "Hello World"
	//	"My friend" << std::endl;
	//std::cout << 1024f << std::endl;
	//std::string greeter("Hello My Friend");
	//std::cout << greeter << std::endl;
	//int a = 0;
	//int b = { 1 };
	//int c{2};
	//int d(3);
	//std::cout << a << "," << b << "," << c << "," << d << std::endl;
	//int e{3.14};
	//int f = {3.14};
	//std::cin >> int h;
	//extern int i;
	//int _ = 9;
	//std::cout << _ << std::endl;
	//double Double = 3.14;
	//int val = 3.14;
	//std::cout << val << std::endl;
	//int *p = nullptr;
	//int *q = NULL;
	//int i = 4;
	//int *p1 = &i;
	//*p1 = *p1 * *p1;
	//printf("%d\n", *p1);
	//int i = 0;
	//double *p = &i;
	//int *p;
	//if(p)
	//	std::cout << "ptr is not null" << std::endl;
	int ival = 1024;
	int *pi = &ival;
	int **ppi = &pi;
	std::cout << "The value of ival\n"
		  << "direct value: " << ival << std::endl
		  << "indirect value: " << *pi << std::endl
		  << "doubly indirect value: " << **ppi << std::endl;
	std::cout << a << std::endl;

	return 0;
}
