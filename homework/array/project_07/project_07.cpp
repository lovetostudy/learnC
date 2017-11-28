// ÖĞÎ»Êı

#include <stdio.h>

int main()
{
	int a[100];
	int counter = 0;
	int number;
	int i;
	int index;
	double mid;

	printf("Enter numbers: ");

	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);

		if(number == 0)
			break;

		a[i] = number;
		counter++;
	}

	for(i = 0; i < counter; i++)
	{
		for(int j = i + 1; j < counter; j++)
		{
			if(a[i] > a[j])
			{
				int t;
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}

	if(counter % 2 != 0)
	{	
		index = counter / 2 + 1;
		printf("%d\n", a[index]);
	}else
	{
		index = counter / 2;
		mid = (double)(a[index] + a[index - 1]) / 2;
		printf("%.1lf\n", mid);
	}
		
	return 0;
}