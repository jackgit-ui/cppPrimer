#include <iostream>
int main()
{
	//int i = 9, &r1 = i;
	//double d = 4.135, &r2 = d;
	//r2 = 3.1415926;
	//std::cout << r2 << std::endl;
	//r2 = r1;
	//std::cout << r2 << std::endl;
	//i = r2;
	//std::cout << i << std::endl;
	//r1 = d;
	//std::cout << r1 << std::endl;
	//d = i;
	//std::cout << d << std::endl;
	int i, &ri = i;
	i = 5, ri = 10;
	int j = 90, &rj = j;
	std::cout << j << " " << rj << std::endl;
	rj = i;
	//int *p = &rj;
	std::cout << j << " " << rj << std::endl;
	//std::cout << i << " " << ri << std::endl;

	return 0;
}
