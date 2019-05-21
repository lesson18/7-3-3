#include<stdio.h>

long fun(int*, int*);
void main()
{
	printf("输入排列数的下标m,上标n\n");
		int m, n;
	scanf_s("%d%d", &m, &n);
	long s = fun(&m, &n);
	printf("%ld", s);
}
long fun(int *pm, int *pn)
{
	int m = *pm;
	int n = *pn;
	int end = m - n + 1;
	long s=1;
	for (; m >= end; m--)
	{
		
		s = s * m;
	}
	return s;

}
