// ��С������֮��

#include <stdio.h>

// com_mul����������һ�������������ǵ���С������
int com_mul(int nu1, int nu2)
{
	int i;
	int min_v,numb;
	numb = nu1 * nu2;	// �趨���������
	min_v = nu1 * nu2;	// �趨��ʼֵ

	for(i = 2; i <= numb; i++)
	{
		if(i % nu1 ==0 && i % nu2 == 0 && min_v > i) // �ж��Ƿ�Ϊ��С������
			min_v = i;
	}

	return min_v;
}


int main()
{
	int number;
	int num1,num2,num3;
	int i;
	int total = 0;  // ��ʼ���ܺ�

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