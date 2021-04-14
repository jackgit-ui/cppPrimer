#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
//#include "Sales_item.h"
//extern const int a;
string sa[10];
int ia[10];
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
	//int ival = 1024;
	//int *pi = &ival;
	//int **ppi = &pi;
	//std::cout << "The value of ival\n"
	//	  << "direct value: " << ival << std::endl
	//	  << "indirect value: " << *pi << std::endl
	//	  << "doubly indirect value: " << **ppi << std::endl;
	//std::cout << a << std::endl;
	//const int &ri = 900;
	//std::cout << ri << std::endl;
	//double dval = 3.14;
	//int ival = 9;
	//const int &ri = dval;
	//ri = 90;
	//std::cout << ri << std::endl;
	//const int i = -1, &r = 0;
	//int *const p1 = nullptr;
	//int *p2 = p1;
	//const int *p3;
	//int n = 900;
	//p3 = &n;
	//int i = 9;
	//const int i2;
	//i2 = i;
	//const int &r = i;
	/* ......*/
	//int i, *const cp = nullptr;
	//int *p1, *const p2 = nullptr;
	//const int ic = 9, &r = ic;
	//const int *const p3 = nullptr;
	//const int *p;
	//i = ic;
	//p1 = p3;
	//p1 = &ic
	//p3 = &ic;
	//p2 = p1;
	//ic = *p3;
	//const int v2 = 0;
	//int v1 = v2;
	//int *p1 = &v1, &r1 = v1;
	//const int *p2 = &v2,  *const p3 = &v2, &r2 = v2;
	//r1 = v2;
	//p1 = p2;
	//p2 = p1;
	//p1 = p3;
	//p2 = p3;
	//int null = 0; 
	//int *p = null; //null means integer 0
	//using S = int;
	//S s = 90;
	//std::cout << s << std::endl;
	//int i = 0;
	//const int ci = i, &cr = ci;
	//auto b = ci;
	//auto c = cr;
	//auto d = &i;
	//auto e = &ci;
	//auto &g = ci;
	//b = 42;
	//c = 42;
	//d = 42;
	//e = 42;
	//g = 42;
	//int a = 3, b = 4;
	//decltype(a) c = a;
	//std::cout << c << std::endl;
	//decltype((b)) d = a;
	//++c;
	//++d;
	//std::cout << c << d << a << std::endl;
	//const string s = "Keep out!";
	//for(auto &c : s)
	//{
	//	cout << c;
	//}
	//cout << s << endl;
	//vector<int> vint(10, 1);
	//auto it1 = vint.begin(), it2 = vint.end();
	//auto mid = (it2 - it1) / 2;
	//string sa2[10];
	//int ia2[10];
	//int n = 1;
	//int i;
	//cout << "ia2:" << endl;
	//for(i = 0; i < 10; i++)
	//	cout << n++ << ": " << ia[i] << endl;
	//char ca[] = {'C', '+'};
	//char ca[] = "hello world";
	//cout << strlen(ca) << endl;
	//const char ca[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	//const char *cp = ca;
	//while(*cp){
	//	cout << *cp << endl;
	//	++cp;
	//}
	//cout << 5 + 10 * 20 / 2 << endl;
	//vector<int> vec = {8, 2, 3};
	//cout << *vec.begin() << endl;
	//cout << *vec.begin() + 1 << endl;
	//int i = 0;
	//cout << i << " " << ++i << endl;
	//cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << endl;	
	//cout << -30 * 3 + 21 / 5 << endl;
	//cout << -30 + 3 * 21 / 5 << endl;
	//cout << 30 / 3 * 21 % 5 << endl;
	//cout << -30 / 3 * 21 % 4 << endl;
	//int n;
	//while(cin >> n)
	//{
	//	if(n % 2 == 0)
	//		cout << "偶数" << endl;
	//	else
	//		cout << "奇数" << endl;
	//}
	//short val = 32767;
	//val += 1;
	//cout << val << endl;
	//char n = 127;
	//n += 1;
	//printf("%d\n", n);
	//int i;
	//double d;
	//d = i = 3.5;
	//i = d = 3.5;
	//cout << d << " " << i << endl;
	//double dval; int ival; int *pi;
	//ival = dval = 0;
	//pi = 0;
	//vector<string> str = {"hello"};
	//auto iter = str.begin();
	//cout << *iter++ << endl;
	//(*iter)++;
	//++*iter;
	//++iter;
	//cout << *iter << endl;
	//if(!iter->empty())
	//	cout << "kdjkf" << endl;
	//cout < 60;
	//int grade = 80;
	//string finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : (grade < 75) ? "low pass" : "pass";
	//cout << finalgrade << endl;
	//cout << sizeof(int) << endl;
	//cout << sizeof(long) << endl;
	//unsigned long ul1 = 3, ul2 = 7;
	//cout << (ul1 & ul2) << endl;
	//cout << (ul1 | ul2) << endl;
	//cout << (ul1 && ul2) << endl;
	//cout << (ul1 || ul2) << endl;
	//int *p;
	//cout << sizeof *p << endl;
	//cout << sizeof(int) << endl;
	//int arr[9];
	//cout << sizeof arr << endl;
	//string str = "abckdjfkdjdkfjdk";
	//cout << sizeof str << endl;
	//cout << sizeof(string) << endl;
	//int x[10]; int *p = x;
	//cout << sizeof(x) / sizeof(*x) << endl;
	//cout << sizeof(p) << " " << sizeof(*p) << " " << sizeof(x) << endl;
	//cout << sizeof(int *) << " " << sizeof(int) << endl;
	//cout << sizeof(p) / sizeof(*p) << endl;
	//while(int i = 0)
	//	cout << i << endl;
	//i = 9;
	string str1 = "hello";
	string str2;
	str2 = str1;
	cout << str2 << endl;
	





	return 0;
}
