// �������

#include <stdio.h>

// insert����������һ������������a�Լ�Ҫ����������޸ĳ�����Ĳ�����������
int insert(int *p1, int n, int num)
{
	int i;
	int index;	// �������±�

	// ��λ�������±�
	for(i = 0; i < n; i++)
	{
		if(num > *(p1+i))
		{
			index = i;
			break;
		}
	}
	
	// ����
	for(i = n; i > index; i--)	// ��������Լ�����������ƶ�
		*(p1+i) = *(p1+i-1);	
	*(p1+index) = num;		// ��Ҫ�����������������

	return 0;
}

int main()
{
	int counter;
	int number;
	int i;
	int a[100];
	int *p;
	p = a;

	// ��ȡ����
	printf("Enter number: ");
	scanf("%d", &counter);		// �������ĸ���
	for(i = 0; i < counter; i++)	// ������������a��
		scanf("%d", p+i);
	scanf("%d", &number);		// Ҫ�������

	// ð������(�Ӵ�С)
	for(i = 0; i < counter; i++)
	{
		for(int j = 0; j < counter - i - 1; j++)
		{
			if(*(p+j) < *(p+j+1))
			{
				int t;
				t = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = t;
			}
		}
	}
	
	// ����
	insert(a, counter, number);	

	// �������������a
	for(i = 0; i <= counter; i++)
		printf("%5d", *(p+i));

	printf("\n");

	return 0;
}

