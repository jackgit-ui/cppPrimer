#include <iostream>
using namespace std;
int main()
{
	char ch;
	while(cin >> ch)
	{
		if(ch == 'q')
			break;
	}
	cout << "end while ..." << endl;
	for(; cin >> ch; )
	{
		if(ch == 'q')
			break;
	}
	cout << "end for ..." << endl;

	return 0;
}
