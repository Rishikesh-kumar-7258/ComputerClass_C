#include <stdio.h>

int main()
{
	int n, sum = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) sum += i;
	
	printf("The sum of numbers upto %d is %d", n, sum);
	
	return 0;
}