// 最小值的位置

#include <stdio.h>

int main()
{
	int a[100];
	int counter = 0;
	int number;
	int i;
	int index;
	int min_value;

	printf("Enter numbers: ");

	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);

		if(number == 0)
			break;

		a[i] = number;
		counter++;
	}
	
	min_value = a[0];

	for(i = 0; i < counter; i++)
	{
		if(min_value > a[i])
		{
			min_value = a[i];
			index = i;
		}
	}

	printf("%d\n", index);

	return 0;
}