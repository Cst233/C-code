#include<stdio.h>
void print(void);
int main()
{
	int num = 233;
	int check;
	check=printf("%d is used for checking\n",num);
	print();
	printf("Oh!it\'s %d\n", check);
	return 0;
}
void print(void)
{
	printf("WHAT IS THE NUMBER OF THE NUMBER RETURNED?\n");
}