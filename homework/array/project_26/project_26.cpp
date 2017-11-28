// 矩阵周边元素

#include <stdio.h>

int main()
{
	int a[5][5];
	int total = 0;
	int i,j;

	printf("Enter numbers:\n");
	
	// 获取矩阵
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
			scanf("%d", &a[i][j]);
	}
	
	// 求矩阵周边元素之和
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(i == 0 || i == 4)
			{
				total += a[i][j];
				continue;
			}
			if(j == 0 || j == 4) 
				total += a[i][j];
		}
	}

	printf("%d\n", total);

	return 0;
}