// ���ú�������ƽ��ֵ

#include <stdio.h>

// aver�������������֣������֡�0,����1��<0,����-1��=0����0
int aver(int numb)
{
	if(numb > 0)
		numb = 1;
	else if(numb == 0)
		numb = -1;
	else
		numb = 0;

	return numb;
}


int main()
{
	int number;
	int numb1;
	int counter;
	int counter1 = 0;
	int total = 0;
	double ave;
	int i;

	printf("Enter number: ");
	scanf("%d", &counter);			// ��ȡ���������
	for(i = 0; i < counter; i++)
	{
		scanf("%d", &number);		// ��ȡ����
		numb1 = aver(number);
		
		if(numb1 == 1)				// �������������
		{
			total += number;
			counter1++;				// ͳ����������
		}
	}

	ave = (double)total / counter1; // ��ƽ��ֵ

	printf("%lf\n", ave);

	return 0;
}