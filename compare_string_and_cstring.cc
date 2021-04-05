#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	//string 
	cout << "String......" << endl;
	string s1 = "hello";
	string s2 = "Hello";
	if(s1 > s2)
		cout << "s1 > s2" << endl;
	else
		cout << "s1 !> s2" << endl;
	//csting
	printf("Cstring......\n");
	const char cs1[] = "hello";
	const char cs2[] = "Hello";
	if(strcmp(cs1, cs2))
		printf("cs1 > cs2\n");
	else
		printf("cs1 !> cs2\n");

	return 0;
}
