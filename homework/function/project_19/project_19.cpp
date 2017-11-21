// 利用一个自定义函数解决完数和素数问题

#include <stdio.h>
#include <math.h>

// per_num函数：输入一个数，判断其是否为完数
bool per_num(int numb)
{
	int total = 0;
	int i;

	for(i = 1; i < numb; i++)	// 判断是否为完数
	{
		if(numb % i == 0)		// 求出本身外的因数之和
			total += i;
	}

	if(total == numb)			// 是完数则返回true
		return true;
	else						// 否则返回false
		return false;
}


int main()
{
	int m,n;
	int a[100] = {0};
	int i;
	int k = 0;
	bool is_per;

	printf("Enter numbers: ");
	scanf("%d%d", &m, &n);		// 获取数值

	for(i = 1; i <= n; i++)
	{
		is_per = per_num(i);	// 判断是否为完数

		if(is_per == true)			// 是完数则输出
			printf("%5d", i);
	}

	printf("\n");

	// 查找m,n之间的素数
	for(i = m; i <= n; i++)
	{
		int flag = 1;

		for(int j = 2; j <= sqrt(i); j++)	// 判断是否为素数
		{
			if(i % j == 0)					// 不是则结束
			{
				flag = 0;
				break;
			}
		}

		if(flag == 1)		// 输出素数
		{
			printf("%5d", i);
		}
	}

	printf("\n");

	return 0;
}