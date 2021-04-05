#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> arr(10, 0);
	vector<int> arrt(10, 0);
	int i = 0;
	for(auto it = arr.begin(); it < arr.end(); ++it, ++i)
		*it = i;
	for(auto it = arr.begin(), itt = arrt.begin(); it < arr.end(); ++it, ++itt)
		*itt = *it;
	for(auto num : arr)
		cout << num << " ";
	cout << endl;
	for(auto num : arrt)
		cout << num << " ";
	cout << endl;

	return 0;
}
