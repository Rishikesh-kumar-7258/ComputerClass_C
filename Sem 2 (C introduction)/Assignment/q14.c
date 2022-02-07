#include <stdio.h>

int main()
{
	int a,b, pow = 1, pow2 = 1;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	
	for (int i = 0; i < b; i++) pow *= a;
	
	while (b--) pow2 *= a;
	
	printf("The power of %d to %d is %d\n", a, b, pow);
	printf("The power of %d to %d is %d\n", a, b, pow2);
	
	return 0;
}