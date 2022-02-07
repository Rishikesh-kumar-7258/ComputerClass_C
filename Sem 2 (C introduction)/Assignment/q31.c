/* Print the pattern
****
***
**
*
and so on */

#include <stdio.h>

int main() {
	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j <= n-1-i; j++) printf("%c", '*');
		printf("\n");
	}

	return 0;
}