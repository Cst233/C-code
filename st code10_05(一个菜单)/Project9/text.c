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
	printf("����������ѡ��������ѡ���У���\n");
	printf("a.�ӷ�            s.����\n");
	printf("m.�˷�            d.����\n");
	printf("q.�˳�\n");
	printf("��������ѡ���ǣ�");
	ch = get_choice();
	while (ch != 'q')
	{
		printf("�����������������£�");
		while (scanf("%f%f", &number1, &number2) != 2)
		{
			i++;
			while (getchar() != '\n');
			if (i > 2)
			{
				goto exit;
			}
			printf("�����㣬�����������Ǹ�������������һ���£�\n");
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
						    printf("����������һ���µ�����Ϊ����");
							scanf("%f", &number2);
						}
					 result=number1/number2;
					 break;
		}
		printf("���õ��Ľ���ǣ�%f\n", result);
		printf("�������������Ҫ��ѡ�");
		ch = get_choice();
	}
	exit:printf("�ټ����²��������������ˣ�\n");
	return 0;
}

char get_choice(void)
{
	int ch;
	ch=get_first();
	while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
	{
		printf("�������ѡ��δ�����ڲ˵��У�����������˵��е�ѡ�");
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