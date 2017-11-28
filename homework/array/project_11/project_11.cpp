// Êı¾İ²åÈë

#include <stdio.h>

int main()
{
	int a[100];
	int counter = 0;
	int i;
	int index;
	int number;
	int numbers;

	printf("Enter numbers: ");
	
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &numbers);

		if(numbers == 0)
			break;

		a[i] = numbers;
		counter++;
	}

	scanf("%d%d", &index, &number);

	for(i = counter; i > index; i--)
		a[i] = a[i - 1];

	a[index] = number;

	for(i = 0; i <= counter; i++)
		printf("%5d", a[i]);

	printf("\n");

	return 0;
}