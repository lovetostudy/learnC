// ��λ����

#include <stdio.h>

// add����: ��ȡ���뷵������λ֮��
int add(int numb)
{
	int i;
	int total = 0;
	int num1;

	for(i = 0; i < 100; i++)
	{
		if(numb < 10) // ֻ��һλ��ʱ����
		{
			total += numb;
			break;
		}

		num1 = numb % 10;	// ����λ֮��
		numb = numb / 10;
		total += num1;
	}

	return total;
}


int main()
{
	int number;
	int tal;
	int i;

	printf("Enter number: ");
	for(i = 0; i< 100; i++)
	{
		scanf("%d", &number); // ��ȡ����
		if(number == 0)			// ������־
			break;
		tal = add(number);			// ���
		if(tal % 2 != 0)		// �ж��Ƿ�Ϊ����
			printf("%5d", number);
	}

	printf("\n");

	return 0;
}