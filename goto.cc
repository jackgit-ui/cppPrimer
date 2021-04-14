#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n > 0)
		goto CN;
	else
		cout << "english" << endl;
CN:
	cout << "chinese" << endl;
}
