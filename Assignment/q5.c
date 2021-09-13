#include <stdio.h>

int main()
{
	int n; 
	printf("Enter a number : ");
	scanf("%d", &n);
	
	printf("The number %d is ", n);
	if (n%2 == 0) printf("Even");
	else printf("Odd");
	printf("\n");
	
	return 0;
}