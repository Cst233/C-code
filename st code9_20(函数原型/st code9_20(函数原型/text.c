#include<stdio.h>
void st(int n);
int main()
{
	int test;
	test = 10;
	st(test);
	return 0;
}
void st(int n)
{
	while (n-- > 0)
		printf("#");
	printf("\n");
}