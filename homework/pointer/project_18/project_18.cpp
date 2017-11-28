// 回文字符串

#include <stdio.h>

int main()
{
	char a[100] = {0};
	char b[100] = {0};
	char *p1,*p2;
	int counter;
	char point;
	int flag;
	int i,m;
	int loc = 0; // 定位每个字符串的首位置
	p1 = a;
	p2 = b;

	// 获取输入
	printf("Enter string:\n");
	scanf("%d%c", &counter, &point); // 获取字符串数目并清除其后面的空格
	for(i = 0; i < 100; i++)	  // 获取字符串输入
	{
		scanf("%c", &point);
		if(point == '\n')
			break;
		*(p1+i) = point;
	}
	
	// 判断是否为回文数
	for(m = 0; m < counter; m++)
	{
		flag = 1;		// 假设字符串为回文字符串
		int counter2 = 0;
		int k = 0;			// 统计要判断的字符串的长度

		for(i = loc; i < 100; i++) // 将要判断的字符串放入数组b
		{
			if(*(p1+i) == 32 || *(p1+i) == '\0')	// 结束条件
			{
				loc++;	// 移动到下一个字符串的首地址
				break;
			}
			*(p2+k) = *(p1+i);
			k++;
			loc++;
		}

		for(i = 0; i < k / 2; i++) // 判断是否为回文字符串
		{
			if(i >= (k - 1 - i))	// 判断完毕便结束
				break;
			if(*(p2+i) == *(p2+k-i-1))	// 若字符相同就继续往后判断
				continue;
			
			flag = 0;		// 若不是回文字符串便置0
		}

		if(flag == 1)	// 输出回文字符串
		{
			for(i = 0; i < k; i++)
				printf("%c", *(p2+i));

			printf(" ");
		}
	}

	printf("\n");

	return 0;
}