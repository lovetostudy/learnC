// ����

#include <stdio.h>

int sort(int *p1, int count)
{
	int point = 0;	// ��������������ż����ʱ��λ��ʼ��
	int i,j;
	int t;

	// ð������
	for(i = 0; i < count; i++)
	{
		for(j = 0; j < count - i - 1; j++)
		{
			if(*(p1+j) > *(p1+j+1))
			{
				t = *(p1+j);
				*(p1+j) = *(p1+j+1);
				*(p1+j+1) = t;
			}
		}
	}

	// ������
	for(i = 0; i < count; i++)
	{
		if(*(p1+i) % 2 != 0)
		{
			t = *(p1+point);
			*(p1+point) = *(p1+i);
			*(p1+i) = t;
			point++;
		}
	}

	// ��ż��
	for(i = point; i < count; i++)
	{
		for(j = i; j < count - 1; j++)
		{
			if(*(p1+i) > *(p1+j+1))
			{
				t = *(p1+i);
				*(p1+i) = *(p1+j+1);
				*(p1+j+1) = t;
			}
		}
	}

	return 0;
}

int main()
{
	int a[100] = {0};
	int *p;
	int number;
	int counter = 0;
	int i;
	p = a;

	// ��ȡ����
	printf("Enter number: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);
		if(number == 0)		// ��������
			break;
		*(p+i) = number;
		counter++;
	}

	// ����
	sort(a, counter);

	// ��������Ľ��
	for(i = 0; i < counter; i++)
		printf("%5d", *(p+i));

	printf("\n");

	return 0;
}