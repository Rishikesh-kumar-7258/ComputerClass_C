// Print the sum of digits and reverse its order

#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	int sum = 0, rev = 0;
	
	while (n)
	{
		int rem = n % 10;
		sum += rem;
		rev = rev * 10 + rem;
		
		n /= 10;
		
	}
	
	printf("The sum of digits is %d\nReverse of the number is %d", sum, rev);
	
	return 0;
}