// ����Ԫ��

#include <stdio.h>

// find������Ѱ�������е�Ԫ�أ��ҵ��ͷ������±꣬���򷵻�-1
int find(int *p, int n,int ele)
{
	int flag = 0;		// ����Ԫ�ز�����

	for(int i = 0; i < n; i++)
	{
		if(*(p+i) == ele)
		{
			flag = i;		// ����ҵ����±��flag
			break;			//	����
		}
	}

	if(flag == 0)		// ���û�ҵ�
		return -1;		// ����-1
	else
		return flag;	// ���򷵻��±�
}


int main()
{
	int counter = 0;
	int number;
	int a[100];
	int *po;
	int i;
	int result;
	int element;
	po = a;

	// ��ȡ����
	printf("Enter number: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);
		if(number == 0)		// ��������
			break;
		*(po+i) = number;	// ��Ԫ�ط�������a��
		counter++;			// ͳ��Ԫ�ظ���
	}
	scanf("%d", &element);	// ����Ҫ���ҵ�Ԫ��

	// ����Ԫ��
	result = find(a, counter,element);

	// ������
	printf("%d\n", result);

	return 0;
}