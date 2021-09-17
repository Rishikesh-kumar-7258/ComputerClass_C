//Write a C program to find sum of following series: 1^3 + 2^3 + 3^3 ….n^3 using function.
#include <stdio.h>

int series(int);

int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	printf("The sum of series is %d", series(n));
	return 0;
}

int series(int n)
{
	int sum = 0;
	for (int i = 1; i <=n; i++)
	{
		sum += i*i*i;
	}
	
	return sum;
}