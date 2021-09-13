#include <stdio.h>
#include <math.h>

int isperfect(int n)
{
	int k = sqrt(n);
	
	return k*k == n;
}

int main()
{
	printf("%d\n", isperfect(9));
	printf("Hello world"); 
	return 0;
}