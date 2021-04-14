#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	int sum = 0;
	//for
	printf("for.....\n");
	for(i = 1; i <= 100; i++)
		sum += i;
	printf("sum: %d\n", sum);
	//while
	printf("while.....\n");
	i = 1; 
	sum = 0;
	while(i <= 100)
	{
		sum += i;
		++i;
	}
	printf("sum: %d\n", sum);

	return 0;
}
