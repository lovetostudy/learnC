// ���ݲ���

#include <stdio.h>

int main()
{
	int a[100];
	int *p;
	int counter = 0;
	int i;
	int index;
	int number;
	int numbers;
	p = a;

	// ��ȡ����
	printf("Enter numbers: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &numbers);
		if(numbers == 0)		// ��������
			break;

		*(p+i) = numbers;			// �����������������a��
		counter++;				// ͳ������ĸ���
	}
	scanf("%d%d", &index, &number);		// ����������±��Լ�Ҫ�������

	// ����
	for(i = counter; i > index; i--)		// �������λ�ü�������������
		*(p+i) = *(p+i-1);
	*(p+index) = number;				// ����������������

	// �������������
	for(i = 0; i <= counter; i++)
		printf("%5d", *(p+i));

	printf("\n");

	return 0;
}