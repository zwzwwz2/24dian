#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
extern int test(int a, int b, int c, int d);
int a, b, c, d;
int main()
{
	int input = 0;
	char arr[4] = { '+', '-' , '*' , '/' };
	scanf("%d %d %d %d", & a, &b, &c, &d);
	if (test(a, b, c, d) == 1)
		printf("yes");
	else
		printf("no");
	return 0;
}