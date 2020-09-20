#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ST "您输入的数以内的所有素数有："
int main()
{
	int a=2, b,c=1,d;
	printf("请输入您需要的数字：\n");
	scanf("%d", &d);
	printf("%s\n",ST );
	printf("%d\n", 2);
	while (++a< d)
	{
		c = c + 1;
		b = a;
		while (c!=0)
		{
			b--;
			c = a%b;
			while (b==1)
			{
				printf("%d\n", a);
				b = 0;
			}
		}
	
	}
	return 0;
}