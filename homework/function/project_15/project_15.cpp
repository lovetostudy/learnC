// �ۼӺ�

#include <stdio.h>

// accumulation����������һ�������������ۼӺ�
int accumulation(int number)
{
	int total = 0;

	for(int i = 1; i <= number; i++)	// ���ۼӺ�
		total += i;

	return total;
}


int main()
{
	int num1,num2;
	int total = 0;
	
	printf("Enter numbers: ");
	scanf("%d%d", &num1, &num2);	// ��ȡ����

	num1 = accumulation(num1);		// ���ۼӺ�
	num2 = accumulation(num2);
	total = num1 + num2;			// �������ۼӺ͵ĺ�

	printf("%d\n", total);

	return 0;
}