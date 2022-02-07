#include <stdio.h>
#include <math.h>

double area(double);

int main()
{
	double r;
	printf("Enter the radius: ");
	scanf("%lf", &r);
	
	printf("The area of circle is %lf", area(r));
	
	return 0;
}

double area(double r)
{
	return M_PI*r*r;
}