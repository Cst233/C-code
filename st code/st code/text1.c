#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char st;
	scanf("%c", &st);
	getchar();
	printf("%c\'s code is %d\n",st,st);
	getchar();
	return 0;
}