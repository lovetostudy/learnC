// ������ת��

#include <stdio.h>
#include <math.h>

// change����:��������ת��Ϊʮ���Ʋ����
int change(char *p1, int n, int m)
{
	int number, total;
	char b[100] = {0};
	char *p2;
	total = 0;
	int	j = 0;
	int k = 0; // ��λ���������Ƶ���λ��
	int i;
	p2 = b;

	// ���ַ�������
	for(i = m - 1; i >= 0; i--)
	{
		*(p2+j) = *(p1+i);		// ������a�е��ַ���������b��
		j++;
	}
	
	//��ȫ���Ķ�������֮��
	for(i = 0; i < n; i++) 
	{
		number = 0;		
		int m = 0;	//���������ʱ�������

		for(j = k; j < 100; j++) // ��������ת��Ϊʮ����
		{	
			if(*(p2+j) == 32 || *(p2+j) == '\0')	// �ж϶��������Ƿ����
			{
				k++;	// �ƶ�����һ�������׵�ַ
				break;
			}
			number += int((*(p2+j) - '0') * pow(2,m)); // ��������ת��Ϊʮ����
			m++;
			k++;
		}

		total += number;	// ���õ���ʮ�������
	}

	return total;
}


int main()
{
	char a[100] = {0};
	char *p;
	int number;
	int counter = 0;
	char point;
	int i;
	int result;
	p = a;

	// ��ȡ����
	printf("Enter number(enter to end): ");
	scanf("%d%c", &number, &point);			 // ��ȡ���������������Լ�������������ǰ�Ŀո�
	for(i = 0; i < 100; i++)		// ��ȡ��������
	{
		scanf("%c", &point);
		if(point == '\n')	// �ж��Ƿ��������
			break;
		*(p+i) = point;		// ���ַ���������a��
		counter++;			// ͳ������ĳ���
	}

	// ���ú��������������ת��Ϊʮ����������ܺ�
	result = change(a, number, counter);
	
	// ������
	printf("%d\n", result);

	return 0;
}