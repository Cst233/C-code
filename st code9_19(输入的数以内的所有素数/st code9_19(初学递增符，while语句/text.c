#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ST "������������ڵ����������У�"
int main()
{
	int a=2, b,c=1,d;
	printf("����������Ҫ�����֣�\n");
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