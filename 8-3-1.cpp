#include<stdio.h>
void main()
{
	printf("输入10个整数\n");
	int x[10];
	for (int i = 0; i < 10; i++)
	{
		
		scanf_s("%d", &x[i]);
	}
	int max=x[0];
	int t;
	for (int i = 1; i < 10; i++)
	{
		if (max < x[i])
		{
			max = x[i];
			t = i;

		}
	}
	printf("x[%d]=%d", t, max);
	
}