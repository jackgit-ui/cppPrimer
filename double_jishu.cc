#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> num = {1, 2, 3, 4, 5};
	for(auto n : num)
		cout << n << " ";
	cout << endl;
	for(auto &n : num)
		n = (n % 2 != 0) ? (2 * n) : n;
	for(auto n : num)
		cout << n << " ";
	cout << endl;

	return 0;
}
