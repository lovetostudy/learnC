// 数字移动

#include <stdio.h>

// move函数：使数向后移动3位，最后三位排在前3位
int move(int *p1, int n)
{
	int arr[3];
	int *p2;
	int i;
	p2 = arr;

	 //移动数字
	for(i = 0; i < 3; i++)		// 将最后3个数字按顺序放到数字arr的前3位
		*(p2+i) = *(p1+n+i-3);
	for(i = n - 1;i > 2; i--)	// 将数组a中的剩余数字后移3位
		*(p1+i) = *(p1+i-3);
	for(i = 0; i < 3; i++)		// 将数组arr中的3位放到数组a开头
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

	// 获取输入
	printf("Enter numbers(3 <= number <= 10): ");
	scanf("%d", &counter);	// 获取输入的数的数量
	for(i = 0; i < counter; i++)
		scanf("%d", p+i);	// 将输入放入数组a中

	// 移动数字
	move(a, counter);	

	// 输出结果
	for(i = 0; i < counter; i++)
		printf("%5d", *(p+i));

	printf("\n");

	return 0;
}