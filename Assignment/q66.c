#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	printf("Enter the coefficients of x^2, x and constant term respectively: ");
	scanf("%d %d %d", &a, &b, &c);
	
	int D = b*b - 4*a*c;
	
	if (D < 0) 
	{
		printf("The roots are unreal\n");
		printf("The roots are (-%d + %di / 2 * %d)  and (-%d - %di / 2 * %d)", b, D, a, b, D, a);
	}
	else if (D == 0) 
	{
		printf("The roots are real and equal\n");
		printf("The root will be %d", -b/2*a);
	}
	else 
	{
		printf("The roots are real and unequal\n");
		printf("The roots are %d and %d", (-b+sqrt(D))/2*a, (-b-sqrt(D))/2*a);
	}
	
	return 0;
}
