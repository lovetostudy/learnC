// °°µã

#include <stdio.h>

int main()
{
	int point = 0;
	int a[5][5];
	int i,j;
	int row;
	int flag;
	int b[10];
	int c = 0;

	printf("Enter number:\n");
	for(i = 0; i < 5; i++)
	{	
		for(j = 0; j < 5; j++)
			scanf("%d", &a[i][j]);
	}

	for(i = 0; i < 5; i++)
	{	
		int flag = 1;

		for(j = 0; j < 5; j++)
		{
			if(point < a[i][j])
			{
				point = a[i][j];
				row = j;
			}
		}

		for(int k = 1; k < 5; k++)
		{
			if(point < a[k][row])
				continue;
			else
			{
				flag = 0;
				break;
			}
		}

		if(flag == 1)
		{
			b[c] = point;
			c++;
		}
	}

	for(i = 0; i < c; i++)
		printf("%5d", b[i]);

	printf("\n");

	return 0;
}