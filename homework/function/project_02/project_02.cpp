// ��������֮��

#include <stdio.h>

// add_num�������������֣���������������
int add_num(int number)
{
	int i;
	int numbers = 0;
	
	// �����������ֵ������ĸ���
	for(i = 1; i <= number; i++)
	{
		if(number % i == 0)
			numbers++;
	}

	return numbers;
}


int main()
{
	int number;
	int numbers;
	int total = 0;
	int i;

	printf("Enter number: ");
	scanf("%d", &number);		// ��ȡҪ��������ĸ���

	for(i = 0; i < number; i++)
	{
		scanf("%d", &numbers);		// ��ȡ��
		numbers = add_num(numbers); // ����add_num������ȡ��������
		total += numbers; 
	}
	
	printf("%d\n", total);

	return 0;
}