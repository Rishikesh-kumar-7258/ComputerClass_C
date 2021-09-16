/* Minimum bits required to store the number */

#include <stdio.h>

int main() {
	
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	int bits = 0, temp = n;
	
	while(temp)
	{
		bits++;
		temp >>= 1;
	}
	
	printf("Minimum number of bits required to store %d is %d", n, bits);
	
	return 0;
}