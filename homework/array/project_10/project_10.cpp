// ËØÊı

#include <stdio.h>
#include <math.h>

int main()
{
	int m,n;
	int i;
	int a[100];
	int j = 0;

	printf("Enter m and n: ");
	scanf("%d%d", &m, &n);

	for(i = m; i <= n; i++)
	{
		a[j] = i;
		j++;
	}

	for(i = 2; i <= n; i++)
	{
		for(int k = 0; k < j; k++)
		{
			if(a[k] == i)
				break;

			if(a[k] == 0)
				continue;

			if(a[k] % i == 0)
				a[k] = 0;
		}
	}

	for(i = 0; i < j; i++)
	{
		if(a[i] == 0)
			continue;
		
		printf("%5d", a[i]);
	}

	printf("\n");

	return 0;
}