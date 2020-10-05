#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
char get_choice(void);
char get_first(void);
int main()
{
	float result;
	int i=0;
	float number1, number2;
	char ch;
	printf("请输入您的选择（在下列选择中）：\n");
	printf("a.加法            s.减法\n");
	printf("m.乘法            d.除法\n");
	printf("q.退出\n");
	printf("所以您的选择是：");
	ch = get_choice();
	while (ch != 'q')
	{
		printf("请输入两个浮点数呗：");
		while (scanf("%f%f", &number1, &number2) != 2)
		{
			i++;
			while (getchar() != '\n');
			if (i > 2)
			{
				goto exit;
			}
			printf("求你别搞，两个数都得是浮点数，再输入一次呗：\n");
		}
		switch (ch)
		{
			case 'a':result=number1+number2;
					 break;
			case 's':result=number1-number2;
					 break;
			case 'm':result=number1*number2;
					 break;
			case 'd':if (number2 == 0)
						{
						    printf("请重新输入一个新的数作为除数");
							scanf("%f", &number2);
						}
					 result=number1/number2;
					 break;
		}
		printf("您得到的结果是：%f\n", result);
		printf("请继续输入您需要的选项：");
		ch = get_choice();
	}
	exit:printf("再见，事不过三，不理你了！\n");
	return 0;
}

char get_choice(void)
{
	int ch;
	ch=get_first();
	while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
	{
		printf("您输入的选项未出现在菜单中，请重新输入菜单中的选项：");
		ch=get_first();
	}
	return ch;
}
char get_first(void)
{
	char ch;
	while (isspace(ch = getchar()) );
	while (getchar() != '\n')
		continue;
	return ch;
}