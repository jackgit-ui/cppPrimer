#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<int> ivec(10, 3);
	for(auto it = ivec.begin(); it != ivec.end(); ++it)
		*it *= 2;
	for(auto it = ivec.begin(); it != ivec.end(); ++it)
		cout << *it << " ";
	cout << endl;

	return 0;
}
