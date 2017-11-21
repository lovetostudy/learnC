// ����һ���Զ��庯�������������������

#include <stdio.h>
#include <math.h>

// per_num����������һ�������ж����Ƿ�Ϊ����
bool per_num(int numb)
{
	int total = 0;
	int i;

	for(i = 1; i < numb; i++)	// �ж��Ƿ�Ϊ����
	{
		if(numb % i == 0)		// ��������������֮��
			total += i;
	}

	if(total == numb)			// �������򷵻�true
		return true;
	else						// ���򷵻�false
		return false;
}


int main()
{
	int m,n;
	int a[100] = {0};
	int i;
	int k = 0;
	bool is_per;

	printf("Enter numbers: ");
	scanf("%d%d", &m, &n);		// ��ȡ��ֵ

	for(i = 1; i <= n; i++)
	{
		is_per = per_num(i);	// �ж��Ƿ�Ϊ����

		if(is_per == true)			// �����������
			printf("%5d", i);
	}

	printf("\n");

	// ����m,n֮�������
	for(i = m; i <= n; i++)
	{
		int flag = 1;

		for(int j = 2; j <= sqrt(i); j++)	// �ж��Ƿ�Ϊ����
		{
			if(i % j == 0)					// ���������
			{
				flag = 0;
				break;
			}
		}

		if(flag == 1)		// �������
		{
			printf("%5d", i);
		}
	}

	printf("\n");

	return 0;
}