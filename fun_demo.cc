#include <iostream>
#include <vector>
#include <string>
#include <cassert>
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
//&
void reset(int &i)
{
	i = 0;
}
//*
void reset(int *i)
{
	*i = 0;
}
bool isHaveUpper(string s)
{
	for(auto ch : s)
	{
		if(ch >= 'A' && ch <= 'Z')
			return true;
	}
	return false;
}
void toLower(string &str)
{
	for(auto &ch : str)
		ch = tolower(ch);
}
void ch(char ch)
{
	cout << ch << endl;
}
void in(int val)
{
	cout << val << endl;
}
void cal(double d)
{
	cout << d << endl;
}
void swapPointer(int **p, int **q)
{
	int *t;
	t = *p;
	*p = *q;
	*q = t;
}
void print(const int ia[10])
{
	for(size_t i = 0; i != 10; ++i)
		cout << ia[i] << endl;
}
void print(int start, const int ia[])
{
}
int &get(int *arry, int index)
{
	return arry[index];
}
int fact2(int val)
{
	if(val != 0)
		return fact(val - 1) * val;
	return 1;
}
string a(int a)
{
	return "Hello";
}
int a()
{
	return 9;
}
int sum(int a = 9, int b = 9)
{
	cout << __func__ << endl;
	return a + b;
}
string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
	return (ctr > 1) ? word + ending : word;
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
	//int n = 99;
	//cout << n << endl;
	//reset(n);
	//cout << n << endl;
	//string str;
	//cin >> str;
	//cout << isHaveUpper("Hello") << endl;
	//toLower(str);
	//cout << str << endl;
	//ch('a');
	//in(9);
	//cal(66);
	//int m = 0, n = 0;
	//int *p;
        //int *q;
	//p = &m;
	//q = &n;
	//*p = 3;
	//*q = 6;
	//cout << *p << " " << *q << endl;
	//swapPointer(&p, &q);
	//cout << *p << " " << *q << endl;
	//int ia[10] = {1, 2, 3, 4, 5, 6};
	//print(ia);
	//cout << get(ia, 5) << endl;
	//get(ia, 5) = 90;
	//cout << get(ia, 5) << endl;
	//cout << fact2(5) << endl;
	//cout << sum() << endl;
	cout << sum(8, 8) << endl;
	//cout << make_plural(1, "success") << endl;
	//cout << make_plural(3, "success") << endl;
	//assert(0 > 1);
	cout << __func__ << endl;
	cout << __FILE__ << endl;
	cout << __LINE__ << endl;
	cout << __TIME__ << endl;
	cout << __DATE__ << endl;
	



	return 0;
}
