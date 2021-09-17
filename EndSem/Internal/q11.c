/*Write a C program to calculate a^bc. a,b and c are integer variables using function.*/

#include <stdio.h>

int power(int, int, int);

int main()
{
	int a, b, c;
	printf("Enter three numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	
	printf("The power is %d", power(a, b, c));
	
	return 0;
}

int power(int a, int b, int c)
{
	int mul = b *c, ans = 1;
	while (mul)
	{
		if (mul&1) 
		{
			ans *= a;
			mul--;
		}
		else
		{
			a *= a;
			mul /= 2;
		}
	}
}