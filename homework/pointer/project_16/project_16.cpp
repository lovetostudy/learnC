// �Խ���Ԫ��֮��

#include <stdio.h>

int main()
{
	int a[5][5];
	int (*p)[5];
	int total = 0;
	int i,j;
	p = a;

	// ��ȡ����
	printf("Enter number:\n");
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)		// ����ֵ��������a
			scanf("%d", &a[i][j]);
	}

	// ���
	for(i = 0; i < 5; i++)
	{
		// �������Խ���֮��
		for(j = 0; j < 5; j++)
		{
			if(i == j)
				total += *(*(p+i)+j);
			if((i + j) == 4)
				total += *(*(p+i)+j);
		}
	}
	total -= *(*(p+2)+2);	// ��ȥ��ӵ�����Ԫ��

	printf("%d\n", total);

	return 0;
}