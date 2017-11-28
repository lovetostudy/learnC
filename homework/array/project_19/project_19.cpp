// ×Ö·û´®×ª»»

#include <stdio.h>

int main()
{
	char a[100] = {0};
	int i;
	char point;

	printf("Enter string: ");
	for(i = 0; i < 100; i++)
	{
		scanf("%c", &point);
		if(point == '\n')
			break;
		a[i] = point;
	}

	for(i = 0; i < 100; i++)
	{
		if(a[i] == '\0')
			break;

		if(a[i] >= 'A' && a[i] <= 'Z')
			a[i] += 32;
		else if(a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
		else
			continue;
	}

	for(i = 0; i < 100; i++)
	{
		if(a[i] == '\0')
			break;
		printf("%c", a[i]);
	}

	printf("\n");

	return 0;
}