// �ַ�������

#include <stdio.h>

// ins_str��������ȡһ���ַ�����һ���ַ��������ַ������ַ�����
int ins_str(char arr[], char ins)
{
	char brr[100] = {0};
	int i;
	int k = 0;	// ��Ϊ����a�Ķ�λ��

	for(i = 0; i < 100; i++)	// ���ַ�����������b��
	{
		if(arr[i] == '\0')
			break;
		brr[i] = arr[i];
	}
	
	for(i = 0; i < 100; i++) // ���ַ������ַ�����
	{
		if(brr[i + 1] == '\0') // ��������һ���ַ�������ѭ��
		{
			arr[k] = brr[i];
			break;
		}
		arr[k] = brr[i]; // ����ԭ�ַ�
		k++;
		arr[k] = ins;	// ��������ַ�
		k++;
	}

	return 0;
}


int main()
{
	char a[100] = {0};
	char point;	// �洢Ҫ������ַ�
	int i;

	printf("Enter string: ");
	for(i = 0; i < 100; i++)	// ��ȡ�ַ���
	{
		scanf("%c", &point);
		if(point == 32)
			break;
		a[i] = point;
	}
	scanf("%c", &point);	// ��ȡҪ������ַ�

	ins_str(a, point);		// ����ins_str����
	
	for(i = 0; i < 100; i++)	// ������
	{
		if(a[i] == '\0')
			break;
		printf("%c", a[i]);
	}

	printf("\n");

	return 0;
}