// ÊıÎ»¼ÆËã

#include <stdio.h>

int main()
{
	int number;
	int i;

	printf("Enter numbers: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);
		if(number == 0)
			break;
		num = add(number);
		if(num % 2 != 1)
			printf("%5d", number);
	}

	printf("\n");

	return 0;
}