#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double pow(double n, int p);
int main()
{
	double n ;
	int p ;
	printf("��ֱ���������������ĵ�����ָ����");
	scanf("%lf %d", &n, &p);
	printf("%lf��%d���ݵ�ֵ��%lf\n", n,p,pow(n, p));
}

double pow(double n, int p)
{
	double pow = 1;
	int i;
	for (i = 1; i <= p; i++)
		pow *= n;
	return pow;
}
