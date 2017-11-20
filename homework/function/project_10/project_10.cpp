// 素数求和

#include <stdio.h>
#include <math.h>

// pri_num函数：获取输入并判断是否为素数，如果是返回原数，否则返回1
int pri_num(int num)
{
	int i;
	int flag = 1;

	for(i = 2; i <= sqrt(num); i++)	// 判断是否为素数
	{
		if(num % i == 0)	// 如果不是就将flag置零，并结束循环
		{
			flag = 0;
			break;
		}
	}

	if(flag == 1)	// 如果是素数，返回原数
		return num;
	else			// 不是就返回1
		return 1;
}


int main()
{
	int number;
	int total = 0;
	int min,max;
	int i;

	printf("Enter numbers: ");
	scanf("%d%d", &min, &max); // 获取范围

	for(i = min; i <= max; i++)
	{
		number = pri_num(i);	// 判断是否为素数

		if(number != 1)			// 如果是素数就求和
			total += number;
	}

	printf("%d\n", total);

	return 0;
}