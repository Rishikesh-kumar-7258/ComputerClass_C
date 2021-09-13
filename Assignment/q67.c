#include <stdio.h>

int sum(int n);

int main()
{
	int n; 
	printf("Enter the number: ");
	scanf("%d", &n);
	
	printf("The sum of %d natural numbers is %d", n, sum(n));
	
	return 0;
}

int sum (int n)
{
	int *ptr = &n;
	
	return (*ptr * (*ptr + 1)) / 2;
}
