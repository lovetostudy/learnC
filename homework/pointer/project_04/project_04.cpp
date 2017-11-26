// 最大值

#include <stdio.h>

int main()
{
	int a[100] = {0};
	int *p;
	int counter = 0;
	int max_value = 0;
	int number;
	int i;
	p = a;

	// 获取输入	
	printf("Enter numbers: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);	
		if(number == 0)		// 结束条件
			break;
		*(p+i) = number;
		counter++;		// 统计数值的个数
	}

	// 判断最大值
	for(i = 0; i < counter; i++)
	{
		if(max_value < *(p+i))
			max_value = *(p+i);
	}

	printf("%d\n", max_value);

	return 0;
}