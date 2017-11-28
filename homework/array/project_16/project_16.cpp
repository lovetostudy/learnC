// 对角线元素之和

#include <stdio.h>

int main()
{
	int a[5][5];
	int total = 0;
	int i,j;

	printf("Enter number:\n");
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
			scanf("%d", &a[i][j]);
	}

	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(i == j)
				total += a[i][j];
			if((i + j) == 4)
				total += a[i][j];
		}
	}

	total -= a[2][2];

	printf("%d\n", total);

	return 0;
}