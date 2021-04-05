#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printVector(vector<int> v1)
{
	//for(auto c : v1)
	//	cout << c << endl;
	for(auto it = v1.begin(); it != v1.end(); ++it)
		cout << *it << endl;
	cout << v1.size() << endl;
}
void printVector2(vector<string> v1)
{
	//for(auto c : v1)
	//	cout << c << endl;
	for(auto it = v1.begin(); it != v1.end(); ++it)
		cout << *it << endl;
	cout << v1.size() << endl;
}
int main()
{
	vector<int> v1;
	vector<int> v2(10);
	//printVector(v2);
	vector<int> v3(10, 42);
	//printVector(v3);
	vector<int> v4{10};
	//printVector(v4);
	vector<int> v5{10, 42};
	//printVector(v5);
	vector<string> v6{10};
	//printVector2(v6);
	vector<string> v7{10, "hi"};
	printVector2(v7);

	return 0;
}
