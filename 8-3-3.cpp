#include<stdio.h>
int average(int * beg);
void main()
{
	int x[30];
	for (int j=2,i=0; i < 30; i++)
	{
		
		x[i] = j;
		j += 2;
	}
	printf("原数组\n");
	for (int i = 0; i < 30; i++)
	{
		printf("%2d ", x[i]);
	}
	
	
	int y[26];
	int m = 0;
	for (int k = 0; k < 26; k++,m++)
	{
		y[k] =average(&x[m]);
	}
	printf("\n平均数为\n");
	for (int i = 0; i < 26; i++)
	{
		printf("%2d ", y[i]);
	}
}
int average(int * beg)
{
	int sum = 0;
	for (int l = 1; l <= 5; l++, beg++)
	{
		sum += *beg;
	}
	int average = sum / 5;
	return average;
}
