#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	
	printf("The HCF of %d and %d is ", a, b);
	while (a)
	{
		int temp = a;
		a = b%a;
		b = temp;
	}
	
	printf("%d", b);
	return 0;
}