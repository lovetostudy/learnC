// ��������ݹ����

#include <stdio.h>

// roots������������ֵ������������
int roots(int numb)
{
	if(numb < 10)		// ��<10, ����Ϊ������������
		return numb;
	else				// ���򣬽�����λ��Ӳ�������
	{
		int total = 0;
		int numb1;

		for(int i = 0; i < 100; i++)	// ����λ��
		{
			if(numb < 10)
			{
				total += numb;
				break;
			}
			numb1 = numb % 10;
			numb = numb / 10;
			total += numb1;
		}

		return roots(total);					// ������
	}
}


int main()
{
	int number;
	int counter;
	int i;

	printf("Enter numbers: ");
	scanf("%d", &counter);		// ��ȡ���������
	for(i = 0; i < counter; i++)
	{
		scanf("%d", &number);		// ��ȡ��ֵ
		number = roots(number);		// ������
		printf("%5d", number);
	}

	printf("\n");

	return 0;
}