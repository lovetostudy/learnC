// ÅÅĞò

#include <stdio.h>

int sort(int a[], int n);

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

	sort(a, counter);

	for(i = 0; i < counter; i++)
		printf("%5d", a[i]);

	printf("\n");

	return 0;
}

// ÅÅĞòº¯Êı
int sort(int a[], int n)
{
	int k = 0;
	int i,j;
	int t;

	for(i = 0; i < n; i++) // ÕûÌåÅÅĞò
	{
		for(j = i + 1; j < n; j++)
		{
			if(a[i] > a[j])
			{
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}

	for(i = 0; i < n; i++) // ÅÅÆæÊı
	{
		if(a[i] % 2 != 0)
		{
			t = a[k];
			a[k] = a[i];
			a[i] = t;
			k++;
		}
	}

	for(i = k; i < n; i++) // ÅÅÅ¼Êı
	{
		for(j = i + 1; j < n; j++)
		{
			if(a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}

	return 0;
}