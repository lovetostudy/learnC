// ���ֵ

#include <stdio.h>

// max_v��������ȡ2�����֣���������֮��������ĺͣ�������2������
int max_v(int x,int y)
{
	int i;
	int total = 0;

	for(i = x; i <= y; i++)
	{
		if(i % 2 != 0)
			total += i;
	}

	return total;
}


int main()
{
	int num1,num2;
	int max_value = 0;
	int numbers;
	int number;
	int i;

	printf("Enter numbers: ");
	scanf("%d", &number);

	for(i = 0; i < number; i++)
	{
		scanf("%d%d", &num1, &num2);
		numbers = max_v(num1, num2);

		if(numbers > max_value)
			max_value = numbers;
	}

	printf("%d\n", max_value);
		
	return 0;
}