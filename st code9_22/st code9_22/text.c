#include<stdio.h>
#define CHARS 10
#define ROWS 6
int main()
{
	int row;
	char ch;
	for (row = 0, ch = 'A'; row < ROWS; ch='A',row++)
	{
		for (; ch < ('A'+CHARS); ch++)
			printf("%c", ch);
		printf("\n");
	}
	return 0;
}
//或者可以这么写
/*#include<stdio.h>
#define ROWS 6
#define CHARS 10
int main()
{ 
	int row;
	char ch;
	for (row = 0; row < ROWS; row++)
	{
		for (ch = 'A'; ch < ('A' + CHARS); ch++)
			printf("%c", ch);
		printf("\n");
	}
	return 0;

}*/
