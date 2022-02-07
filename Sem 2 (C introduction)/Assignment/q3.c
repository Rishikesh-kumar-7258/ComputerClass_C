#include <stdio.h>

int main()
{
	double f, c;
	printf("Enter temperature in farenheit: ");
	scanf("%lf", &f);
	
	c = ((f-32)* 9) / 5;
	
	printf("The temperature in celcius is %lf", c);
	return 0;
}