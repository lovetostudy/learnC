// ����洢

#include <stdio.h>

int main()
{
	int a[100] = {0};
	int b[100] = {0};
	int *p1;
	int *p2;
	int counter;
	int i;
	p1 = a;
	p2 = b;

	// ��ȡ����
	printf("Enter numbers: ");
	scanf("%d", &counter);		// ��ȡ��ֵ�ĸ���
	
	for(i = 0; i < counter; i++)	// ��ȡ��ֵ
		scanf("%d", (p1 + i));

	// ������a�����������b
	int j = counter - 1;
	for(i = 0; i < counter; i++)
	{
		p2[j] = p1[i];
		j--;
	}

	// �������b���±�Ϊ3�ı�����ֵ
	for(i = 0; i < counter; i++)
	{
		if(i % 3 == 0)
			printf("%5d", p2[i]);
	}

	printf("\n");

	return 0;
}