// �������

#include <stdio.h>
#include <math.h>

// rev_ord�������������֣�������������
int rev_ord(int numb)
{
	int num1;
	int flag = 1;
	int total = 0;
	int a[100];
	int counter = 0;
	int k = 0;

	if(numb < 0) // �ж��Ƿ�Ϊ���������������Ϊ����
	{
		flag = 0;
		numb = -1 * numb;
	}
	
	// ����
	for(int i = 0; i < 100; i++)
	{
		if(numb < 10)
		{
			a[i] = numb;
			counter++;
			break;
		}
		num1 = numb % 10;	// ȡ��λ��
		numb = numb / 10;	// ȥ����λ��
		a[i] = num1;		// ������������������a
		counter++;
	}

	// ������a�е������
	for(i = counter - 1; i >= 0; i--)
	{
		total += a[i] * pow(10,k);
		k++;
	}

	if(flag == 0) // ��������ĸ�����ԭΪ����
		total *= -1;

	return total;
}


int main()
{
	int total = 0;
	int num;
	int i;

	printf("Enter numbers: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &num);	// ��ȡ����
		if(num == 0)		// ������־
			break;
		num = rev_ord(num);	// ����
		total += num;		// ���
	}
	
	printf("%d\n", total);
	
	return 0;
}