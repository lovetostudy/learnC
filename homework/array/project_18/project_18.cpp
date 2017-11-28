// 回文字符串

#include <stdio.h>

int main()
{
	int counter;
	char point;
	char a[100] = {0};
	char b[100] = {0};
	int flag;
	int i,m;
	int j; // 定位每个字符串的首位置
	j = 0;

	printf("Enter string:\n");
	scanf("%d%c", &counter, &point); // 获取字符串数目并清除其后面的空格
	for(i = 0; i < 100; i++)	  // 获取字符串输入
	{
		scanf("%c", &point);
		if(point == '\n')
			break;
		a[i] = point;
	}
	
	// 判断是否为回文数
	for(m = 0; m < counter; m++)
	{
		flag = 1;
		int counter2 = 0;
		int k = 0;	// 统计要判断的字符串的长度

		for(i = j; i < 100; i++) // 将要判断的字符串放入数组b
		{
			if(a[i] == 32 || a[i] == '\0')
			{
				j++;
				break;
			}
			b[k] = a[i];
			k++;
			j++;
		}

		for(i = 0; i < k / 2; i++) // 判断是否为回文字符串
		{
			if(i >= (k - 1 - i))
				break;
			if(b[i] == b[k-1-i])
				continue;
			
			flag = 0;
		}

		if(flag == 1)	// 输出回文字符串
		{
			for(i = 0; i < k; i++)
				printf("%c", b[i]);

			printf(" ");
		}
	}

	printf("\n");

	return 0;
}