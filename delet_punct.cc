#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(auto &c : s)
	{
		if(ispunct(c))
			c = ' ';
	}
	cout << s << endl;

	return 0;
}
