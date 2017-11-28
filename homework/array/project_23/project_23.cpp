// 字符串处理

#include <stdio.h>

// ins_str函数：获取一个字符串和一个字符，并将字符插入字符串中
int ins_str(char arr[], char ins)
{
	char brr[100] = {0};
	int i;
	int k = 0;	// 作为数组a的定位点

	for(i = 0; i < 100; i++)	// 将字符串放入数组b中
	{
		if(arr[i] == '\0')
			break;
		brr[i] = arr[i];
	}
	
	for(i = 0; i < 100; i++) // 将字符插入字符串中
	{
		if(brr[i + 1] == '\0') // 如果是最后一个字符就跳出循环
		{
			arr[k] = brr[i];
			break;
		}
		arr[k] = brr[i]; // 放入原字符
		k++;
		arr[k] = ins;	// 放入插入字符
		k++;
	}

	return 0;
}


int main()
{
	char a[100] = {0};
	char point;	// 存储要插入的字符
	int i;

	printf("Enter string: ");
	for(i = 0; i < 100; i++)	// 获取字符串
	{
		scanf("%c", &point);
		if(point == 32)
			break;
		a[i] = point;
	}
	scanf("%c", &point);	// 获取要插入的字符

	ins_str(a, point);		// 调用ins_str函数
	
	for(i = 0; i < 100; i++)	// 输出结果
	{
		if(a[i] == '\0')
			break;
		printf("%c", a[i]);
	}

	printf("\n");

	return 0;
}