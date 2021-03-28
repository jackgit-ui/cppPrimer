#include <stdio.h>
extern int a;
int main()
{
	//printf("%s\n", "Hello world"
	//	"My friend");
	int *p;
	float *q;
	char *r;
	void *t;
	t = p;
	int *s;
	if(t == p)
		printf("t is int *");
	if(t == q)
		printf("t is float *");
	printf("\n");
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(q));
	printf("%d\n", sizeof(r));
	printf("...%d\n", a);
	return 0;
}
