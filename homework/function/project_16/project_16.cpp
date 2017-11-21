// 利用函数计算平均值

#include <stdio.h>

// aver函数：输入数字，若数字〉0,返回1，<0,返回-1，=0返回0
int aver(int numb)
{
	if(numb > 0)
		numb = 1;
	else if(numb == 0)
		numb = -1;
	else
		numb = 0;

	return numb;
}


int main()
{
	int number;
	int numb1;
	int counter;
	int counter1 = 0;
	int total = 0;
	double ave;
	int i;

	printf("Enter number: ");
	scanf("%d", &counter);			// 获取程序计数器
	for(i = 0; i < counter; i++)
	{
		scanf("%d", &number);		// 获取输入
		numb1 = aver(number);
		
		if(numb1 == 1)				// 若是正数则求和
		{
			total += number;
			counter1++;				// 统计正数个数
		}
	}

	ave = (double)total / counter1; // 求平均值

	printf("%lf\n", ave);

	return 0;
}