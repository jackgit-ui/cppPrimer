#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<unsigned> scores(11, 0);
	unsigned grade;
	while(cin >> grade){
		if(grade <= 100)
			//++scores[grade/10];
			//++(*(scores.begin() + grade/10));
	}
	for(auto it = scores.begin(); it != scores.end(); ++it)
		cout << *it << " ";
	cout << endl;

	return 0;
}
