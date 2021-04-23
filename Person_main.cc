#include "Person.h"
int main()
{
        Person coder("chen", "xgs");
	//cout << coder.getName() << " " << coder.getAddress() << endl;
	print(cout, coder);
	cout << endl;

        return 0;
}
