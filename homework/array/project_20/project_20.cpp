// �ַ�������

#include <stdio.h>

// len�����������ַ������飬�������и��ַ������ܺ�
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
	scanf("%c", &point);	// ��������͵�һ���ַ���֮��Ŀո�

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