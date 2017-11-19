// 素数

#include <stdio.h>
#include <math.h>

// prime_num函数：输入一个整型数组，返回其中素数的个数
int prime_num(int a[], int n)
{
	int i,j;
	int number = 0; // 素数的个数
	int flag;

	for(i = 0; i < n; i++)
	{
		flag = 1;

		for(j = 2; j <= sqrt(a[i]); j++)
		{
			if(a[i] % j == 0)
			{
				flag = 0;
				break;
			}
		}

		if(flag == 1)
			number++;
	}

	return number;
}


int main()
{
	int a[10] = {0};
	int number;
	int i;
	int result;

	printf("Enter number: ");
	scanf("%d", &number);

	for(i = 0; i < number; i++)
		scanf("%d", &a[i]);

	result = prime_num(a, number);

	printf("%d\n", result);

	return 0;
}