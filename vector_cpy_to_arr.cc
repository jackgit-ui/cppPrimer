#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<int> veci = {1, 2, 8, 4, 5};
	int arr[5];
	for(int i = 0; i < 5; i++)
		arr[i] = veci[i];
	for(auto num : arr)
		cout << num << " ";
	cout << endl;

	return 0;
}
