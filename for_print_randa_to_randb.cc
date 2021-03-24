#include <iostream>

int main()
{
	int a, b;
	std::cout << "Please input two numbers:" << std::endl;
	std::cin >> a >> b;
	if(a > b)
	{
		int t = a;
		a = b;
		b = t;
	}
	for(; a <= b; ++a)
	{
		std::cout << a << std::endl;
	}

	return 0;
}
