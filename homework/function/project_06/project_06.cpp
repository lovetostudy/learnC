// Сţ����

#include <stdio.h>

// cow��������������������ĸţ��
int cow(int ye)
{
	if(ye < 4)
		return 1;
	else
		return cow(ye - 1) + cow(ye -3);
}


int main()
{
	int year;
	int numbers;
	int i;

	printf("Enter year: ");	
	scanf("%d", &year);		// ��ȡ���

	numbers = cow(year);   // ��ţ������

	printf("%d\n", numbers);

	return 0;
}
