#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a = {0, 1, 1, 2};
	vector<int> b = {0, 1, 1, 2, 3, 5, 8};
	int i, j;
	if(a.size() < b.size())
	{
		for(i = 0, j = 0; i < a.size(); ++i, ++j)
			if(a[i] != b[i])
				break;
		if(i == a.size())
			cout << "true" << endl;
		else
			cout << "false" << endl;

	}
	else
	{
		for(i = 0, j = 0; i < b.size(); ++i, ++j)
			if(a[i] != b[i])
				break;
		if(i == b.size())
			cout << "true" << endl;
		else
			cout << "false" << endl;

	}

	return 0;
}
