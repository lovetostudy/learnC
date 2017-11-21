// 累加和

#include <stdio.h>

// accumulation函数：输入一个数并返回其累加和
int accumulation(int number)
{
	int total = 0;

	for(int i = 1; i <= number; i++)	// 求累加和
		total += i;

	return total;
}


int main()
{
	int num1,num2;
	int total = 0;
	
	printf("Enter numbers: ");
	scanf("%d%d", &num1, &num2);	// 获取输入

	num1 = accumulation(num1);		// 求累加和
	num2 = accumulation(num2);
	total = num1 + num2;			// 求两个累加和的和

	printf("%d\n", total);

	return 0;
}