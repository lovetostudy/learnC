// ¾ØÕó

#include <stdio.h>

int main()
{
	int a[3][4];
	int row[100] = {0};
	int i,j;
	
	printf("Enter number:\n");

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
			scanf("%d", &a[i][j]);
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
			row[i] += a[i][j];
	}

	for(i = 0; i < 3; i++)
		printf("%5d", row[i]);

	printf("\n");

	return 0;
}