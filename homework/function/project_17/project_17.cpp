// 数根问题递归求解

#include <stdio.h>

// roots函数：输入数值，返回其数根
int roots(int numb)
{
	if(numb < 10)		// 若<10, 则其为数根，返回它
		return numb;
	else				// 否则，将各个位相加并求数根
	{
		int total = 0;
		int numb1;

		for(int i = 0; i < 100; i++)	// 求数位和
		{
			if(numb < 10)
			{
				total += numb;
				break;
			}
			numb1 = numb % 10;
			numb = numb / 10;
			total += numb1;
		}

		return roots(total);					// 求数根
	}
}


int main()
{
	int number;
	int counter;
	int i;

	printf("Enter numbers: ");
	scanf("%d", &counter);		// 获取程序计数器
	for(i = 0; i < counter; i++)
	{
		scanf("%d", &number);		// 获取数值
		number = roots(number);		// 求数根
		printf("%5d", number);
	}

	printf("\n");

	return 0;
}