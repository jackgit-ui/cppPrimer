#include <iostream>
using namespace std;
void calc(char *, char *){};
void calc(const char *, const char *){};
int main()
{
	char s1[] = {'h'};
	char s2[] = {'e'};
	calc(s1, s2);

	return 0;
}
