#include<stdio.h>
void main()
{
	printf("输入两个含5个整数的数组\n");
	int x[5], y[5],s[5];
	int i = 0, j = 0, k = 0;
	for(;i<5;i++)
	{ 
		scanf_s("%d",&x[i]);
	}
	for (; j < 5; j++)
	{
		scanf_s("%d", &y[j]);
	}
	for (i=0,j=0; k < 5; k++,i++,j++)
	{
		s[k] = x[i] * y[j];
	}
	printf("乘积为\n");
	for (k = 0; k < 5; k++)
	{
		printf("%d ", s[k]);
	}
}