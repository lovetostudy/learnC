// ���ֵ

#include <stdio.h>

int main()
{
	int a[100] = {0};
	int *p;
	int counter = 0;
	int max_value = 0;
	int number;
	int i;
	p = a;

	// ��ȡ����	
	printf("Enter numbers: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);	
		if(number == 0)		// ��������
			break;
		*(p+i) = number;
		counter++;		// ͳ����ֵ�ĸ���
	}

	// �ж����ֵ
	for(i = 0; i < counter; i++)
	{
		if(max_value < *(p+i))
			max_value = *(p+i);
	}

	printf("%d\n", max_value);

	return 0;
}