// �ַ���ת��

#include <stdio.h>

int main()
{
	char a[100] = {0};
	char *p;
	int i;
	char point;
	p = a;

	// ��ȡ����
	printf("Enter string: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%c", &point);	
		if(point == '\n')	// ��������
			break;
		*(p+i) = point;		// ���ַ���������a��
	}

	// ת���ַ���
	for(i = 0; i < 100; i++)
	{
		if(a[i] == '\0')	// ��������
			break;

		if(a[i] >= 'A' && a[i] <= 'Z')		// ����д��ĸת����Сд��ĸ
			*(p+i) += 32;
		else if(a[i] >= 'a' && a[i] <= 'z')	// ��Сд��ĸת���ɴ�д��ĸ
			*(p+i) -= 32;
		else			// �����ַ�����
			continue;
	}

	// ���ת������ַ���
	for(i = 0; i < 100; i++)
	{
		if(*(p+i) == '\0')	// ��������
			break;
		printf("%c", *(p+i));
	}

	printf("\n");

	return 0;
}