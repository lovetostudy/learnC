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

	double number;
	int fib;
	double fib1;
	int i = 0;
	double total = 0;

	printf("Enter number: ");
	scanf("%lf", &number);	// ��ȡ����

	while(1)
	{
		fib = fibonacci(i);	  // ���i��fibonacci��
		fib1 = 1 / (double)fib;		  // ���䵹��

		if(fib1 < number)	  // ������־
			break;

		total += fib1;		// ���������
		i++;
	}

	
	printf("%.4lf\n", total);

	return 0;
}