// ×î´óÖµ

#include <stdio.h>

int main()
{
	int a[100];
	int counter = 0;
	int number;
	int max_value = 0;
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
		if(max_value < a[i])
			max_value = a[i];
	}

	printf("%d\n", max_value);

	return 0;
}