#include <stdio.h>
#include <string.h>

//extern int a = 999;

int main()
{
	//unsigned int cnt = 10;
	//int arr[cnt];
	//char ca[5] = {'C', '+', '+'};
	//int len = strlen(ca);
	//printf("%d\n", len);
	//for(int i = 0; i < 5; i++)
	//	printf("%c ", ca[i]);
	//printf(".....\n");
	char s1[] = "Hello ";
	char s2[] = "World";
	char s3[1024] = "";
	puts(s1);
	puts(s2);
	strcpy(s3, s1);
	puts(s3);
	strcat(s3, s2);
	puts(s3);

	return 0;
}
