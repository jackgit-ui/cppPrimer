#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word, frontWord;
	cin >> frontWord;
	if(!frontWord.empty())
	{
		while(cin >> word)
		{
			if(word == frontWord)
			{
				if(!(word[0] >= 'A' && word[0] <= 'Z'))
					continue;
				cout << word << endl;
				break;
			}
			else
				frontWord = word;
		}
	}
	cout << "No repeat words" << endl;

	return 0;
}
