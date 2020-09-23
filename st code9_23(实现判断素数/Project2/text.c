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
				printf("%d可以被%d和%d整除\n", num, n, num / n);
			else
				printf("%d可以被%d整除\n", num, n);
			isprime = 0;
		}
	}
	if (isprime)
		printf("%d是个素数\n", num);
	return 0;
}