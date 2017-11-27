// 有序插入

#include <stdio.h>

// insert函数：输入一个排序后的数组a以及要插入的数，修改成有序的插入数的数组
int insert(int *p1, int n, int num)
{
	int i;
	int index;	// 插入点的下标

	// 定位插入点的下标
	for(i = 0; i < n; i++)
	{
		if(num > *(p1+i))
		{
			index = i;
			break;
		}
	}
	
	// 插入
	for(i = n; i > index; i--)	// 将插入点以及其后的数向后移动
		*(p1+i) = *(p1+i-1);	
	*(p1+index) = num;		// 将要插入的数插入数组中

	return 0;
}

int main()
{
	int counter;
	int number;
	int i;
	int a[100];
	int *p;
	p = a;

	// 获取输入
	printf("Enter number: ");
	scanf("%d", &counter);		// 输入数的个数
	for(i = 0; i < counter; i++)	// 将数放入数组a中
		scanf("%d", p+i);
	scanf("%d", &number);		// 要插入的数

	// 冒泡排序(从大到小)
	for(i = 0; i < counter; i++)
	{
		for(int j = 0; j < counter - i - 1; j++)
		{
			if(*(p+j) < *(p+j+1))
			{
				int t;
				t = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = t;
			}
		}
	}
	
	// 插入
	insert(a, counter, number);	

	// 输出插入后的数组a
	for(i = 0; i <= counter; i++)
		printf("%5d", *(p+i));

	printf("\n");

	return 0;
}

