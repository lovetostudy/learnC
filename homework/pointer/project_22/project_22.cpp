// �ַ����Ƚ�

#include <stdio.h>

// mystrcmp�������������飬�Ƚ����е��ַ������������򷵻�0�����򷵻������ַ����Ĳ�ֵ
int mystrcmp(char *p1)
{
	char b[10] = {0};
	char *p2;
	int i,k;
	int flag = 0;	// �ٶ������ַ�����ͬ
	p2 = b;

	for(i = 0; i < 100; i++)	// ��ȡ��һ���ַ�����������b�У�����k��λ��һ���ַ���������a�е���ʼ�±�
	{
		if(*(p1+i) == 32)
		{
			k = i + 1;		// ��λ�ڶ����ַ������׵�ַ
			break;
		}
		*(p2+i) = *(p1+i);	// ������a�еĵ�һ���ַ�����������b
	}

	for(i = 0; i < 100; i++)
	{
		if(*(p2+i) == *(p1+k+i)) // �ж��Ƿ����
			continue;
		flag = *(p2+i) - *(p1+k+i); // �������Ⱦͻ�ȡ��ֵ
		break;
	}

	return flag;
}


int main()
{
	char a[100] = {0};
	char *p;
	char point;
	int i;
	int result;
	p = a;

	// ��ȡ����
	printf("Enter string: ");
	for(i = 0; i < 100; i++)	
	{
		scanf("%c", &point);
		if(point == '\n')		// ��������
			break;
		*(p+i) = point;			// ��������ַ���������a��
	}

	// �ж��Ƿ���ͬ
	result = mystrcmp(a);	
	
	// ������
	printf("%d\n", result);	

	return 0;
}