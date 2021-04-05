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
	for(auto it = text.begin(); it != text.end() && !it->empty(); ++it)
	{
		for(auto it2 = it->begin(); it2 != it->end(); ++it2)
			*it2 = toupper(*it2);
		cout << *it << endl;
	}

	return 0;
}
