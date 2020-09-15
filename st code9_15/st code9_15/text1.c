#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define AA "SUCEES!Happy than ever!"
int main()
{
	char st[40];
	scanf("%s", st);
	printf("%s is consisted with %d\n", st, strlen (st));
	printf("And the number of memoried cells is %d",sizeof st);
	getchar();
	getchar();
	printf("%s\n", AA);
	return 0;
}