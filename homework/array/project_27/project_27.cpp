// ²éÕÒÔªËØ

#include <stdio.h>

int find(int arr[], int n,int ele)
{
	int flag = 0;

	for(int i = 0; i < n; i++)
	{
		if(arr[i] == ele)
		{
			flag = i;
			break;
		}
	}

	if(flag == 0)
		return -1;
	else
		return flag;
}


int main()
{
	int counter = 0;
	int number;
	int a[100];
	int i;
	int result;
	int element;

	printf("Enter number: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &number);
		if(number == 0)
			break;
		a[i] = number;
		counter++;
	}
	
	scanf("%d", &element);
	result = find(a, counter,element);

	printf("%d\n", result);

	return 0;
}