// 쳲���������

#include <stdio.h>

// fibonacci����������һ����n�����ص�n���쳲��������е���
int fibonacci(int count)
{
	if(count < 3)
		return 1;
	else
		return fibonacci(count - 1) + fibonacci(count - 2);
}

int main()
{
	int a[100] = {0};
	int *p;
	int counter;
	int i;
	p = a;

	// ��ȡ��������ֵ
	printf("Enter number: ");
	scanf("%d", &counter);

	// ��쳲��������е�ǰcounter���������a��
	for(i = 0; i < counter; i++)
		*(p+i) = fibonacci(i);

	// �����3�������2����
	for(i = 0; i < counter; i++)
	{
		if(*(p+i) % 3 == 2)
			printf("%5d", *(p+i));
	}

	printf("\n");

	return 0;
}