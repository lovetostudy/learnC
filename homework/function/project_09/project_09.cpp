// �ݺ���

#include <stdio.h>

// power��������ȡ�������ݲ�������n����
int power(int num, int po)
{
	if(po == 1)
		return num;
	else
		return num * power(num, po - 1);
}


int main()
{
	int counter;
	int number;
	int powe;
	int total = 0;
	int i;

	printf("Enter numbers: ");
	scanf("%d%d", &counter, &powe); // ��ȡ��������

	// ����1^k+2^k+����+n^k֮��
	for(i = 1; i <= counter; i++)		
		total += power(i, powe);

	printf("%d\n", total);

	return 0;
}