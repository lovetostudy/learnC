// �����ַ���

#include <stdio.h>

int main()
{
	char a[100] = {0};
	char b[100] = {0};
	char *p1,*p2;
	int counter;
	char point;
	int flag;
	int i,m;
	int loc = 0; // ��λÿ���ַ�������λ��
	p1 = a;
	p2 = b;

	// ��ȡ����
	printf("Enter string:\n");
	scanf("%d%c", &counter, &point); // ��ȡ�ַ�����Ŀ����������Ŀո�
	for(i = 0; i < 100; i++)	  // ��ȡ�ַ�������
	{
		scanf("%c", &point);
		if(point == '\n')
			break;
		*(p1+i) = point;
	}
	
	// �ж��Ƿ�Ϊ������
	for(m = 0; m < counter; m++)
	{
		flag = 1;		// �����ַ���Ϊ�����ַ���
		int counter2 = 0;
		int k = 0;			// ͳ��Ҫ�жϵ��ַ����ĳ���

		for(i = loc; i < 100; i++) // ��Ҫ�жϵ��ַ�����������b
		{
			if(*(p1+i) == 32 || *(p1+i) == '\0')	// ��������
			{
				loc++;	// �ƶ�����һ���ַ������׵�ַ
				break;
			}
			*(p2+k) = *(p1+i);
			k++;
			loc++;
		}

		for(i = 0; i < k / 2; i++) // �ж��Ƿ�Ϊ�����ַ���
		{
			if(i >= (k - 1 - i))	// �ж���ϱ����
				break;
			if(*(p2+i) == *(p2+k-i-1))	// ���ַ���ͬ�ͼ��������ж�
				continue;
			
			flag = 0;		// �����ǻ����ַ�������0
		}

		if(flag == 1)	// ��������ַ���
		{
			for(i = 0; i < k; i++)
				printf("%c", *(p2+i));

			printf(" ");
		}
	}

	printf("\n");

	return 0;
}