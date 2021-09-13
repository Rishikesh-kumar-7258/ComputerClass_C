#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter two numbers : ");
	scanf("%d %d", &a, &b);
	
	int fact = 1;
	for (int i = 1; i <= a; i++) fact *= i;
	
	int pow = 1;
	while (b)
	{
		if (b&1) 
		{
			pow *= a;
			b--;
		}
		else 
		{
			a *= a;
			b /= 2;
		}
	}
	
	printf("The solution of the equation is %d", fact*pow);
	
	return 0;
}