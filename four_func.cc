#include <iostream>
#include <vector>
using namespace std;
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int divw(int a, int b)
{
	return a / b;
}
int main()
{
	vector<int(*)(int, int)> four = {add, sub, mul, divw};
	for(auto f : four)
		cout << f(6, 2) << endl;

	return 0;
}
