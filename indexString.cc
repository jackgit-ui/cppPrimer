#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main()
{
	string s = "hello World!";
	cout << s << endl;
	if(!s.empty())
		s[0] = toupper(s[0]);
	cout << s << endl;
	for(decltype(s.size()) index = 0;
		index != s.size() && !isspace(s[index]); ++index)
		s[index] = toupper(s[index]);
	cout << s << endl;

	return 0;
}
