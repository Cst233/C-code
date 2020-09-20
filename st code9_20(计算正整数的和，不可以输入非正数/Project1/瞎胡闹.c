#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int sum = 0;
	int num;
	int i = 1;
	while (i == 1)
	{
		printf("please enter your number:");
		scanf("%d", &num);
		i = num > 0;
		while (i == 1)
		{
			sum = sum + num;
			i = 0;
		}
		i = num > 0;
	}
	printf("%d", sum);
	return 0;
}