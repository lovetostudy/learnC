// ��ֵ����

#include <stdio.h>
#include <math.h>

// add������������ֵ��λ��n, ����һ��nλ��ͬ����ֵ
int add(int numb, int bit)
{
	int i;
	int total = 0;

	// ������ֵ��nλ��
	for(i = 0; i < bit; i++)
		total += int(numb * pow(10, i));

	return total;
}


int main()
{
	int number, bits;
	int total = 0;
	int num1;
	int i;
	
	printf("Enter numbers: ");
	scanf("%d%d", &number, &bits);	// ��ȡ��ֵ��λ��
	
	for(i = 1; i <= bits; i++)
	{
		num1 = add(number, i);		// ��λ��
		total += num1;
	}

	printf("%d\n", total);

	return 0;
}