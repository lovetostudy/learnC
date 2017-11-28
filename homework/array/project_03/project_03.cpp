// Æ½¾ùÖµ

#include <stdio.h>

int main()
{
	double a[100];
	double number;
	double average;
	double total = 0;
	int counter = 0;
	int i;


	printf("Enter numbers: ");

	for(i = 0; i < 100; i++)
	{
		scanf("%lf", &number);
		
		if(number == 0)
			break;
		else
			a[i] = number;
		counter++;
	}

	for(i = 0; i < counter; i++)
		total += a[i];

	average = total / counter;

	printf("%.5lf\n", average);

	return 0;
}