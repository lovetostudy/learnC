// 字符串连接

#include <Stdio.h>

// mystrcar函数：将两个字符串连接起来
int mystrcat(char *p1)
{
	int loc = -1; 
	int i,j;

	for(i = 0; i < 100; i++)
	{
		if(*(p1+i) == 32)  // 判断第一个字符串是否结束
			loc = i;		// 将结束点作为另一个字符串的起始位置

		if(loc != -1) // 将两个字符串连接
		{
			for(j = loc; loc < 100; loc++)
			{
				if(*(p1+loc) == '\0')	// 拼接结束条件
					break;
				*(p1+loc) = *(p1+loc+1);
			}
		}
	}

	return 0;
}


int main()
{
	char str[100] = {0};
	char *p;
	char point;
	int i;
	p = str;

	// 获取输入
	printf("Enter strings: ");	
	for(i = 0; i < 100; i++)	// 获取字符串
	{
		scanf("%c", &point);

		if(point == '\n')	 // 结束条件
			break;

		*(p+i) = point;		// 将字符串放入数组str中
	}

	// 拼接字符串
	mystrcat(str);
	
	// 输出结果
	for(i = 0; i < 100; i++)
	{
		if(*(p+i) == '\0')		// 结束条件
			break;

		printf("%c", *(p+i));	
	}

	printf("\n");

	return 0;
}