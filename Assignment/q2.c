#include <stdio.h>

int main()
{
	double r, area;
	printf("Enter the radius of circle: ");
	scanf("%lf", &r);
	
	area = 3.14 * r * r;
	
	printf("The are of the circle is %lf", area);
	return 0;
}