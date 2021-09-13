#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j&i)printf("%d", j);
			else printf("%c", j+'A');
		}
		printf("\n");
	}	
	return 0;
}