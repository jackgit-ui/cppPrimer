#include <iostream>
#include <initializer_list>
using namespace std;

int sum(initializer_list<int> il)
{
	int sum = 0;
	for(auto n : il)
		sum += n;
	return sum;
}

int main()
{
	cout << sum({1, 2, 6}) << endl;

	return 0;
}
