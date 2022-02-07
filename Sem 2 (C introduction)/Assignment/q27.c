// Find LCM of two numbers

#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);
	
	int product = a *b;
	printf("The product of %d and %d is ", a, b);
	while (a)
	{
		int temp = a;
		a = b % a;
		b = temp;
	}
	
	int lcm = product / b; // product of two numbers = lcm * hcf
	printf("%d", lcm);
	
	return 0;
}