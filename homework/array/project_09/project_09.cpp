// ì³²¨ÄÇÆõÊıÁĞ

#include <stdio.h>

int fibo(int n);

int main()
{
	int a[100];
	int number;
	int i;
	
	printf("Enter number: ");
	scanf("%d", &number);

	for(i = 0; i < number; i++)
	{
		a[i] = fibo(i);
	}

	for(i = 0; i < number; i++)
	{
		if(a[i] % 3 == 2)
			printf("%5d", a[i]);
	}

	printf("\n");

	return 0;
}

int fibo(int n)
{
	if(n < 3)
		return 1;
	else
		return fibo(n - 1) + fibo(n - 2);
}
