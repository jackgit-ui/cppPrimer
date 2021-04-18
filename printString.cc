#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	if(argc < 3)
	{
		cout << "Give more string" << endl;
		exit(-1);
	}
	string str1 = argv[1];
	string str2 = argv[2];
	string str = str1 + " " + str2;
	cout << str << endl;

	return 0;
}
