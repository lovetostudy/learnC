// �ַ�������

#include <Stdio.h>

// mystrcar�������������ַ�����������
int mystrcat(char *p1)
{
	int loc = -1; 
	int i,j;

	for(i = 0; i < 100; i++)
	{
		if(*(p1+i) == 32)  // �жϵ�һ���ַ����Ƿ����
			loc = i;		// ����������Ϊ��һ���ַ�������ʼλ��

		if(loc != -1) // �������ַ�������
		{
			for(j = loc; loc < 100; loc++)
			{
				if(*(p1+loc) == '\0')	// ƴ�ӽ�������
					break;
				*(p1+loc) = *(p1+loc+1);
			}
		}
	}

	return 0;
}


int main()
{
	char str[100] = {0};
	char *p;
	char point;
	int i;
	p = str;

	// ��ȡ����
	printf("Enter strings: ");	
	for(i = 0; i < 100; i++)	// ��ȡ�ַ���
	{
		scanf("%c", &point);

		if(point == '\n')	 // ��������
			break;

		*(p+i) = point;		// ���ַ�����������str��
	}

	// ƴ���ַ���
	mystrcat(str);
	
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