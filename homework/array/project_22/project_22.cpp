// �ַ����Ƚ�

#include <stdio.h>

// function mystrcmp: compare strings in array, if they are equaled,return 0, else return the number string1 - string2
int mystrcmp(char arr[])
{
	char b[10] = {0};
	int i,k;
	int flag = 0;	// �ٶ�����ͬ���ַ���

	for(i = 0; i < 100; i++)	// ��ȡ��һ���ַ�����������b�У�����k��λ��һ���ַ���������a�е���ʼ�±�
	{
		if(arr[i] == 32)
		{
			k = i + 1;
			break;
		}
		b[i] = arr[i];
	}

	for(i = 0; i < 100; i++)
	{
		if(b[i] == arr[k+i]) // �ж��Ƿ����
			continue;
		flag = b[i] - arr[k+i]; // �������Ⱦͻ�ȡ��ֵ
		break;
	}

	return flag;
}


int main()
{
	char a[100] = {0};
	char point;
	int i;
	int result;

	printf("Enter string: ");
	for(i = 0; i < 100; i++)	// get input
	{
		scanf("%c", &point);
		if(point == '\n')
			break;
		a[i] = point;
	}

	result = mystrcmp(a);	// call mystrcmp
		
	printf("%d\n", result);	// print result

	return 0;
}