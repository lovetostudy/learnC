// É¾³ıÔªËØ

#include <stdio.h>

int main()
{
	int counter = 0;
	int number;
	int element;
	int i;
	int a[100];

	printf("Enter number: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);
		if(number == 0)
			break;

		a[i] = number;
		counter++;
	}
	
	scanf("%d", &element);

	for(i = 0; i < counter; i++)
	{
		if(a[i] == element)
			a[i] = 0;
	}

	for(i = 0; i < counter; i++)
	{
		if(a[i] == 0)
			continue;
		
		printf("%5d", a[i]);
	}

	printf("\n");

	return 0;
}