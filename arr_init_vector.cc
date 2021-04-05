#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int arr[] = {1, 2, 8, 4, 5};
	vector<int> vec(begin(arr), end(arr));
	for(auto num : vec)
		cout << num << " ";
	cout << endl;

	return 0;
}
