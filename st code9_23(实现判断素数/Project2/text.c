#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n,num;
	int isprime = 1;
	scanf("%d", &num);
	for (n = 2; n*n <= num; n++)
	{
		if (num%n == 0)
		{
			if (n*n != num)
				printf("%d���Ա�%d��%d����\n", num, n, num / n);
			else
				printf("%d���Ա�%d����\n", num, n);
			isprime = 0;
		}
	}
	if (isprime)
		printf("%d�Ǹ�����\n", num);
	return 0;
}