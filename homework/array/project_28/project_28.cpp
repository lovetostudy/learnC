// Æ½¾ùÖµ

#include <stdio.h>

double aver(int arr[], int n);

int main()
{
	int a[100];
	int number;
	int i;
	double ave;
	int counter = 0;

	printf("Enter number: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);
		if(number == 0)
			break;

		a[i] = number;
		counter++;
	}

	ave = aver(a, counter);

	printf("%.1lf\n", ave);

	return 0;
}

double aver(int arr[], int n)
{
	double total = 0;
	double avere;

	for(int i =0; i < n; i++)
		total += arr[i];

	avere = total / n;

	return avere;
}