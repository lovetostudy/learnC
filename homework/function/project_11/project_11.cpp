// ��С������֮��

#include <stdio.h>

// com_mul����������һ�������������ǵ���С������
int com_nul(int nu1, int nu2)
{
	int i;

	for(
int main()
{
	int number;
	int num1,num2,num3;
	int i;
	int total = 0;

	printf("Enter numbers: ");
	scanf("%d", &number);	// ��ȡ���Ķ���

	for(i = 0; i < number; i++)
	{
		scanf("%d%d", &num1,&num2);
		num3 = com_mul(num1, num2);	// ��ȡ��С������
		total += num3;		// ��С���������
	}

	printf("%d\n", total);

	return 0;
}