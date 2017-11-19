// 因数个数之和

#include <stdio.h>

// add_num函数：输入数字，返回其因数个数
int add_num(int number)
{
	int i;
	int numbers = 0;
	
	// 计算输入数字的因数的个数
	for(i = 1; i <= number; i++)
	{
		if(number % i == 0)
			numbers++;
	}

	return numbers;
}


int main()
{
	int number;
	int numbers;
	int total = 0;
	int i;

	printf("Enter number: ");
	scanf("%d", &number);		// 获取要输入的数的个数

	for(i = 0; i < number; i++)
	{
		scanf("%d", &numbers);		// 获取数
		numbers = add_num(numbers); // 调用add_num函数获取因数个数
		total += numbers; 
	}
	
	printf("%d\n", total);

	return 0;
}