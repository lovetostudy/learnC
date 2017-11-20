// 数位计算

#include <stdio.h>

// add函数: 获取输入返回其数位之和
int add(int numb)
{
	int i;
	int total = 0;
	int num1;

	for(i = 0; i < 100; i++)
	{
		if(numb < 10) // 只有一位数时结束
		{
			total += numb;
			break;
		}

		num1 = numb % 10;	// 求数位之和
		numb = numb / 10;
		total += num1;
	}

	return total;
}


int main()
{
	int number;
	int tal;
	int i;

	printf("Enter number: ");
	for(i = 0; i< 100; i++)
	{
		scanf("%d", &number); // 获取输入
		if(number == 0)			// 结束标志
			break;
		tal = add(number);			// 求和
		if(tal % 2 != 0)		// 判断是否为奇数
			printf("%5d", number);
	}

	printf("\n");

	return 0;
}