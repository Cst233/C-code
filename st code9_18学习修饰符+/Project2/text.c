#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int width, precision;
	float  num=123.56;
	scanf("%d", &width);
	printf("*%-*f*\n", width, num);
	scanf("%d %d", &width, &precision);
	printf("%-*.*f\n", width, precision, num);
	return 0;
}