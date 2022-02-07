#include <stdio.h>

int main()
{
	int a, b, c, d, e;
	printf("Enter five numbers: ");
	scanf("%d %d %d %d %d", &a, &b, &c ,&d ,&e);
	
	printf("The average of these numbers is %lf", (a+b+c+d+e)/5.0);
	
	return 0;
}