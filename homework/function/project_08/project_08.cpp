// �ݺ���

#include <stdio.h>

// power����������������ݷ�����n����
double power(double num, int po)
{
	if(po == 1)
		return num;
	else
		return num * power(num, po - 1);
}


int main()
{
	double number;
	int powe;

	printf("Enter numbers: ");
	scanf("%lf%d", &number, &powe);  // ��ȡ��������

	number = power(number, powe);  

	printf("%.3lf\n", number);

	return 0;
}