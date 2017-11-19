// 幂函数

#include <stdio.h>

// power函数：获取底数和幂并返回其n次幂
int power(int num, int po)
{
	if(po == 1)
		return num;
	else
		return num * power(num, po - 1);
}


int main()
{
	int counter;
	int number;
	int powe;
	int total = 0;
	int i;

	printf("Enter numbers: ");
	scanf("%d%d", &counter, &powe); // 获取底数和幂

	// 计算1^k+2^k+……+n^k之和
	for(i = 1; i <= counter; i++)		
		total += power(i, powe);

	printf("%d\n", total);

	return 0;
}