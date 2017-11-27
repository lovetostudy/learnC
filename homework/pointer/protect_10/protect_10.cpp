// 素数

#include <stdio.h>
#include <math.h>

int main()
{
	int m,n;
	int i;
	int a[100];
	int *p;
	int counter = 0;
	p = a;

	// 获取m,n
	printf("Enter m and n: ");
	scanf("%d%d", &m, &n);
	
	// 将m,n之间的数放入数组a
	for(i = m; i <= n; i++)
	{
		*(p+counter) = i;
		counter++;
	}

	// 求素数：将非素数挖去（即用0覆盖原本的数）
	for(i = 2; i <= n; i++)
	{
		for(int k = 0; k < counter; k++)
		{
			if(*(p+k) == i)	// 检测一个数后结束的条件
				break;

			if(*(p+k) == 0)	// 遇到挖去的地方就跳过
				continue;

			if(*(p+k) % i == 0)	// 挖去非素数（用0覆盖）
				*(p+k) = 0;
		}
	}

	// 输出素数
	for(i = 0; i < counter; i++)
	{
		if(*(p+i)== 0)	// 跳过挖去的地方
			continue;
		
		printf("%5d", *(p+i));
	}

	printf("\n");

	return 0;
}