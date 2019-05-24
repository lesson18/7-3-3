#include<stdio.h>
#include<math.h>
#define SIZE 10
float average(float *start_, float *end_);
void main()
{
	float arr[SIZE];
	float * start = arr;
	float * end = &arr[SIZE];
	printf("10个数分别为：\n");
	while ( start< end)
	{
		scanf_s("%d", start);
			start++;
	}
	float xb = average(start, end); //xb为平均值
	float m[SIZE];				//存放（X[i]-xb)^2
	float *start_m = m;
	float *end_m = &m[SIZE];
	float *pm = m;
	for (int i = 0; i < SIZE; i++)
	{
		*pm = (arr[i] - xb)*(arr[i] - xb);
		pm++;
	}
	float sd = sqrt(average(start_m, end_m));
	printf("标准差为%f", sd);
}
float average(float *start_, float *end_)
{
	float sum = 0;
	while (start_ < end_)
	{
		sum += *start_;
		start_++;
	}
	float average = sum / SIZE;
	return average;
}