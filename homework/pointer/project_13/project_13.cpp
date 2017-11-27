// 删除

#include <stdio.h>

int main()
{
	int counter = 0;
	int number;
	int a[100];
	int *p;
	int i;
	int index;
	p = a;

	// 获取输入
	printf("Enter number: ");
	for(i = 0; i < 100; i++)	
	{
		scanf("%d", &number);		
		if(number == 0)		// 结束条件
			break;
		*(p+i) = number;		// 将数放入数组a中
		counter++;		// 统计数值的个数
	}
	scanf("%d", &index);	 // 要删除数的下标

	// 删除
	if(index > counter)		// 判断位置是否合法
	{
		printf("Out of range!\n");
	}else
	{	
		for(i = index; i <counter; i++)	// 将要删除下标后的数前移
			*(p+i) = *(p+i+1);	
		counter--;		// 数的个数减一
		
		// 输出删除后的数组
		for(i = 0; i < counter; i++)
			printf("%5d", *(p+i));
		
		printf("\n");
	}

	return 0;
}