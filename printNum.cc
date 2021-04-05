#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<int> arr;
	int n;
	while(cin >> n)
		arr.push_back(n);
	//for(unsigned int i = 0; i < arr.size() - 1; i++)
	//for(unsigned i = 0, j = arr.size() - 1; i < j; ++i, --j)
	//{
		//cout << arr[i] + arr[i + 1] << " ";
		//cout << arr[i] + arr[j] << " ";
	//}
	//for(auto it = arr.begin(); it < arr.end() - 1; ++it)
	//{
	//	cout << *it + *(it + 1) << " ";
	//}
	for(auto it = arr.begin(), ite = arr.end() - 1; it < ite; ++it, --ite)
		cout << *it + *ite << " ";
	cout << endl;

	return 0;
}
