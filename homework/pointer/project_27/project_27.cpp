// 查找元素

#include <stdio.h>

// find函数：寻找数组中的元素，找到就返回其下标，否则返回-1
int find(int *p, int n,int ele)
{
	int flag = 0;		// 假设元素不存在

	for(int i = 0; i < n; i++)
	{
		if(*(p+i) == ele)
		{
			flag = i;		// 如果找到将下标给flag
			break;			//	结束
		}
	}

	if(flag == 0)		// 如果没找到
		return -1;		// 返回-1
	else
		return flag;	// 否则返回下标
}


int main()
{
	int counter = 0;
	int number;
	int a[100];
	int *po;
	int i;
	int result;
	int element;
	po = a;

	// 获取输入
	printf("Enter number: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);
		if(number == 0)		// 结束条件
			break;
		*(po+i) = number;	// 将元素放入数组a中
		counter++;			// 统计元素个数
	}
	scanf("%d", &element);	// 输入要查找的元素

	// 查找元素
	result = find(a, counter,element);

	// 输出结果
	printf("%d\n", result);

	return 0;
}