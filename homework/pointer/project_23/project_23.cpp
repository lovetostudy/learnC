// 字符串处理

#include <stdio.h>

// ins_str函数：获取一个字符串和一个字符，并将字符插入字符串中
int ins_str(char *p1, char ins)
{
	char brr[100] = {0};
	char *p2;
	int i;
	int k = 0;	// 作为数组a的定位点
	p2 = brr;

	// 将字符串放入数组b中
	for(i = 0; i < 100; i++)	
	{
		if(*(p1+i) == '\0')		// 结束条件
			break;
		*(p2+i) = *(p1+i);
	}
	
	// 将字符插入字符串中
	for(i = 0; i < 100; i++) 
	{
		if(*(p2+i+1) == '\0') // 如果是最后一个字符就跳出循环
		{
			*(p1+k) = *(p2+i);
			break;
		}
		*(p1+k) = *(p2+i); // 放入原字符
		k++;		// 后移下标
		*(p1+k) = ins;	// 放入插入字符
		k++;		// 后移下标
	}

	return 0;
}


int main()
{
	char a[100] = {0};
	char *p;
	char point;	// 存储要插入的字符
	int i;
	p = a;

	// 获取输入
	printf("Enter string: ");
	for(i = 0; i < 100; i++)	// 获取字符串
	{
		scanf("%c", &point);
		if(point == 32)			// 如果是空格就结束
			break;
		*(p+i) = point;			// 将字符放入数组a中
	}
	scanf("%c", &point);	// 获取要插入的字符

	// 将字符插入字符串中
	ins_str(a, point);	
	
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