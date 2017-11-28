// 字符串连接

#include <Stdio.h>

// mystrcar函数：将两个字符串连接起来
int mystrcat(char arr[])
{
	int k = -1; 
	int i,j;

	for(i = 0; i < 100; i++)
	{
		if(arr[i] == 32)  // 判断第一个字符串是否结束
			k = i;

		if(k != -1) // 将两个字符串连接
		{
			for(j = k; k < 100; k++)
			{
				if(arr[k] == '\0')
					break;
				arr[k] = arr[k+1];
			}
		}
	}

	return 0;
}


int main()
{
	char str[100] = {0};
	char point;
	int i;

	printf("Enter strings: ");
	
	// 获取字符串
	for(i = 0; i < 100; i++)
	{
		scanf("%c", &point);

		if(point == '\n')
			break;

		str[i] = point;
	}

	mystrcat(str);
	
	// 输出结果
	for(i = 0; i < 100; i++)
	{
		if(str[i] == '\0')
			break;

		printf("%c", str[i]);
	}

	printf("\n");

	return 0;
}