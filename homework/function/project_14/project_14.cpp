// 数值计算

#include <stdio.h>
#include <math.h>

// add函数：输入数值和位数n, 返回一个n位相同的数值
int add(int numb, int bit)
{
	int i;
	int total = 0;

	// 计算数值的n位数
	for(i = 0; i < bit; i++)
		total += int(numb * pow(10, i));

	return total;
}


int main()
{
	int number, bits;
	int total = 0;
	int num1;
	int i;
	
	printf("Enter numbers: ");
	scanf("%d%d", &number, &bits);	// 获取数值和位数
	
	for(i = 1; i <= bits; i++)
	{
		num1 = add(number, i);		// 求位数
		total += num1;
	}

	printf("%d\n", total);

	return 0;
}