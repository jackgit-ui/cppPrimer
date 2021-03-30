#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
	string word;
	while(cin >> word)
	//while(getline(cin,word))
		cout << word << endl;

	return 0;
}
