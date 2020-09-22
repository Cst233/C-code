#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double pow(double n, int p);
int main()
{
	double n ;
	int p ;
	printf("请分别输入您期望计算的底数和指数：");
	scanf("%lf %d", &n, &p);
	printf("%lf的%d次幂的值是%lf\n", n,p,pow(n, p));
}

double pow(double n, int p)
{
	double pow = 1;
	int i;
	for (i = 1; i <= p; i++)
		pow *= n;
	return pow;
}
