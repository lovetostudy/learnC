// ƽ��ֵ

#include <stdio.h>

// aver�������������飬������ƽ��ֵ
double aver(int *p, int n)
{
	double total = 0;
	double avere;

	for(int i =0; i < n; i++)
		total += *(p+i);	// ������Ԫ��֮��

	avere = total / n;		// ��ƽ��ֵ

	return avere;			// ����ƽ��ֵ
}

int main()
{
	int a[100];
	int *po;
	int number;
	int i;
	double ave;
	int counter = 0;
	po = a;

	// ��ȡ����
	printf("Enter number: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);
		if(number == 0)		// ��������
			break;

		*(po+i) = number;		// �����ַ�������a��
		counter++;			// ͳ����ֵ�ĸ���
	}

	// ����ƽ��ֵ
	ave = aver(a, counter);

	// ���ƽ��ֵ
	printf("%.1lf\n", ave);

	return 0;
}

