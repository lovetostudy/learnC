// ����

#include <stdio.h>
#include <math.h>

int main()
{
	int m,n;
	int i;
	int a[100];
	int *p;
	int counter = 0;
	p = a;

	// ��ȡm,n
	printf("Enter m and n: ");
	scanf("%d%d", &m, &n);
	
	// ��m,n֮�������������a
	for(i = m; i <= n; i++)
	{
		*(p+counter) = i;
		counter++;
	}

	// ������������������ȥ������0����ԭ��������
	for(i = 2; i <= n; i++)
	{
		for(int k = 0; k < counter; k++)
		{
			if(*(p+k) == i)	// ���һ���������������
				break;

			if(*(p+k) == 0)	// ������ȥ�ĵط�������
				continue;

			if(*(p+k) % i == 0)	// ��ȥ����������0���ǣ�
				*(p+k) = 0;
		}
	}

	// �������
	for(i = 0; i < counter; i++)
	{
		if(*(p+i)== 0)	// ������ȥ�ĵط�
			continue;
		
		printf("%5d", *(p+i));
	}

	printf("\n");

	return 0;
}