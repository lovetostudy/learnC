// fibonacci数列倒数求和

#include <stdio.h>

// fibonacci函数：输入数值返回第数值位的fibonacci数
int fibonacci(int n)
{
	if(n < 2)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{

	double number;
	int fib;
	double fib1;
	int i = 0;
	double total = 0;

	printf("Enter number: ");
	scanf("%lf", &number);	// 获取输入

	while(1)
	{
		fib = fibonacci(i);	  // 求第i个fibonacci数
		fib1 = 1 / (double)fib;		  // 求其倒数

		if(fib1 < number)	  // 结束标志
			break;

		total += fib1;		// 将倒数相加
		i++;
	}

	
	printf("%.4lf\n", total);

	return 0;
}