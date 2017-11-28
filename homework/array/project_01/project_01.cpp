// ÄæĞòÊä³ö

#include <stdio.h>

int main()
{
	int a[100];
	int counter;
	int i;

	printf("Enter numbers: ");
	scanf("%d", &counter);

	for(i = 0; i < counter; i++)
		scanf("%d", &a[i]);
	
	for(i = counter - 1; i >= 0; i--)
	{
		if(a[i] % 3 == 0)
			printf("%5d", a[i]);
	}
	
	printf("\n");

	for(i = counter; i >= 0; i--)
	{
		if(i % 3 == 0)
			printf("%5d", a[i]);
	}
	
	printf("\n");

	return 0;
}
