#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 10
void xuanze(int *parr);
void main()
{
	printf("输入10个整数\n");
		int arr[N];
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	xuanze(arr);
	printf("排序后为：\n");
		for (int i = 0; i < N; i++)
		{
			printf("%d,", arr[i]);
		}

}
void xuanze(int *parr)
{
	for (int i = 0; i < N-1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (*(parr + j) < *(parr + i))
			{
				int t = *(parr + j);
				*(parr + j) = *(parr + i);
				*(parr + i) = t;
			}
		}
		
	}
}