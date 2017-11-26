// 逆序存储

#include <stdio.h>

int main()
{
	int a[100] = {0};
	int b[100] = {0};
	int *p1;
	int *p2;
	int counter;
	int i;
	p1 = a;
	p2 = b;

	// 获取输入
	printf("Enter numbers: ");
	scanf("%d", &counter);		// 获取数值的个数
	
	for(i = 0; i < counter; i++)	// 获取数值
		scanf("%d", (p1 + i));

	// 将数组a逆序放入数组b
	int j = counter - 1;
	for(i = 0; i < counter; i++)
	{
		p2[j] = p1[i];
		j--;
	}

	// 输出数组b中下标为3的倍数的值
	for(i = 0; i < counter; i++)
	{
		if(i % 3 == 0)
			printf("%5d", p2[i]);
	}

	printf("\n");

	return 0;
}