// �����ַ���

#include <stdio.h>

int main()
{
	int counter;
	char point;
	char a[100] = {0};
	char b[100] = {0};
	int flag;
	int i,m;
	int j; // ��λÿ���ַ�������λ��
	j = 0;

	printf("Enter string:\n");
	scanf("%d%c", &counter, &point); // ��ȡ�ַ�����Ŀ����������Ŀո�
	for(i = 0; i < 100; i++)	  // ��ȡ�ַ�������
	{
		scanf("%c", &point);
		if(point == '\n')
			break;
		a[i] = point;
	}
	
	// �ж��Ƿ�Ϊ������
	for(m = 0; m < counter; m++)
	{
		flag = 1;
		int counter2 = 0;
		int k = 0;	// ͳ��Ҫ�жϵ��ַ����ĳ���

		for(i = j; i < 100; i++) // ��Ҫ�жϵ��ַ�����������b
		{
			if(a[i] == 32 || a[i] == '\0')
			{
				j++;
				break;
			}
			b[k] = a[i];
			k++;
			j++;
		}

		for(i = 0; i < k / 2; i++) // �ж��Ƿ�Ϊ�����ַ���
		{
			if(i >= (k - 1 - i))
				break;
			if(b[i] == b[k-1-i])
				continue;
			
			flag = 0;
		}

		if(flag == 1)	// ��������ַ���
		{
			for(i = 0; i < k; i++)
				printf("%c", b[i]);

			printf(" ");
		}
	}

	printf("\n");

	return 0;
}