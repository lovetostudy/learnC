// 平均值

#include <stdio.h>

int main()
{
	int a[100] = {0};
	int *p;
	int number;
	int counter = 0;
	int i;
	p = a;

	// 获取输入
	printf("Enter number(0 to end): ");
	for(i = 0; i < 100; i++)	// 获取数值
	{
		scanf("%d", &number);
		if(number == 0)		// 结束条件
			break;
		*(p+i) = number;
		counter++;		// 统计数值的个数
	}

	// 求和
	double total = 0;
	for(i = 0; i < counter; i++)
		total += p[i];

	// 求平均值并输出
	double ave;
	ave = total / counter;
	printf("%.5lf\n", ave);

	return 0;
}