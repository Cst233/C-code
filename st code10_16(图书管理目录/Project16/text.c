#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define LIM 40
static int count=0;
struct book{
	char title[LIM];
	char author[LIM];
	double value;
};
char *s_get(char*st, int n);
void pstruct(struct book* st);
int main()
{
	struct book index[10];
	while (count<10)
	{
		printf("please enter the title of your book:");
		s_get(index[count].title, LIM);
		printf("please enter the author of your book:");
		s_get(index[count].author, LIM);
		printf("and what's the value of the book?");
		scanf("%lf", &index[count].value);
		while (getchar() != '\n')
			continue;
		if (index[count].author[0] == '\0' || index[count].title[0] == '\0')
			break;
		count++;
	}
	pstruct(index);
	return 0;
}
char *s_get(char*st, int n)
{
	char* media = fgets(st, n, stdin);
	for (int i = 0; i < n; i++)
	{
		if (media[i] == '\n')
		{
			media[i] = '\0';
			break;
		}
	}
	return media;
}
void pstruct(struct book* st)
{
	extern int count;
	for (int i = 0; i < count; i++)
	{
		printf("the value of %s written by %s is $%.2lf\n", st[i].title, st[i].author, st[i].value);
	}
}