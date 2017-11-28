// 字符串长度

#include <stdio.h>

// len函数：输入字符串数组，返回其中各字符串的总和
int len(char arr[])
{
	int leng = 0;
	int i;

	for(i = 0; i < 100; i++)
	{
		if(arr[i] == '\0')
			break;
		if(arr[i] == 32)
			continue;
		leng++;
	}

	return leng;
}


int main()
{
	char a[100] = {0};
	char point;
	int i,j;
	double length, ave;
	int number;

	printf("Enter string: ");
	scanf("%d", &number);
	scanf("%c", &point);	// 清除数量和第一个字符串之间的空格

	for(i = 0; i < 100; i++)
	{
		scanf("%c", &point);
		if(point == '\n')
			break;

		a[i] = point;
	}

	length = len(a);

	ave = length / number;

	printf("%.5lf\n", ave);

	return 0;
}