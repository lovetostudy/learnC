// �����ƶ�

#include <stdio.h>

// move������ʹ������ƶ�3λ�������λ����ǰ3λ
int move(int arr[], int n)
{
	int b[3];
	int i;

	for(i = 0; i < 3; i++)
		b[i] = arr[n + i - 3];

	for(i = n - 1;i > 2; i--)
		arr[i] = arr[i - 3];

	for(i = 0; i < 3; i++)
		arr[i] = b[i];

	return 0;
}

int main()
{
	int a[100];
	int counter;
	int i;

	printf("Enter numbers(3 <= number <= 10): ");
	scanf("%d", &counter);	// ��ȡ�������������

	// ��ȡ����
	for(i = 0; i < counter; i++)
		scanf("%d", &a[i]);

	move(a, counter);	

	// ������

	for(i = 0; i < counter; i++)
		printf("%5d", a[i]);

	printf("\n");

	return 0;
}