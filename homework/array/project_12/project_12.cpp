// ÓĞĞò²åÈë

#include <stdio.h>

int sort(int a[], int n, int number);

int main()
{
	int counter;
	int number;
	int i;
	int a[100];

	printf("Enter number: ");
	scanf("%d", &counter);

	for(i = 0; i < counter; i++)
		scanf("%d", &a[i]);

	for(i = 0; i < counter; i++)
	{
		for(int j = i; j < counter; j++)
		{
			if(a[i] < a[j])
			{
				int t;
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	
	scanf("%d", &number);
	sort(a, counter, number);

	for(i = 0; i <= counter; i++)
		printf("%5d", a[i]);

	printf("\n");

	return 0;
}

int sort(int a[], int n, int number)
{
	int i;
	int index;

	for(i = 0; i < n; i++)
	{
		if(number > a[i])
		{
			index = i;
			break;
		}
	}
	
	for(i = n; i > index; i--)
		a[i] = a[i-1];
	
	a[index] = number;

	return 0;
}