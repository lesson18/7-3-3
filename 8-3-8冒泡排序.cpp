#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 10

void maopao (int * parr);
void main ()
{
	int arr[N];
	printf("输入10个整数\n");
	for(int i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	

	maopao(arr);
	printf("排序结果为\n");
	for(int i=0;i<N;i++)
	{
		printf("%d,",arr[i]);
	}
	

}
void maopao (int * parr)
{
	for(int i=1;i<N;i++)
	{	
		int *start = parr;
		for(int j=1;j<=N-i;j++)
		{
			if(*parr>*(parr+1))
			{
				int temp=*parr;
				*parr=*(parr+1);
				*(parr+1)=temp;
			}
			parr++;
		}
		parr = start;

	}
}