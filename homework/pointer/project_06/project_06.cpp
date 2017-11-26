// 排序

#include <stdio.h>

int main()
{
	int a[100] = {0};
	int *p;
	int number;
	int counter = 0;
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
		for(j = i; j < counter - 1; j++)
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

	// 输出排序后的结果
	for(i = 0; i < counter; i++)
		printf("%5d", *(p+i));

	printf("\n");

	return 0;
}