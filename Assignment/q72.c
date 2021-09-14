#include <stdio.h>

int main()
{
	int n; 
	printf("Enter the number: ");
	scanf("%d", &n);
	
	printf("The address of %d is %p", n, &n);
	
	
	return 0;
}