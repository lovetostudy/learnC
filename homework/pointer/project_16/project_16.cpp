// 对角线元素之和

#include <stdio.h>

int main()
{
	int a[5][5];
	int (*p)[5];
	int total = 0;
	int i,j;
	p = a;

	// 获取输入
	printf("Enter number:\n");
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)		// 将数值放入数组a
			scanf("%d", &a[i][j]);
	}

	// 求和
	for(i = 0; i < 5; i++)
	{
		// 求两条对角线之和
		for(j = 0; j < 5; j++)
		{
			if(i == j)
				total += *(*(p+i)+j);
			if((i + j) == 4)
				total += *(*(p+i)+j);
		}
	}
	total -= *(*(p+2)+2);	// 减去多加的中心元素

	printf("%d\n", total);

	return 0;
}