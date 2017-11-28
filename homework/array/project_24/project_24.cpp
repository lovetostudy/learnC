// 二进制转换

#include <stdio.h>
#include <math.h>

// change函数:将二进制转换为十进制并求和
int change(char arr[], int n, int m)
{
	int i;
	int b[100] = {0};
	int number, total;
	total = 0;
	int	j = 0;
	int k = 0; // 定位逆序后二进制的首位置

	// 将字符串逆序
	for(i = m - 1; i >= 0; i--)
	{
		b[j] = arr[i];
		j++;
	}
	
	//求全部的二进制数之和
	for(i = 0; i < n; i++) 
	{
		number = 0;
		int m = 0;	//计算二进制时所需的幂

		for(j = k; j < 100; j++) // 将二进制转换为十进制
		{	
			if(b[j] == 32 || b[j] == '\0')	// 判断二进制是否结束
			{
				k++;
				break;
			}
			number += int((b[j] - '0') * pow(2,m)); // 将二进制转换为十进制
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
	int number;
	int counter = 0;
	char point;
	int i;
	int result;

	printf("Enter number(enter to end): ");
	scanf("%d%c", &number, &point); // 获取二进制数的数量以及消除二进制数前的空格

	// 获取输入
	for(i = 0; i < 100; i++)
	{
		scanf("%c", &point);
		if(point == '\n')	// 判断是否结束输入
			break;
		a[i] = point;
		counter++;
	}

	result = change(a, number, counter);
	
	printf("%d\n", result);

	return 0;
}