#include<stdio.h>
#include<math.h>
#define LIM 100
void shownumber(const int*);
int main()
{
	int k = 0;
	int i, j,num;
	static int number[LIM];
	for (num = 100; num < 200; num++)
	{
		if (!number[num - 100])
		{	
			i = 2;
			while (i <= sqrt(num))
			{
				if (num%i == 0)
				{
					for (j = 0; j < LIM; j += i)
						number[num - 100 +j] = 1;
					break;
				}
				i++;
			}
		}
	}
	shownumber(number);
	return 0;
}
void shownumber(const int*show)
{
	int i = 0;
	for (; i < LIM; i++)
	{
		if (!show[i])
			printf("%d ", i + 100);
	}
}
