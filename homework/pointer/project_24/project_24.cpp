// 二进制转换

#include <stdio.h>
#include <math.h>

// change函数:将二进制转换为十进制并求和
int change(char *p1, int n, int m)
{
	int number, total;
	char b[100] = {0};
	char *p2;
	total = 0;
	int	j = 0;
	int k = 0; // 定位逆序后二进制的首位置
	int i;
	p2 = b;

	// 将字符串逆序
	for(i = m - 1; i >= 0; i--)
	{
		*(p2+j) = *(p1+i);		// 将数组a中的字符放入数组b中
		j++;
	}
	
	//求全部的二进制数之和
	for(i = 0; i < n; i++) 
	{
		number = 0;		
		int m = 0;	//计算二进制时所需的幂

		for(j = k; j < 100; j++) // 将二进制转换为十进制
		{	
			if(*(p2+j) == 32 || *(p2+j) == '\0')	// 判断二进制数是否结束
			{
				k++;	// 移动到下一个数的首地址
				break;
			}
			number += int((*(p2+j) - '0') * pow(2,m)); // 将二进制转换为十进制
			m++;
			k++;
		}

		total += number;	// 将得到的十进制求和
	}

	return total;
}


int main()
{
	char a[100] = {0};
	char *p;
	int number;
	int counter = 0;
	char point;
	int i;
	int result;
	p = a;

	// 获取输入
	printf("Enter number(enter to end): ");
	scanf("%d%c", &number, &point);			 // 获取二进制数的数量以及消除二进制数前的空格
	for(i = 0; i < 100; i++)		// 获取二进制数
	{
		scanf("%c", &point);
		if(point == '\n')	// 判断是否结束输入
			break;
		*(p+i) = point;		// 将字符放入数组a中
		counter++;			// 统计数组的长度
	}

	// 调用函数计算二进制数转换为十进制数后的总和
	result = change(a, number, counter);
	
	// 输出结果
	printf("%d\n", result);

	return 0;
}