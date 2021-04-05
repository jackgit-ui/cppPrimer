#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<string> text;
	string word;
	while(cin >> word)
		text.push_back(word);
	for(auto &s : text)
		for(auto &t : s)
			t = toupper(t);
	for(auto &s : text)
		cout << s << endl;

	return 0;
}
