#include <stdio.h>

int main()
{
	int n = 10;
//	printf("Enter a number: ");
//	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++)
	{
		if (i%3==0) continue;
		if (i%5 == 0) break;
		
		printf("%d ", i);
	}
	return 0;
}