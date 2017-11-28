// 字符串转换

#include <stdio.h>

int main()
{
	char a[100] = {0};
	char *p;
	int i;
	char point;
	p = a;

	// 获取输入
	printf("Enter string: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%c", &point);	
		if(point == '\n')	// 结束条件
			break;
		*(p+i) = point;		// 将字符放入数组a中
	}

	// 转换字符串
	for(i = 0; i < 100; i++)
	{
		if(a[i] == '\0')	// 结束条件
			break;

		if(a[i] >= 'A' && a[i] <= 'Z')		// 将大写字母转换成小写字母
			*(p+i) += 32;
		else if(a[i] >= 'a' && a[i] <= 'z')	// 将小写字母转换成大写字母
			*(p+i) -= 32;
		else			// 其他字符不变
			continue;
	}

	// 输出转换后的字符串
	for(i = 0; i < 100; i++)
	{
		if(*(p+i) == '\0')	// 结束条件
			break;
		printf("%c", *(p+i));
	}

	printf("\n");

	return 0;
}