#include<stdio.h>
#include<limits.h>
#define ST "Now you know,st."
void st(void);
int main()
{
	st();
	getchar();
	printf("Maximum int value on this system =%d.\n", INT_MAX);
	printf("%s\n", ST);
	return 0;
}
void st(void)
{
	printf("Hello st.");
}