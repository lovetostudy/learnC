// ����

#include <stdio.h>

int main()
{
	int a[3][4];
	int (*p1)[4];
	int row[100] = {0};
	int *p2;
	int i,j;
	p1 = a;
	p2 = row;

	// ��ȡ����
	printf("Enter number:\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
			scanf("%d", &a[i][j]);	// ��������������ά����a��
	}
	
	// �����Ԫ��֮��
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
			*(p2+i) += *(*(p1+i)+j);	// ���ͷ�������row��
	}

	// ������
	for(i = 0; i < 3; i++)
		printf("%5d", *(p2+i));

	printf("\n");

	return 0;
}