// �ַ�������

#include <stdio.h>

// len�����������ַ������飬�������и��ַ������ܺ�
int len(char *p1)
{
	int leng = 0;
	int i;

	for(i = 0; i < 100; i++)
	{
		if(*(p1+i) == '\0')	// ��������
			break;
		if(*(p1+i) == 32)	// ����ǿո�������
			continue;
		leng++;		// ͳ���ַ�������
	}

	return leng;	// �����ַ����ܳ���
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

	// ��ȡ����
	printf("Enter string: ");
	scanf("%d", &number);	// �ַ���������
	scanf("%c", &point);	// ��������͵�һ���ַ���֮��Ŀո�
	for(i = 0; i < 100; i++)
	{
		scanf("%c", &point);	
		if(point == '\n')	// ��������
			break;
		*(p+i) = point;		// ���ַ���������a��
	}

	// ��ȡ�ַ����ܳ���
	length = len(a);	

	// �����ַ�����ƽ��ֵ
	ave = length / number;

	// ���ƽ��ֵ
	printf("%.5lf\n", ave);

	return 0;
}