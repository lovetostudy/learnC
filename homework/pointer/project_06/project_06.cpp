// ����

#include <stdio.h>

int main()
{
	int a[100] = {0};
	int *p;
	int number;
	int counter = 0;
	int i,j;
	p = a;

	// ��ȡ����
	printf("Enter numbers: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);
		if(number == 0)		// ��������
			break;
		*(p+i) = number;
		counter++;		// ͳ����ֵ����
	}

	// ð������
	for(i = 0; i < counter; i++)
	{
		for(j = i; j < counter - 1; j++)
		{
			int t;
			if(*(p+j) > *(p+j+1))
			{
				t = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = t;
			}
		}
	}

	// ��������Ľ��
	for(i = 0; i < counter; i++)
		printf("%5d", *(p+i));

	printf("\n");

	return 0;
}