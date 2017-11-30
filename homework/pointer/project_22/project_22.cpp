// 字符串比较

#include <stdio.h>

// mystrcmp函数：输入数组，比较其中的字符串，如果相等则返回0，否则返回两个字符串的差值
int mystrcmp(char *p1)
{
	char b[10] = {0};
	char *p2;
	int i,k;
	int flag = 0;	// 假定是两字符串相同
	p2 = b;

	for(i = 0; i < 100; i++)	// 截取第一个字符串放入数组b中，并用k定位下一个字符串在数组a中的起始下表
	{
		if(*(p1+i) == 32)
		{
			k = i + 1;		// 定位第二个字符串的首地址
			break;
		}
		*(p2+i) = *(p1+i);	// 将数组a中的第一个字符串放入数组b
	}

	for(i = 0; i < 100; i++)
	{
		if(*(p2+i) == *(p1+k+i)) // 判断是否相等
			continue;
		flag = *(p2+i) - *(p1+k+i); // 如果不相等就获取差值
		break;
	}

	return flag;
}


int main()
{
	char a[100] = {0};
	char *p;
	char point;
	int i;
	int result;
	p = a;

	// 获取输入
	printf("Enter string: ");
	for(i = 0; i < 100; i++)	
	{
		scanf("%c", &point);
		if(point == '\n')		// 结束条件
			break;
		*(p+i) = point;			// 将输入的字符放入数组a中
	}

	// 判断是否相同
	result = mystrcmp(a);	
	
	// 输出结果
	printf("%d\n", result);	

	return 0;
}