// 鞍点

#include <stdio.h>

int main()
{
	
	int a[5][5];
	int (*p1)[5];
	int b[10];
	int *p2;
	int point = 0;
	int row;
	int flag;
	int i,j;	
	int counter = 0;
	p1 = a;
	p2 = b;

	// 获取输入
	printf("Enter number:\n");
	for(i = 0; i < 5; i++)
	{	
		for(j = 0; j < 5; j++)
			scanf("%d", &a[i][j]);	 // 将数值放入数组a中
	}

	// 判断鞍点
	for(i = 0; i < 5; i++)
	{	
		flag = 1;		// 假设有鞍点
	
		for(j = 0; j < 5; j++)	// 寻找一行中的最大值
		{
			if(point < *(*(p1+i)+j))
			{
				point = *(*(p1+i)+j);	// 获取一行中的最大值
				row = j;			// 最大值的列下标
			}
		}
		
		for(int k = 1; k < 5; k++)	// 判断行的最大值是否是列中的最小值
		{
			if(point < *(*(p1+k)+row))	// 若该最大值小于列中的其他值则跳过
				continue;
			else			
			{
				flag = 0;		// 否则就不是鞍点
				break;			// 结束
			}
		}
	
		if(flag == 1)
		{
			*(p2+counter) = point;		// 将鞍点放入数组b中
			counter++;		// 统计鞍点个数
		}
	}

	//输出
	for(i = 0; i < counter; i++)
		printf("%5d", *(p2+i));

	printf("\n");

	return 0;
}