// ��λ��

#include <stdio.h>

int main()
{
	int a[100] = {0};
	int *p;
	int number;
	int counter = 0;
	double mid;
	double total;
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
		for(j = 0; j < counter - i - 1; j++)
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

	// ����λ��
	if(counter % 2 == 0)	// ��Ϊż������
	{
		total = *(p + counter / 2) + *(p + counter / 2 -1);
		mid = total / 2;
	}else					// ��Ϊ��������
		mid = *(p + counter / 2);

	printf("%.1lf\n", mid);

	return 0;
}