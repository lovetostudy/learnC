// ������ת��

#include <stdio.h>
#include <math.h>

// change����:��������ת��Ϊʮ���Ʋ����
int change(char arr[], int n, int m)
{
	int i;
	int b[100] = {0};
	int number, total;
	total = 0;
	int	j = 0;
	int k = 0; // ��λ���������Ƶ���λ��

	// ���ַ�������
	for(i = m - 1; i >= 0; i--)
	{
		b[j] = arr[i];
		j++;
	}
	
	//��ȫ���Ķ�������֮��
	for(i = 0; i < n; i++) 
	{
		number = 0;
		int m = 0;	//���������ʱ�������

		for(j = k; j < 100; j++) // ��������ת��Ϊʮ����
		{	
			if(b[j] == 32 || b[j] == '\0')	// �ж϶������Ƿ����
			{
				k++;
				break;
			}
			number += int((b[j] - '0') * pow(2,m)); // ��������ת��Ϊʮ����
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
	int number;
	int counter = 0;
	char point;
	int i;
	int result;

	printf("Enter number(enter to end): ");
	scanf("%d%c", &number, &point); // ��ȡ���������������Լ�������������ǰ�Ŀո�

	// ��ȡ����
	for(i = 0; i < 100; i++)
	{
		scanf("%c", &point);
		if(point == '\n')	// �ж��Ƿ��������
			break;
		a[i] = point;
		counter++;
	}

	result = change(a, number, counter);
	
	printf("%d\n", result);

	return 0;
}