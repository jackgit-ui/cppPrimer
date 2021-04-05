#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int arr[10];
	int arrt[10];
	for(int i = 0; i < 10; i++)
		arr[i] = i;
	for(int i = 0; i < 10; i++)
		arrt[i] = arr[i];
	for(auto num : arr)
		cout << num << " ";
	cout << endl;
	for(auto num : arrt)
		cout << num << " ";
	cout << endl;

	return 0;
}
