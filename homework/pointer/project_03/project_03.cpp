// ƽ��ֵ

#include <stdio.h>

int main()
{
	int a[100] = {0};
	int *p;
	int number;
	int counter = 0;
	int i;
	p = a;

	// ��ȡ����
	printf("Enter number(0 to end): ");
	for(i = 0; i < 100; i++)	// ��ȡ��ֵ
	{
		scanf("%d", &number);
		if(number == 0)		// ��������
			break;
		*(p+i) = number;
		counter++;		// ͳ����ֵ�ĸ���
	}

	// ���
	double total = 0;
	for(i = 0; i < counter; i++)
		total += p[i];

	// ��ƽ��ֵ�����
	double ave;
	ave = total / counter;
	printf("%.5lf\n", ave);

	return 0;
}