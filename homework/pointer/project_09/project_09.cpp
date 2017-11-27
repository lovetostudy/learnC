// 斐波那契数列

#include <stdio.h>

// fibonacci函数：输入一个数n，返回第n项的斐波那契数列的数
int fibonacci(int count)
{
	if(count < 3)
		return 1;
	else
		return fibonacci(count - 1) + fibonacci(count - 2);
}

int main()
{
	int a[100] = {0};
	int *p;
	int counter;
	int i;
	p = a;

	// 获取个数的数值
	printf("Enter number: ");
	scanf("%d", &counter);

	// 将斐波那契数列的前counter项放入数组a中
	for(i = 0; i < counter; i++)
		*(p+i) = fibonacci(i);

	// 输出对3求余后余2的数
	for(i = 0; i < counter; i++)
	{
		if(*(p+i) % 3 == 2)
			printf("%5d", *(p+i));
	}

	printf("\n");

	return 0;
}