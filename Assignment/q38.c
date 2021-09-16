/* Count the number of 1's */

#include <stdio.h>

int main() {
	
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	int ones = 0, temp = n;
	
	while(temp)
	{
		ones++;
		temp &= temp-1;
	}
	
	printf("Number of ones in %d is %d", n, ones);
	
	return 0;
}