// fibonacci���е������

#include <stdio.h>

// fibonacci������������ֵ���ص���ֵλ��fibonacci��
int fibonacci(int n)
{
	if(n < 2)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{

	int number;
	int fib;
	double fib1;
	int i;
	double total = 0;

	printf("Enter number: ");
	scanf("%d", &number);

	for(i = 1; i < 20; i++)
	{
		fib = fibonacci(i);
		fib1 = 1 / (double)fib;	
		printf("%lf\n", fib1);
		total += fib1;

		if(fib1 < number)
			break;
	
		
	}
/*
	while(1)
	{
		fib = fibonacci(i);	  // ���i��fibonacci��
		printf("%d\n", fib);
		fib1 = 1 / (double)fib;		  // ���䵹��
		if(fib < number)	  // ������־
			break;
		total += fib;
		i++;
		printf("%5d", fib);
	}

*/	
	

	return 0;
}