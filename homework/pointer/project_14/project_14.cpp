// ɾ��Ԫ��

#include <stdio.h>

int main()
{
	int counter = 0;
	int number;
	int element;
	int i;
	int a[100] = {0};
	int *p;
	p = a;

	// ��ȡ����
	printf("Enter number: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);
		if(number == 0)		// ��������
			break;
		*(p+i) = number;		// �����������������a��
		counter++;			// ͳ����������ĸ���
	}
	scanf("%d", &element);	// ����Ҫɾ����Ԫ��

	// ɾ��
	for(i = 0; i < counter; i++)
	{
		if(*(p+i) == element)	// ��Ҫɾ��Ԫ�غ����ȫ��ǰ��һλ�Ը���Ҫɾ������
		{
			for(int j = i; j <counter; j++)
				*(p+j) = *(p+j+1);
			counter--;		 // ������������һ
		}
	}

	// ���ɾ��Ԫ�غ����
	for(i = 0; i < counter; i++)
		printf("%5d", *(p+i));

	printf("\n");

	return 0;
}