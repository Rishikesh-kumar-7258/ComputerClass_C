#include <stdio.h>

int main()
{
	int n;
	printf("Enter the age: ");
	scanf("%d", &n);
	
	if (n >= 18) printf("Eligible");
	else printf("Not eligible");
	
	return 0;
}