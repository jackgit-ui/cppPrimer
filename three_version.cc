#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int ia[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	int count = 0;
	//vesion 1
	cout << "version 1:" << endl;
	for(int (*p)[4] = ia; p != ia + 3; ++p)
		for(int *q = *p; q != *p + 4; ++q)
		{
			cout << *q << " ";
			count++;
			if(count % 4 == 0)
				cout << endl;
			
		}
	//verson 1'
	count = 0;
	cout << "verson 1'" << endl;
	for(auto p = ia; p != end(ia); ++p)
		for(auto q = *p; q != end(*p); ++q)
		{
			cout << *q << " ";
			count++;
			if(count % 4 == 0)
				cout << endl;
		}
	//version 2
	count = 0;
	cout << "version 2:" << endl;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 4; j++)
		{
			cout << ia[i][j] << " ";
			count++;
			if(count % 4 == 0)
				cout << endl;
		}
	//version 3
	count = 0;
	cout << "version 3:" << endl;
	//for(int (&p)[4] : ia)
	for(int (&p)[4] : ia)
		for(int q : p)
		{
			cout << q << " ";
			count++;
			if(count % 4 == 0)
				cout << endl;
		}

	return 0;
}
