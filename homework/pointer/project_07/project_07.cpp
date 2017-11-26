// 中位数

#include <stdio.h>

int main()
{
	int a[100] = {0};
	int *p;
	int number;
	int counter = 0;
	double mid;
	double total;
	int i,j;
	p = a;

	// 获取输入
	printf("Enter numbers: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);
		if(number == 0)		// 结束条件
			break;
		*(p+i) = number;
		counter++;		// 统计数值个数
	}

	// 冒泡排序
	for(i = 0; i < counter; i++)
	{
		for(j = 0; j < counter - i - 1; j++)
		{
			int t;
			if(*(p+j) > *(p+j+1))
			{
				t = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = t;
			}
		}
	}

	// 求中位数
	if(counter % 2 == 0)	// 若为偶数个数
	{
		total = *(p + counter / 2) + *(p + counter / 2 -1);
		mid = total / 2;
	}else					// 若为奇数个数
		mid = *(p + counter / 2);

	printf("%.1lf\n", mid);

	return 0;
}