// �������

#include <stdio.h>

int main()
{
	int a[100] = {0};
	int *p;
	int counter;
	int i;
	p = a;

	// ��ȡ����
	printf("Enter numbers: ");
	scanf("%d", &counter);		// ��ȡ���������
	for(i = 0; i < counter; i++)	//  ��ȡ��ֵ
		scanf("%d", (p + i));


	// �жϲ����
	for(i = counter - 1; i >= 0; i--)	// �Ƿ�3����
	{
		if(p[i] % 3 == 0)
			printf("%5d", p[i]);
	}

	printf("\n");

	for(i = counter - 1; i >= 0; i--) // �±��Ƿ�3����
	{
		if(i % 3 == 0)
			printf("%5d", p[i]);
	}

	printf("\n");

	return 0;
}