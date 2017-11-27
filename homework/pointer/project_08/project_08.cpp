// 排序

#include <stdio.h>

int sort(int *p1, int count)
{
	int point = 0;	// 负责在排奇数和偶数的时候定位起始点
	int i,j;
	int t;

	// 冒泡排序
	for(i = 0; i < count; i++)
	{
		for(j = 0; j < count - i - 1; j++)
		{
			if(*(p1+j) > *(p1+j+1))
			{
				t = *(p1+j);
				*(p1+j) = *(p1+j+1);
				*(p1+j+1) = t;
			}
		}
	}

	// 排奇数
	for(i = 0; i < count; i++)
	{
		if(*(p1+i) % 2 != 0)
		{
			t = *(p1+point);
			*(p1+point) = *(p1+i);
			*(p1+i) = t;
			point++;
		}
	}

	// 排偶数
	for(i = point; i < count; i++)
	{
		for(j = i; j < count - 1; j++)
		{
			if(*(p1+i) > *(p1+j+1))
			{
				t = *(p1+i);
				*(p1+i) = *(p1+j+1);
				*(p1+j+1) = t;
			}
		}
	}

	return 0;
}

int main()
{
	int a[100] = {0};
	int *p;
	int number;
	int counter = 0;
	int i;
	p = a;

	// 获取输入
	printf("Enter number: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);
		if(number == 0)		// 结束条件
			break;
		*(p+i) = number;
		counter++;
	}

	// 排序
	sort(a, counter);

	// 输出排序后的结果
	for(i = 0; i < counter; i++)
		printf("%5d", *(p+i));

	printf("\n");

	return 0;
}