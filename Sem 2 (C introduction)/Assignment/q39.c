/* Check whether the position is set or not */

#include <stdio.h>

int main() {
	
	int n, pos;
	printf("Enter the number and pos: ");
	scanf("%d %d", &n, &pos);
	
	int mask = 1 << pos;
	
	if (n&mask) printf("The %dth position in %d is set", pos, n);
	else printf("The %dth position in %d is not set", pos, n);
	
	return 0;
}