// �׳�

#include <stdio.h>
//factorial�������������ֲ�������׳�
int factorial(int num)
{
	if(num < 2)		
		return 1;
	else
		return num * factorial(num - 1);
}


int main()
{
	int number;
	int counter;
	int numbers;
	int total = 0;
	int ave;
	int i;
	 
	printf("Enter numbers: ");
	scanf("%d", &counter);  // ��ȡ����

	// ��ȡ���벢���
	for(i = 0; i < counter; i++)
	{
		scanf("%d", &number);
		numbers = factorial(number);
		total += numbers;
	}

	ave = total / counter; // ��ƽ��ֵ

	printf("%d\n", ave);
		
	return 0;
}
