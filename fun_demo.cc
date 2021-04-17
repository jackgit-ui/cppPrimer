#include <iostream>
#include <vector>
#include <string>
using namespace std;
void print(int, int)
{
	cout << "Hello World!" << endl;
}
string getStr()
{
	string str;
	cin >> str;
	return str;
}
int fact(int n)
{
	if(n == 0)
		return 1;
	else
		return n * fact(n - 1);
}
void useFact();
void useFact()
{
	int n;
	cout << "Please enter a number: ";
	cin >> n;
	cout << "The fact of " << n << " is " << fact(n) << endl;
}
int abs(int n)
{
	if(n < 0)
		return -n;
	else
		return n;
}
size_t count_calls()
{
	static size_t ctr = 0;
	return ++ctr;
}
void swap(int &a, int &b)
{
	int t;
	t = a;
	a = b;
	b = t;

}
void reset(int &i)
{
	i = 0;
}
int main()
{
	//cout << getStr() << endl;
	//cout << fact(5) << endl;
	//useFact();
	//int n;
	//cin >> n;
	//cout << abs(n) << endl;
	//for(size_t i = 0; i != 10; ++i)
	//	cout << count_calls() << endl;
	//int a = 3, b = 6;
	//cout << a << " " << b << endl;
	//swap(a, b);
	//cout << a << " " << b << endl;
	int n = 99;
	cout << n << endl;
	reset(n);
	cout << n << endl;



	return 0;
}
