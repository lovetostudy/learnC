// ��Сֵ��λ��

#include <stdio.h>

int main()
{
	int a[100] = {0};
	int *p;
	int number;
	int counter = 0;
	int min_v;
	int index;
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
		counter++;		// ͳ����ֵ����
	}

	//�ж���Сֵ
	min_v = *p;
	for(i = 1; i < counter; i++)
	{
		if(min_v > *(p+i))	
		{
			min_v = *(p+i);	
			index = i;		// ��ȡ��Сֵ�±�
		}
	}

	printf("%d\n", index);

	return 0;
}