#include<stdio.h>
int main()
{
	getchar();
	printf("\aType int has a size of %u bytes.\n", sizeof(int));
	printf("\tType long has a size of %u bytes.\r", sizeof(long));
	printf("And,\n");
	return 0;
}