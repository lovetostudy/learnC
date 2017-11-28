// É¾³ı

#include <stdio.h>

int main()
{
	int counter = 0;
	int number;
	int a[100];
	int i;
	int index;

	printf("Enter number: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);
		
		if(number == 0)
			break;

		a[i] = number;
		counter++;
	}

	scanf("%d", &index);
	if(index > counter)
	{
		printf("Out of range!\n");
	}else
	{
		
		for(i = index; i <counter; i++)
			a[i] = a[i+1];
		
		counter--;
		
		for(i = 0; i < counter; i++)
			printf("%5d", a[i]);
		
		printf("\n");
	}

	return 0;
}