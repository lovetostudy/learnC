// �ַ�������

#include <Stdio.h>

// mystrcar�������������ַ�����������
int mystrcat(char arr[])
{
	int k = -1; 
	int i,j;

	for(i = 0; i < 100; i++)
	{
		if(arr[i] == 32)  // �жϵ�һ���ַ����Ƿ����
			k = i;

		if(k != -1) // �������ַ�������
		{
			for(j = k; k < 100; k++)
			{
				if(arr[k] == '\0')
					break;
				arr[k] = arr[k+1];
			}
		}
	}

	return 0;
}


int main()
{
	char str[100] = {0};
	char point;
	int i;

	printf("Enter strings: ");
	
	// ��ȡ�ַ���
	for(i = 0; i < 100; i++)
	{
		scanf("%c", &point);

		if(point == '\n')
			break;

		str[i] = point;
	}

	mystrcat(str);
	
	// ������
	for(i = 0; i < 100; i++)
	{
		if(str[i] == '\0')
			break;

		printf("%c", str[i]);
	}

	printf("\n");

	return 0;
}