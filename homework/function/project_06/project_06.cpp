// 小牛问题

#include <stdio.h>

// cow函数：输入年数，返回母牛数
int cow(int ye)
{
	if(ye < 4)
		return 1;
	else
		return cow(ye - 1) + cow(ye -3);
}


int main()
{
	int year;
	int numbers;
	int i;

	printf("Enter year: ");	
	scanf("%d", &year);		// 获取年份

	numbers = cow(year);   // 求牛的数量

	printf("%d\n", numbers);

	return 0;
}
