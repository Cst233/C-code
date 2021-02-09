#define _CRT_SECURE_NO_WARNINGS

#include"_stack_h.h"
#include<ctype.h>

//将中缀表达式转化成后缀表达式
int cmp(char ch1, char ch2)
{
	int numof_ch1, numof_ch2;
	char operation[] = { '+', '-', '*', '/', '(',')' };
	int order[] = { 1, 1, 2, 2, 3 ,4};
	int i;
	for (i = 0; i < 6; i++)
	{
		if (operation[i] == ch1)
			numof_ch1 = i;
	}
	for (i = 0; i < 6; i++)
	{
		if (operation[i] == ch2)
			numof_ch2 = i;
	}
	return order[numof_ch1] - order[numof_ch2];
}

int main()
{
	int  ch;
	Stack S = CreateStack();
	MakeEmpty(S);
	while ((ch = getchar()) != '\n')
	{
		if (isdigit(ch)||isalpha(ch))
		{
			putchar(ch);
		}
		else 
		{
			while (!IsEmpty(S) && Top(S)->ch != '('&&cmp((Top(S)->ch), ch) >= 0)
			{
				putchar(Top(S)->ch);
				Pop(S);
			}
			if (ch == ')')
			{
				while (Top(S)->ch != '(')
				{
					putchar(Top(S)->ch);
					Pop(S);
				}
				Pop(S);
			}
			else
			{
				Push(S, ch);
			}
		}
	}
	while (!IsEmpty(S))
	{
		putchar(Top(S)->ch);
		Pop(S);
	}
	return 0;
}