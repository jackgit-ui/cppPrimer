#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	/*
	if(s1 != s2)
	{
		if(s1 > s2)
			cout << s1 << endl;
		else
			cout << s2 << endl;
	}
	else
		cout << "equal" << endl;
	*/
	if(s1.size() != s2.size())
	{
		if(s1.size() > s2.size())
			cout << s1 << endl;
		else
			cout << s2 << endl;

	}
	else
		cout << "equal" << endl;

	return 0;
}
