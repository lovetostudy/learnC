// 字符串比较

#include <stdio.h>

// function mystrcmp: compare strings in array, if they are equaled,return 0, else return the number string1 - string2
int mystrcmp(char arr[])
{
	char b[10] = {0};
	int i,k;
	int flag = 0;	// 假定是相同的字符串

	for(i = 0; i < 100; i++)	// 截取第一个字符串放入数组b中，并用k定位下一个字符串在数组a中的起始下表
	{
		if(arr[i] == 32)
		{
			k = i + 1;
			break;
		}
		b[i] = arr[i];
	}

	for(i = 0; i < 100; i++)
	{
		if(b[i] == arr[k+i]) // 判断是否相等
			continue;
		flag = b[i] - arr[k+i]; // 如果不相等就获取差值
		break;
	}

	return flag;
}


int main()
{
	char a[100] = {0};
	char point;
	int i;
	int result;

	printf("Enter string: ");
	for(i = 0; i < 100; i++)	// get input
	{
		scanf("%c", &point);
		if(point == '\n')
			break;
		a[i] = point;
	}

	result = mystrcmp(a);	// call mystrcmp
		
	printf("%d\n", result);	// print result

	return 0;
}