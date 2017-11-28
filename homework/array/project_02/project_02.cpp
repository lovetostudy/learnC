// ÄæĞò´æ´¢

#include <stdio.h>

int main()
{
	int a[100],b[100];
	int counter;
	int i;
	int j = 0;

	printf("Enter numbers: ");
	scanf("%d", &counter);

	for(i = 0; i < counter; i++)
		scanf("%d", &a[i]);

	for(i = counter - 1; i >= 0; i--)
	{
		b[j] = a[i];
		j++;
	}

	for(i = 0; i < counter; i++)
	{
		if(i % 3 == 0)
			printf("%d ", b[i]);
	}

	printf("\n");

	return 0;
}