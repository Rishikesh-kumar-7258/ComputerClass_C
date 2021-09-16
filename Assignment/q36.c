/* Find even or odd using bit manipulation */

#include <stdio.h>

int main() {
	
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	if (n&1) printf("The number is odd");
	else printf("The number is even");
	
	return 0;
}