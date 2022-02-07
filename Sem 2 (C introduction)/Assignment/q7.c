#include <stdio.h>

int main()
{
	int n; 
	printf("Enter a number: ");
	scanf("%d", &n);
	
	if (n >= 10)
		printf("The last two digits of %d is %d", n, n%100);
	else printf("Invalid input");
	
	return 0;
}