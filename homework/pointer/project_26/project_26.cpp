// �����ܱ�Ԫ��

#include <stdio.h>

int main()
{
	int a[5][5];
	int (*p)[5];
	int total = 0;
	int i,j;
	p = a;

	// ��ȡ����
	printf("Enter numbers:\n");
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)		// ��ȡ����
			scanf("%d", &a[i][j]);
	}
	
	// ������ܱ�Ԫ��֮��
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(i == 0 || i == 4)
			{
				total += *(*(p+i)+j);
				continue;
			}

			if(j == 0 || j == 4) 
				total += *(*(p+i)+j);
		}
	}

	printf("%d\n", total);

	return 0;
}