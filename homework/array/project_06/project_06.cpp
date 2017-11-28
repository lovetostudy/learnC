// ÅÅĞò

#include <stdio.h>

int main()
{
	int a[100];
	int counter = 0;
	int number;
	int i;

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

	for(i = 0; i < counter; i++)
		printf("%5d", a[i]);

	printf("\n");

	return 0;
}