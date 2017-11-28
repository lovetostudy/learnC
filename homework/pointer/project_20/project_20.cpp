// 字符串长度

#include <stdio.h>

// len函数：输入字符串数组，返回其中各字符串的总和
int len(char *p1)
{
	int leng = 0;
	int i;

	for(i = 0; i < 100; i++)
	{
		if(*(p1+i) == '\0')	// 结束条件
			break;
		if(*(p1+i) == 32)	// 如果是空格则跳过
			continue;
		leng++;		// 统计字符串长度
	}

	return leng;	// 返回字符串总长度
}


int main()
{
	char a[100] = {0};
	char *p;
	char point;
	int i,j;
	double length, ave;
	int number;
	p = a;

	// 获取输入
	printf("Enter string: ");
	scanf("%d", &number);	// 字符串的数量
	scanf("%c", &point);	// 清除数量和第一个字符串之间的空格
	for(i = 0; i < 100; i++)
	{
		scanf("%c", &point);	
		if(point == '\n')	// 结束条件
			break;
		*(p+i) = point;		// 将字符放入数组a中
	}

	// 获取字符串总长度
	length = len(a);	

	// 计算字符串的平均值
	ave = length / number;

	// 输出平均值
	printf("%.5lf\n", ave);

	return 0;
}