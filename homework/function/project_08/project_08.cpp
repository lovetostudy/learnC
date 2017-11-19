// 幂函数

#include <stdio.h>

// power函数：输入底数和幂返回其n次幂
double power(double num, int po)
{
	if(po == 1)
		return num;
	else
		return num * power(num, po - 1);
}


int main()
{
	double number;
	int powe;

	printf("Enter numbers: ");
	scanf("%lf%d", &number, &powe);  // 获取底数和幂

	number = power(number, powe);  

	printf("%.3lf\n", number);

	return 0;
}