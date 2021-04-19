#include <iostream>
#include <string>
#include <vector>
using namespace std;
void print_vector(vector<string> str, decltype(str.begin()) it)
{
	if(it != str.end())
	{
		cout << *it << endl;
		print_vector(str, ++it);
	}
}
void print_vector2(vector<string> str, size_t len)
{
	if(len - 1 > 0)
		print_vector2(str, len - 1);
	cout << str[len - 1] << endl;
#ifndef NDEBUG
	cout << __DATE__ << endl;
#endif
}
int main()
{
	vector<string> str = {"Hello", "World"};
	print_vector2(str, str.size());


	return 0;
}
