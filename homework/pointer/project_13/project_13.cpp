// ɾ��

#include <stdio.h>

int main()
{
	int counter = 0;
	int number;
	int a[100];
	int *p;
	int i;
	int index;
	p = a;

	// ��ȡ����
	printf("Enter number: ");
	for(i = 0; i < 100; i++)	
	{
		scanf("%d", &number);		
		if(number == 0)		// ��������
			break;
		*(p+i) = number;		// ������������a��
		counter++;		// ͳ����ֵ�ĸ���
	}
	scanf("%d", &index);	 // Ҫɾ�������±�

	// ɾ��
	if(index > counter)		// �ж�λ���Ƿ�Ϸ�
	{
		printf("Out of range!\n");
	}else
	{	
		for(i = index; i <counter; i++)	// ��Ҫɾ���±�����ǰ��
			*(p+i) = *(p+i+1);	
		counter--;		// ���ĸ�����һ
		
		// ���ɾ���������
		for(i = 0; i < counter; i++)
			printf("%5d", *(p+i));
		
		printf("\n");
	}

	return 0;
}