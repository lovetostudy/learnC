// 删除元素

#include <stdio.h>

int main()
{
	int counter = 0;
	int number;
	int element;
	int i;
	int a[100] = {0};
	int *p;
	p = a;

	// 获取输入
	printf("Enter number: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);
		if(number == 0)		// 结束条件
			break;
		*(p+i) = number;		// 将输入的数放入数组a中
		counter++;			// 统计输入的数的个数
	}
	scanf("%d", &element);	// 输入要删除的元素

	// 删除
	for(i = 0; i < counter; i++)
	{
		if(*(p+i) == element)	// 将要删除元素后的数全部前移一位以覆盖要删除的数
		{
			for(int j = i; j <counter; j++)
				*(p+j) = *(p+j+1);
			counter--;		 // 将数的总数减一
		}
	}

	// 输出删除元素后的数
	for(i = 0; i < counter; i++)
		printf("%5d", *(p+i));

	printf("\n");

	return 0;
}