// 最小值的位置

#include <stdio.h>

int main()
{
	int a[100] = {0};
	int *p;
	int number;
	int counter = 0;
	int min_v;
	int index;
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
		counter++;		// 统计数值个数
	}

	//判断最小值
	min_v = *p;
	for(i = 1; i < counter; i++)
	{
		if(min_v > *(p+i))	
		{
			min_v = *(p+i);	
			index = i;		// 获取最小值下标
		}
	}

	printf("%d\n", index);

	return 0;
}