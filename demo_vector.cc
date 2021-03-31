#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	//vector<vector<int>> ivec;
	//vector<string> svec = ivec;
	//vector<string> svec(10, "null");
	//for(auto c : svec)
	//	cout << c << endl;
	//vector<string> v6{10};
	//vector<string> v7{10, "hi"};
	//for(auto s : v6)
	//	cout << s << endl;
	//for(auto s : v7)
	//	cout << s << endl;
	vector<int> ivec;
	int n;
	vector<string> svec;
	string word;
	//while(cin >> n)
	//	ivec.push_back(n);
	while(cin >> word)
		svec.push_back(word);
	//cout << ivec[0] << ivec[1] << ivec[2] << endl;
	cout << svec[0] << svec[1] << ivec[2] << endl;



	return 0;
}
