#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;
int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, otherCnt = 0;
	//char ch;
	string text = "h h";
	//while(cin >> text)
	{
		for(auto ch : text)
		if(ch == 'a' || ch == 'A')
			++aCnt;
		else if(ch == 'e' || ch == 'E')
			++eCnt;
		else if(ch == 'i' || ch == 'I')
			++iCnt;
		else if(ch == 'o' || ch == 'O')
			++oCnt;
		else if(ch == 'u' || ch == 'U')
			++uCnt;
		else if(ch == 'f'
		else
			++otherCnt;
	}
	cout << "Number of vowel a: " << aCnt << '\n'
	     << "Number of vowel e: " << eCnt << '\n'
	     << "Number of vowel i: " << iCnt << '\n'
	     << "Number of vowel o: " << oCnt << '\n'
	     << "Number of vowel u: " << uCnt << '\n'
	     << "Number of vowel other: " << otherCnt << endl;

	return 0;
}
