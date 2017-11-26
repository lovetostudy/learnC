// 逆序输出

#include <stdio.h>

int main()
{
	int a[100] = {0};
	int *p;
	int counter;
	int i;
	p = a;

	// 获取输入
	printf("Enter numbers: ");
	scanf("%d", &counter);		// 获取程序计数器
	for(i = 0; i < counter; i++)	//  获取数值
		scanf("%d", (p + i));


	// 判断并输出
	for(i = counter - 1; i >= 0; i--)	// 是否被3整除
	{
		if(p[i] % 3 == 0)
			printf("%5d", p[i]);
	}

	printf("\n");

	for(i = counter - 1; i >= 0; i--) // 下标是否被3整除
	{
		if(i % 3 == 0)
			printf("%5d", p[i]);
	}

	printf("\n");

	return 0;
}