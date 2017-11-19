// Fibonacci����

#include <stdio.h>

// fib����������һ���������������Ӧ����
int fib(int num)
{
	if(num < 3)
		return 1;
	else
		return fib(num - 1) + fib(num - 2);
}


int main()
{
	int m,n;
	int number;
	int i;

	printf("Enter m and n(1 <= m,n < 10000): ");
	scanf("%d%d", &m,&n);

	// ��ȡ���벢�ж�
	for(i = 1; i != 0; i++)
	{
		number = fib(i);

		if(number > m)
		{
			if(number < n)
				printf("%5d", number);
		}

		if(number > n)
			break;
	}

	printf("\n");

	return 0;
}