// 逆序求和

#include <stdio.h>
#include <math.h>

// rev_ord函数：输入数字，返回其逆序数
int rev_ord(int numb)
{
	int num1;
	int flag = 1;
	int total = 0;
	int a[100];
	int counter = 0;
	int k = 0;

	if(numb < 0) // 判断是否为负数，若是则将其变为正数
	{
		flag = 0;
		numb = -1 * numb;
	}
	
	// 逆序
	for(int i = 0; i < 100; i++)
	{
		if(numb < 10)
		{
			a[i] = numb;
			counter++;
			break;
		}
		num1 = numb % 10;	// 取个位数
		numb = numb / 10;	// 去除个位数
		a[i] = num1;		// 将分离后的数放入数组a
		counter++;
	}

	// 将数组a中的数结合
	for(i = counter - 1; i >= 0; i--)
	{
		total += a[i] * pow(10,k);
		k++;
	}

	if(flag == 0) // 将改正后的负数还原为负数
		total *= -1;

	return total;
}


int main()
{
	int total = 0;
	int num;
	int i;

	printf("Enter numbers: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &num);	// 获取输入
		if(num == 0)		// 结束标志
			break;
		num = rev_ord(num);	// 逆序
		total += num;		// 求和
	}
	
	printf("%d\n", total);
	
	return 0;
}