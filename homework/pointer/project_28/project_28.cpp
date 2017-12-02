// 平均值

#include <stdio.h>

// aver函数：输入数组，返回其平均值
double aver(int *p, int n)
{
	double total = 0;
	double avere;

	for(int i =0; i < n; i++)
		total += *(p+i);	// 求数组元素之和

	avere = total / n;		// 求平均值

	return avere;			// 返回平均值
}

int main()
{
	int a[100];
	int *po;
	int number;
	int i;
	double ave;
	int counter = 0;
	po = a;

	// 获取输入
	printf("Enter number: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);
		if(number == 0)		// 结束条件
			break;

		*(po+i) = number;		// 将数字放入数组a中
		counter++;			// 统计数值的个数
	}

	// 计算平均值
	ave = aver(a, counter);

	// 输出平均值
	printf("%.1lf\n", ave);

	return 0;
}

