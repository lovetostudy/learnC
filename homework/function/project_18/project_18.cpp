// 

#include <stdio.h>

// is_odd����������һ�������ж���ż����������������true�����򷵻�false
bool is_odd(int number)
{
	if(number % 2 == 0)	// �ж���ż��ż������false
		return false;
	else				// ���򷵻�true
		return true;
}


int main()
{
	int number;
	int counter = 0;
	int is_bool;
	int i;

	printf("Enter number: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);	// ��ȡ��ֵ
		if(number == 0)			// ��������
			break;

		is_bool = is_odd(number);	// �ж���ż

		if(is_bool == true)			// ���������
		{
			printf("%5d", number);
			counter++;				// ���������ĸ���
		}	
	}

	printf("    ������%d\n", counter);

	return 0;
}