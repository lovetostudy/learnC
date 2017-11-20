// 最小公倍数之和

#include <stdio.h>

// com_mul函数：输入一对数，返回他们的最小公倍数
int com_nul(int nu1, int nu2)
{
	int i;

	for(
int main()
{
	int number;
	int num1,num2,num3;
	int i;
	int total = 0;

	printf("Enter numbers: ");
	scanf("%d", &number);	// 获取数的对数

	for(i = 0; i < number; i++)
	{
		scanf("%d%d", &num1,&num2);
		num3 = com_mul(num1, num2);	// 获取最小公倍数
		total += num3;		// 最小公倍数求和
	}

	printf("%d\n", total);

	return 0;
}