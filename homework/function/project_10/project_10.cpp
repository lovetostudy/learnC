// �������

#include <stdio.h>
#include <math.h>

// pri_num��������ȡ���벢�ж��Ƿ�Ϊ����������Ƿ���ԭ�������򷵻�1
int pri_num(int num)
{
	int i;
	int flag = 1;

	for(i = 2; i <= sqrt(num); i++)	// �ж��Ƿ�Ϊ����
	{
		if(num % i == 0)	// ������Ǿͽ�flag���㣬������ѭ��
		{
			flag = 0;
			break;
		}
	}

	if(flag == 1)	// ���������������ԭ��
		return num;
	else			// ���Ǿͷ���1
		return 1;
}


int main()
{
	int number;
	int total = 0;
	int min,max;
	int i;

	printf("Enter numbers: ");
	scanf("%d%d", &min, &max); // ��ȡ��Χ

	for(i = min; i <= max; i++)
	{
		number = pri_num(i);	// �ж��Ƿ�Ϊ����

		if(number != 1)			// ��������������
			total += number;
	}

	printf("%d\n", total);

	return 0;
}