// 最大公约数

#include <stdio.h>

//com_div函数：输入两个数并返回其最大公约数
int com_div(int numb1, int numb2)
{
	int i;
	int min_v = numb1;
	int max_val = 0;

	// 将较小的数作为循环限定条件
	if(min_v > numb2)
		min_v = numb2;

	// 查找最大公约数
	for(i = 2; i < min_v; i++)
	{
		if(numb1 % i == 0 && numb2 % i == 0 && i > max_val)
			max_val = i;
	}

	return max_val;
}


int main()
{
	int counter;
	int num1,num2;
	int number;
	int total = 0;
	int i;

	printf("Enter numbers: ");
	scanf("%d", &counter);	// 获取对数

	// 获取输入并得到最大公约数之和
	for(i = 0; i < counter; i++)
	{
		scanf("%d%d", &num1, &num2);
		number = com_div(num1, num2);
		total += number;
	}

	printf("%d\n", total);

	return 0;
}