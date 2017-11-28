// 数字移动

#include <stdio.h>

// move函数：使数向后移动3位，最后三位排在前3位
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
	scanf("%d", &counter);	// 获取输入的数的数量

	// 获取输入
	for(i = 0; i < counter; i++)
		scanf("%d", &a[i]);

	move(a, counter);	

	// 输出结果

	for(i = 0; i < counter; i++)
		printf("%5d", a[i]);

	printf("\n");

	return 0;
}