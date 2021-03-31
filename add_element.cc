#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<int> v2;
	for(int i = 0; i < 100; ++i)
		v2.push_back(i);
	for(int i = 0; i < 100; ++i)
		cout << v2[i] << ' '; 
	cout << endl;
	string word;
	vector<string> text;
	while(cin >> word)
		text.push_back(word);
	//cout << text << endl;
	unsigned int i = 0;
	cout << text[0] << text[1] << text[2] << endl;
	//while(!text.empty())
	for(i = 0; i < text.size(); i++)
	{
		cout << text[i] << " ";
		++i;
		//cout << text[2] << " ";
	}
	cout << endl;

	return 0;
}
