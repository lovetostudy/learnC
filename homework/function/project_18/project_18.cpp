// 

#include <stdio.h>

// is_odd函数：输入一个数，判断奇偶，若是奇数，返回true，否则返回false
bool is_odd(int number)
{
	if(number % 2 == 0)	// 判断奇偶，偶数返回false
		return false;
	else				// 否则返回true
		return true;
}


int main()
{
	int number;
	int counter = 0;
	int is_bool;
	int i;

	printf("Enter number: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);	// 获取数值
		if(number == 0)			// 结束条件
			break;

		is_bool = is_odd(number);	// 判断奇偶

		if(is_bool == true)			// 奇数则输出
		{
			printf("%5d", number);
			counter++;				// 计算奇数的个数
		}	
	}

	printf("    个数：%d\n", counter);

	return 0;
}