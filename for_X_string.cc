#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s = "Hello World!";
	//string s = "H";
	//for(auto &c : s)
	//for(char c : s)
		//c = 'X';
	unsigned int i = 0;
	while(i < s.size())
		s[i++] = 'X';
	cout << s[0] << endl;
	cout << s << endl;

	return 0;
}
