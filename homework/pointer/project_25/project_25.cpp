// �����ƶ�

#include <stdio.h>

// move������ʹ������ƶ�3λ�������λ����ǰ3λ
int move(int *p1, int n)
{
	int arr[3];
	int *p2;
	int i;
	p2 = arr;

	 //�ƶ�����
	for(i = 0; i < 3; i++)		// �����3�����ְ�˳��ŵ�����arr��ǰ3λ
		*(p2+i) = *(p1+n+i-3);
	for(i = n - 1;i > 2; i--)	// ������a�е�ʣ�����ֺ���3λ
		*(p1+i) = *(p1+i-3);
	for(i = 0; i < 3; i++)		// ������arr�е�3λ�ŵ�����a��ͷ
		*(p1+i) = *(p2+i);

	return 0;
}

int main()
{
	int a[100];
	int *p;
	int counter;
	int i;
	p = a;

	// ��ȡ����
	printf("Enter numbers(3 <= number <= 10): ");
	scanf("%d", &counter);	// ��ȡ�������������
	for(i = 0; i < counter; i++)
		scanf("%d", p+i);	// �������������a��

	// �ƶ�����
	move(a, counter);	

	// ������
	for(i = 0; i < counter; i++)
		printf("%5d", *(p+i));

	printf("\n");

	return 0;
}