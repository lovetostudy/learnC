// 阶乘

#include <stdio.h>
//factorial函数：输入数字并返回其阶乘
int factorial(int num)
{
	if(num < 2)		
		return 1;
	else
		return num * factorial(num - 1);
}


int main()
{
	int number;
	int counter;
	int numbers;
	int total = 0;
	int ave;
	int i;
	 
	printf("Enter numbers: ");
	scanf("%d", &counter);  // 获取个数

	// 获取输入并求和
	for(i = 0; i < counter; i++)
	{
		scanf("%d", &number);
		numbers = factorial(number);
		total += numbers;
	}

	ave = total / counter; // 求平均值

	printf("%d\n", ave);
		
	return 0;
}
