// ����

#include <stdio.h>

int main()
{
	
	int a[5][5];
	int (*p1)[5];
	int b[10];
	int *p2;
	int point = 0;
	int row;
	int flag;
	int i,j;	
	int counter = 0;
	p1 = a;
	p2 = b;

	// ��ȡ����
	printf("Enter number:\n");
	for(i = 0; i < 5; i++)
	{	
		for(j = 0; j < 5; j++)
			scanf("%d", &a[i][j]);	 // ����ֵ��������a��
	}

	// �жϰ���
	for(i = 0; i < 5; i++)
	{	
		flag = 1;		// �����а���
	
		for(j = 0; j < 5; j++)	// Ѱ��һ���е����ֵ
		{
			if(point < *(*(p1+i)+j))
			{
				point = *(*(p1+i)+j);	// ��ȡһ���е����ֵ
				row = j;			// ���ֵ�����±�
			}
		}
		
		for(int k = 1; k < 5; k++)	// �ж��е����ֵ�Ƿ������е���Сֵ
		{
			if(point < *(*(p1+k)+row))	// �������ֵС�����е�����ֵ������
				continue;
			else			
			{
				flag = 0;		// ����Ͳ��ǰ���
				break;			// ����
			}
		}
	
		if(flag == 1)
		{
			*(p2+counter) = point;		// �������������b��
			counter++;		// ͳ�ư������
		}
	}

	//���
	for(i = 0; i < counter; i++)
		printf("%5d", *(p2+i));

	printf("\n");

	return 0;
}