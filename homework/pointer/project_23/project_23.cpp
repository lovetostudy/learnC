// �ַ�������

#include <stdio.h>

// ins_str��������ȡһ���ַ�����һ���ַ��������ַ������ַ�����
int ins_str(char *p1, char ins)
{
	char brr[100] = {0};
	char *p2;
	int i;
	int k = 0;	// ��Ϊ����a�Ķ�λ��
	p2 = brr;

	// ���ַ�����������b��
	for(i = 0; i < 100; i++)	
	{
		if(*(p1+i) == '\0')		// ��������
			break;
		*(p2+i) = *(p1+i);
	}
	
	// ���ַ������ַ�����
	for(i = 0; i < 100; i++) 
	{
		if(*(p2+i+1) == '\0') // ��������һ���ַ�������ѭ��
		{
			*(p1+k) = *(p2+i);
			break;
		}
		*(p1+k) = *(p2+i); // ����ԭ�ַ�
		k++;		// �����±�
		*(p1+k) = ins;	// ��������ַ�
		k++;		// �����±�
	}

	return 0;
}


int main()
{
	char a[100] = {0};
	char *p;
	char point;	// �洢Ҫ������ַ�
	int i;
	p = a;

	// ��ȡ����
	printf("Enter string: ");
	for(i = 0; i < 100; i++)	// ��ȡ�ַ���
	{
		scanf("%c", &point);
		if(point == 32)			// ����ǿո�ͽ���
			break;
		*(p+i) = point;			// ���ַ���������a��
	}
	scanf("%c", &point);	// ��ȡҪ������ַ�

	// ���ַ������ַ�����
	ins_str(a, point);	
	
	// ������
	for(i = 0; i < 100; i++)	
	{
		if(*(p+i) == '\0')		// ��������
			break;
		printf("%c", *(p+i));
	}

	printf("\n");

	return 0;
}