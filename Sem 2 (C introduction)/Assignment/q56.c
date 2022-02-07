#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	int mask = 1 << 3; // << is left shift operator
	
	n ^= mask; // ^ is XOR operator
	
	printf("The number after changing the bit is %d", n);
	
	return 0;
}