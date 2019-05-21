#include<stdio.h>
#include<stdlib.h>
int fun(int *pm, int *pn);
void main()
{
	printf("输入组合数的下标m，上标n,空格隔开\n");
	int m, n;
	int s;
	scanf_s("%d%d", &m, &n);
	s = fun(&m, &n);
	printf("%d\n", s);
	system("pause");
}
int fun(int * pm, int * pn)
{
	int m = *pm;
	int n = *pn;
	int  s1 = 1;
	int s2 = 1;
	int end = m - n + 1;
	for (; m >=end; m--)
	{
		s1 = s1 * m;
	}
	for (; n >= 1; n--)
	{
		s2 = s2 * n;
	}
	int s3 = s1 / s2;
	return s3;
}
