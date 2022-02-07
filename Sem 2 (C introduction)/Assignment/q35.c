/* Count the number of digits */

#include <stdio.h>

int main() {
	
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	/* Easy method
	int digits = log10(n) + 1;
	*/
	
	// Another approach
	int digits = 0, temp = n;
	while (temp)
	{
		digits++;
		temp /= 10;
	}
	
	printf("The number of digits is %d", digits);
	return 0;
}