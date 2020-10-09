#include<stdio.h>
#include<string.h>
#define LIM 5
void seq(char *st[LIM]);
char *s_gets(char*st, int n);
int main()
{
	int i=0;
	char *words[LIM];
	char sentence[LIM][40];
	printf("请输入五行英文,我将自动为您排序：\n");
	while (i < LIM)
	{
		s_gets(sentence[i], 40);
		words[i] = sentence[i];
		i++;
	}
	seq(words);
	for (i = 0; i < LIM; i++)
		puts(words[i]);
	return 0;
}


void seq(char *st[LIM])
{ 
	char *temp=0;
	int n, i;
	for (i = 0; i < LIM - 1;i++)
		for (n = i + 1; n < LIM;n++)
		if (strcmp(st[i], st[n])>0)
		{
			temp = st[n];
			st[n] = st[i];
			st[i] = temp;
		}
}


char *s_gets(char*st, int n)
{
	char *pr, *pi;
	int i;
	if (pr = fgets(st, n, stdin))
	if (pi = strchr(pr, '\n'))
		*pi = '\0';
	else
	while (getchar() != '\n');
	return pr;
}