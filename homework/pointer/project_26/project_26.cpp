// 矩阵周边元素

#include <stdio.h>

int main()
{
	int a[5][5];
	int (*p)[5];
	int total = 0;
	int i,j;
	p = a;

	// 获取输入
	printf("Enter numbers:\n");
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)		// 获取矩阵
			scanf("%d", &a[i][j]);
	}
	
	// 求矩阵周边元素之和
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(i == 0 || i == 4)
			{
				total += *(*(p+i)+j);
				continue;
			}

			if(j == 0 || j == 4) 
				total += *(*(p+i)+j);
		}
	}

	printf("%d\n", total);

	return 0;
}