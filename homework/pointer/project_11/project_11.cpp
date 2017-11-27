// 数据插入

#include <stdio.h>

int main()
{
	int a[100];
	int *p;
	int counter = 0;
	int i;
	int index;
	int number;
	int numbers;
	p = a;

	// 获取输入
	printf("Enter numbers: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &numbers);
		if(numbers == 0)		// 结束条件
			break;

		*(p+i) = numbers;			// 将输入的数放入数组a中
		counter++;				// 统计输入的个数
	}
	scanf("%d%d", &index, &number);		// 输入插入点的下标以及要插入的数

	// 插入
	for(i = counter; i > index; i--)		// 将插入点位置及其后面的数后移
		*(p+i) = *(p+i-1);
	*(p+index) = number;				// 将插入数放入插入点

	// 输出插入后的数组
	for(i = 0; i <= counter; i++)
		printf("%5d", *(p+i));

	printf("\n");

	return 0;
}