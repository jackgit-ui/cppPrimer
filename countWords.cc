#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string word;
	string temp = "";
	int cnt = 0;
	int max = 0;
	string maxWord = "";
	if(cin >> word)
	{
		cnt = 1;
		max = 1;
		maxWord = word;
		while(cin >> temp)
		{
			if(word == temp)
			{
				cnt++;
			}
			else
			{
				if(cnt > max)
				{
					max = cnt;
					maxWord = word;
				}
				word = temp;
				cnt = 1;
			}
		}
	}
	if(cnt > max)
	{
		max = cnt;
		maxWord = word;
	}
	cout << maxWord << ":" << max << endl;

	return 0;
}
